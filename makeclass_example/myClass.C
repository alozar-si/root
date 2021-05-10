#define myClass_cxx
#include "myClass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TString.h>

void myClass::Loop()
{
   //   In a ROOT session, you can do:
   //      root> .L myClass.C
   //      root> myClass t
   //      root> t.GetEntry(12); // Fill t data members with entry number 12
   //      root> t.Show();       // Show values of entry 12
   //      root> t.Show(16);     // Read and show values of entry 16
   //      root> t.Loop();       // Loop on all entries
   //

   //    This is the loop skeleton where:
   //    jentry is the global entry number in the chain
   //    ientry is the entry number in the current Tree
   //    Note that the argument to GetEntry must be:
   //    jentry for TChain::GetEntry
   //    ientry for TTree::GetEntry and TBranch::GetEntry
   //
   //    To read only selected branches, Insert statements like:
   // METHOD1:
   //    fChain->SetBranchStatus("*",0);     // disable all branches
   //    fChain->SetBranchStatus("branchname",1);  // activate branchname
   // METHOD2: replace line
   //    fChain->GetEntry(jentry);           //read all branches
   //    by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   /* ----- User settings ----- */ 
   int mc_data = 0; // use Monte Carlo dataset (1), use experiment dataset (0)

   // PID cuts
   double TCut_R_Kpi_all = 0.95; // previously known as TCut_kaonPID
   Double_t arich_PID_cuts[] = {0,
                                 0.01,
                                 0.02,
                                 0.05,
                                 0.10,
                                 0.15,
                                 0.20,
                                 0.30,
                                 0.40,
                                 0.50,
                                 0.60,
                                 0.70,
                                 0.80,
                                 0.85,
                                 0.90,
                                 0.95}; //0.32,0.45, 0.35, 0.33, 0.55,   0.25,
   int len_arich_PID_cuts = sizeof(arich_PID_cuts)/sizeof(arich_PID_cuts[0]);

   // Histogram settings
   float h_min = 0.98;
   float h_max = 1.10;

   /* -----  Histograms ----- */
   // Define histograms
   TH1F *myHisto  = new TH1F("myHisto","fPx", 101, 0.98, 1.1);
   TH1F *smallHisto = new TH1F("small","fPx", 100, 0-0.005, 1+0.005);
   TH1F* h_M_phi_pids[len_arich_PID_cuts]; // initialise histograms for different arich PID cuts
   
   // Inicialize histograms
   TString hist_name, hist_title;
   for(int j=0; j < len_arich_PID_cuts; j++){
      hist_title = "K+K- mass, cut:R_Kpi_arich > " + std::to_string(arich_PID_cuts[j]) + ";Mass (Gev/c^{2});N";
      hist_name = "h_M_phi_pids_" + std::to_string((Int_t)(arich_PID_cuts[j]*100));           
      h_M_phi_pids[j] = new TH1F(hist_name, hist_title, 100, h_min, h_max);
   }

   /* ----- Necessary variables----- */ 
   //Long64_t nentries = fChain->GetEntriesFast();
   randGen0.SetSeed(25);
   Int_t nentries = (Int_t)fChain->GetEntries();
   int progress_counter = 0;                       // for monitoring processing progress
   int progress = 0;                               // for monitoring processing progress
   Long64_t nbytes = 0, nb = 0;
   double track_R_Kpi_arich;                       // R_Kpi_arich value for the chosen track for arich performance
   
   /* ----- Loop -----*/
   for (Int_t jentry=0; jentry<nentries;jentry++) {
      // Print processing progress    
      if(progress_counter == int(10.0/100*nentries)){
         progress_counter = 0;
         progress = progress + 10.0/100 * 100;
         std::cout << progress << "%" << std::endl;
      }
      progress_counter++;

      // Load an entrie
      Long64_t ientry = LoadTree(jentry);             // Load tree
      if (ientry < 0) break;                          // Break if no entries
      nb = fChain->GetEntry(jentry);   nbytes += nb;  // Get size of the entry

      // Apply global cut
      if (Cut(ientry) < 0) continue;                  // Apply global cuts

      // Example code 
      smallHisto->Fill(K_0_R_Kpi_all);
      /* ----- main code ----- */
      // Apply cut on R_Kpi_all for other track
      switch (chosen_track){
      case -1:
         // not in ARICH
         break;
      case 0:
      case 2:
         if(K_1_R_Kpi_all <= TCut_R_Kpi_all){
            continue;
         }
         track_R_Kpi_arich = K_0_R_Kpi_arich;
         break;

      case 1:     
      case 3:
         if(K_0_R_Kpi_all <= TCut_R_Kpi_all){            
            continue;
         }
         track_R_Kpi_arich = K_1_R_Kpi_arich;
         break;

      default:
         break;
      }

      //std::cout << track_R_Kpi_arich << std::endl;
      myHisto->Fill(InvM);
      // Apply PID cuts from the array
      for(int j = 0; j < len_arich_PID_cuts; j++){
         if(track_R_Kpi_arich > arich_PID_cuts[j]){
            h_M_phi_pids[j]->Fill(InvM); 
            //h_M_phi_pids_segmented[j][segment_index]->Fill(M);
         }
      }
      /* ----- code for MC true signal events ----- */
   }
   std::cout << "nentries " << nentries << std::endl;
   std::cout << "nbytes: " << nbytes << std::endl;

   auto c1 = new TCanvas("c1", "c1", 800, 800);
   //myHisto->Draw();
   h_M_phi_pids[14]->Draw();
   auto c2 = new TCanvas("c2", "c2", 800, 800);
   h_M_phi_pids[15]->Draw();
   //smallHisto->Draw();
   /*h_M_phi_pids[0]->Draw();
   h_M_phi_pids[1]->Draw("Same");*/
}
