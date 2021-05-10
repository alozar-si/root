//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu May  6 18:27:45 2021 by ROOT version 6.20/04
// from TChain phi/
//////////////////////////////////////////////////////////

#ifndef myClass_h
#define myClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TRandom3.h>
#include <string>
#include <dirent.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "TObject.h"
#include "arich/dataobjects/ARICHPhoton.h"

class myClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMax__experiment_ = 1;
   static constexpr Int_t kMax__run_ = 1;
   static constexpr Int_t kMax__event_ = 1;
   static constexpr Int_t kMax__candidate_ = 1;
   static constexpr Int_t kMax__ncandidates_ = 1;
   static constexpr Int_t kMax__weight_ = 1;
   static constexpr Int_t kMaxK_0_arich_photons = 226;
   static constexpr Int_t kMaxK_1_arich_photons = 206;

   // Declaration of leaf types
   Int_t           __experiment__;
   Int_t           __run__;
   Int_t           __event__;
   Int_t           __candidate__;
   Int_t           __ncandidates__;
   Double_t        __weight__;
   Double_t        isSignal;
   Double_t        mcErrors;
   Double_t        mcPDG;
   Double_t        px;
   Double_t        py;
   Double_t        pz;
   Double_t        pt;
   Double_t        p;
   Double_t        E;
   Double_t        distance;
   Double_t        significanceOfDistance;
   Double_t        dx;
   Double_t        dy;
   Double_t        dz;
   Double_t        x;
   Double_t        y;
   Double_t        z;
   Double_t        x_uncertainty;
   Double_t        y_uncertainty;
   Double_t        z_uncertainty;
   Double_t        dr;
   Double_t        dphi;
   Double_t        dcosTheta;
   Double_t        prodVertexX;
   Double_t        prodVertexY;
   Double_t        prodVertexZ;
   Double_t        prodVertexXErr;
   Double_t        prodVertexYErr;
   Double_t        prodVertexZErr;
   Double_t        chiProb;
   Double_t        M;
   Double_t        ErrM;
   Double_t        SigM;
   Double_t        InvM;
   Double_t        cosAngleBetweenMomentumAndVertexVector;
   Double_t        K_0_kaonID;
   Double_t        K_0_pionID;
   Double_t        K_0_protonID;
   Double_t        K_0_muonID;
   Double_t        K_0_electronID;
   Double_t        K_0_deuteronID;
   Double_t        K_0_px;
   Double_t        K_0_py;
   Double_t        K_0_pz;
   Double_t        K_0_pt;
   Double_t        K_0_p;
   Double_t        K_0_E;
   Double_t        K_0_dr;
   Double_t        K_0_dx;
   Double_t        K_0_dy;
   Double_t        K_0_dz;
   Double_t        K_0_d0;
   Double_t        K_0_z0;
   Double_t        K_0_pValue;
   Double_t        K_0_nCDCHits;
   Double_t        K_0_cosTheta;
   Double_t        K_0_clusterE;
   Double_t        K_0_nMatchedKLMClusters;
   //Double_t        K_0_pt;
   Double_t        K_0_minC2TDist;
   Double_t        K_0_trackNECLClusters;
   Double_t        K_0_dll_arich;
   Double_t        K_0_R_Kpi_arich;
   Double_t        K_0_kaonID_arich;
   Double_t        K_0_pionID_arich;
   Double_t        K_0_R_Kpi_all;
   Double_t        K_0_R_ppi_woarich;
   Double_t        K_0_R_Ke_all;
   Double_t        K_0_R_Ke_arich;
   Double_t        K_1_kaonID;
   Double_t        K_1_pionID;
   Double_t        K_1_protonID;
   Double_t        K_1_muonID;
   Double_t        K_1_electronID;
   Double_t        K_1_deuteronID;
   Double_t        K_1_px;
   Double_t        K_1_py;
   Double_t        K_1_pz;
   Double_t        K_1_pt;
   Double_t        K_1_p;
   Double_t        K_1_E;
   Double_t        K_1_dr;
   Double_t        K_1_dx;
   Double_t        K_1_dy;
   Double_t        K_1_dz;
   Double_t        K_1_d0;
   Double_t        K_1_z0;
   Double_t        K_1_pValue;
   Double_t        K_1_nCDCHits;
   Double_t        K_1_cosTheta;
   Double_t        K_1_clusterE;
   Double_t        K_1_nMatchedKLMClusters;
   //Double_t        K_1_pt;
   Double_t        K_1_minC2TDist;
   Double_t        K_1_trackNECLClusters;
   Double_t        K_1_dll_arich;
   Double_t        K_1_R_Kpi_arich;
   Double_t        K_1_kaonID_arich;
   Double_t        K_1_pionID_arich;
   Double_t        K_1_R_Kpi_all;
   Double_t        K_1_R_ppi_woarich;
   Double_t        K_1_R_Ke_all;
   Double_t        K_1_R_Ke_arich;
   Int_t           K_0_arich_detPhot;
   Float_t         K_0_arich_expPhot_e;
   Float_t         K_0_arich_expPhot_mu;
   Float_t         K_0_arich_expPhot_pi;
   Float_t         K_0_arich_expPhot_K;
   Float_t         K_0_arich_expPhot_p;
   Float_t         K_0_arich_expPhot_d;
   Float_t         K_0_arich_logL_e;
   Float_t         K_0_arich_logL_mu;
   Float_t         K_0_arich_logL_pi;
   Float_t         K_0_arich_logL_K;
   Float_t         K_0_arich_logL_p;
   Float_t         K_0_arich_logL_d;
   Int_t           K_0_arich_recHit_PDG;
   Float_t         K_0_arich_recHit_x;
   Float_t         K_0_arich_recHit_y;
   Float_t         K_0_arich_recHit_z;
   Float_t         K_0_arich_recHit_p;
   Float_t         K_0_arich_recHit_theta;
   Float_t         K_0_arich_recHit_phi;
   Int_t           K_0_arich_mcHit_PDG;
   Float_t         K_0_arich_mcHit_x;
   Float_t         K_0_arich_mcHit_y;
   Float_t         K_0_arich_mcHit_z;
   Float_t         K_0_arich_mcHit_p;
   Float_t         K_0_arich_mcHit_theta;
   Float_t         K_0_arich_mcHit_phi;
   Float_t         K_0_arich_winHit_x;
   Float_t         K_0_arich_winHit_y;
   Int_t           K_0_arich_photons_;
   UInt_t          K_0_arich_photons_fUniqueID[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   UInt_t          K_0_arich_photons_fBits[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Int_t           K_0_arich_photons_m_hitID[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_thetaCer[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_phiCer[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Int_t           K_0_arich_photons_m_mirror[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_sigExp_e[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_bkgExp_e[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_sigExp_mu[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_bkgExp_mu[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_sigExp_pi[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_bkgExp_pi[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_sigExp_K[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_bkgExp_K[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_sigExp_p[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_bkgExp_p[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_nCosThetaCh_e[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_nCosThetaCh_mu[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_nCosThetaCh_pi[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_nCosThetaCh_K[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_nCosThetaCh_p[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_phiCh_e[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_phiCh_mu[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_phiCh_pi[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_phiCh_K[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_phiCh_p[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_x[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_y[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Int_t           K_0_arich_photons_m_module[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Int_t           K_0_arich_photons_m_channel[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Float_t         K_0_arich_photons_m_phiCerTrk[kMaxK_0_arich_photons];   //[K_0_arich_photons_]
   Int_t           K_1_arich_detPhot;
   Float_t         K_1_arich_expPhot_e;
   Float_t         K_1_arich_expPhot_mu;
   Float_t         K_1_arich_expPhot_pi;
   Float_t         K_1_arich_expPhot_K;
   Float_t         K_1_arich_expPhot_p;
   Float_t         K_1_arich_expPhot_d;
   Float_t         K_1_arich_logL_e;
   Float_t         K_1_arich_logL_mu;
   Float_t         K_1_arich_logL_pi;
   Float_t         K_1_arich_logL_K;
   Float_t         K_1_arich_logL_p;
   Float_t         K_1_arich_logL_d;
   Int_t           K_1_arich_recHit_PDG;
   Float_t         K_1_arich_recHit_x;
   Float_t         K_1_arich_recHit_y;
   Float_t         K_1_arich_recHit_z;
   Float_t         K_1_arich_recHit_p;
   Float_t         K_1_arich_recHit_theta;
   Float_t         K_1_arich_recHit_phi;
   Int_t           K_1_arich_mcHit_PDG;
   Float_t         K_1_arich_mcHit_x;
   Float_t         K_1_arich_mcHit_y;
   Float_t         K_1_arich_mcHit_z;
   Float_t         K_1_arich_mcHit_p;
   Float_t         K_1_arich_mcHit_theta;
   Float_t         K_1_arich_mcHit_phi;
   Float_t         K_1_arich_winHit_x;
   Float_t         K_1_arich_winHit_y;
   Int_t           K_1_arich_photons_;
   UInt_t          K_1_arich_photons_fUniqueID[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   UInt_t          K_1_arich_photons_fBits[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Int_t           K_1_arich_photons_m_hitID[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_thetaCer[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_phiCer[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Int_t           K_1_arich_photons_m_mirror[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_sigExp_e[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_bkgExp_e[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_sigExp_mu[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_bkgExp_mu[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_sigExp_pi[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_bkgExp_pi[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_sigExp_K[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_bkgExp_K[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_sigExp_p[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_bkgExp_p[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_nCosThetaCh_e[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_nCosThetaCh_mu[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_nCosThetaCh_pi[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_nCosThetaCh_K[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_nCosThetaCh_p[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_phiCh_e[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_phiCh_mu[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_phiCh_pi[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_phiCh_K[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_phiCh_p[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_x[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_y[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Int_t           K_1_arich_photons_m_module[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Int_t           K_1_arich_photons_m_channel[kMaxK_1_arich_photons];   //[K_1_arich_photons_]
   Float_t         K_1_arich_photons_m_phiCerTrk[kMaxK_1_arich_photons];   //[K_1_arich_photons_]

   // List of branches
   TBranch        *b___experiment__;   //!
   TBranch        *b___run__;   //!
   TBranch        *b___event__;   //!
   TBranch        *b___candidate__;   //!
   TBranch        *b___ncandidates__;   //!
   TBranch        *b___weight__;   //!
   TBranch        *b_isSignal;   //!
   TBranch        *b_mcErrors;   //!
   TBranch        *b_mcPDG;   //!
   TBranch        *b_px;   //!
   TBranch        *b_py;   //!
   TBranch        *b_pz;   //!
   TBranch        *b_pt;   //!
   TBranch        *b_p;   //!
   TBranch        *b_E;   //!
   TBranch        *b_distance;   //!
   TBranch        *b_significanceOfDistance;   //!
   TBranch        *b_dx;   //!
   TBranch        *b_dy;   //!
   TBranch        *b_dz;   //!
   TBranch        *b_x;   //!
   TBranch        *b_y;   //!
   TBranch        *b_z;   //!
   TBranch        *b_x_uncertainty;   //!
   TBranch        *b_y_uncertainty;   //!
   TBranch        *b_z_uncertainty;   //!
   TBranch        *b_dr;   //!
   TBranch        *b_dphi;   //!
   TBranch        *b_dcosTheta;   //!
   TBranch        *b_prodVertexX;   //!
   TBranch        *b_prodVertexY;   //!
   TBranch        *b_prodVertexZ;   //!
   TBranch        *b_prodVertexXErr;   //!
   TBranch        *b_prodVertexYErr;   //!
   TBranch        *b_prodVertexZErr;   //!
   TBranch        *b_chiProb;   //!
   TBranch        *b_M;   //!
   TBranch        *b_ErrM;   //!
   TBranch        *b_SigM;   //!
   TBranch        *b_InvM;   //!
   TBranch        *b_cosAngleBetweenMomentumAndVertexVector;   //!
   TBranch        *b_K_0_kaonID;   //!
   TBranch        *b_K_0_pionID;   //!
   TBranch        *b_K_0_protonID;   //!
   TBranch        *b_K_0_muonID;   //!
   TBranch        *b_K_0_electronID;   //!
   TBranch        *b_K_0_deuteronID;   //!
   TBranch        *b_K_0_px;   //!
   TBranch        *b_K_0_py;   //!
   TBranch        *b_K_0_pz;   //!
   TBranch        *b_K_0_pt;   //!
   TBranch        *b_K_0_p;   //!
   TBranch        *b_K_0_E;   //!
   TBranch        *b_K_0_dr;   //!
   TBranch        *b_K_0_dx;   //!
   TBranch        *b_K_0_dy;   //!
   TBranch        *b_K_0_dz;   //!
   TBranch        *b_K_0_d0;   //!
   TBranch        *b_K_0_z0;   //!
   TBranch        *b_K_0_pValue;   //!
   TBranch        *b_K_0_nCDCHits;   //!
   TBranch        *b_K_0_cosTheta;   //!
   TBranch        *b_K_0_clusterE;   //!
   TBranch        *b_K_0_nMatchedKLMClusters;   //!
   //TBranch        *b_K_0_pt;   //!
   TBranch        *b_K_0_minC2TDist;   //!
   TBranch        *b_K_0_trackNECLClusters;   //!
   TBranch        *b_K_0_dll_arich;   //!
   TBranch        *b_K_0_R_Kpi_arich;   //!
   TBranch        *b_K_0_kaonID_arich;   //!
   TBranch        *b_K_0_pionID_arich;   //!
   TBranch        *b_K_0_R_Kpi_all;   //!
   TBranch        *b_K_0_R_ppi_woarich;   //!
   TBranch        *b_K_0_R_Ke_all;   //!
   TBranch        *b_K_0_R_Ke_arich;   //!
   TBranch        *b_K_1_kaonID;   //!
   TBranch        *b_K_1_pionID;   //!
   TBranch        *b_K_1_protonID;   //!
   TBranch        *b_K_1_muonID;   //!
   TBranch        *b_K_1_electronID;   //!
   TBranch        *b_K_1_deuteronID;   //!
   TBranch        *b_K_1_px;   //!
   TBranch        *b_K_1_py;   //!
   TBranch        *b_K_1_pz;   //!
   TBranch        *b_K_1_pt;   //!
   TBranch        *b_K_1_p;   //!
   TBranch        *b_K_1_E;   //!
   TBranch        *b_K_1_dr;   //!
   TBranch        *b_K_1_dx;   //!
   TBranch        *b_K_1_dy;   //!
   TBranch        *b_K_1_dz;   //!
   TBranch        *b_K_1_d0;   //!
   TBranch        *b_K_1_z0;   //!
   TBranch        *b_K_1_pValue;   //!
   TBranch        *b_K_1_nCDCHits;   //!
   TBranch        *b_K_1_cosTheta;   //!
   TBranch        *b_K_1_clusterE;   //!
   TBranch        *b_K_1_nMatchedKLMClusters;   //!
   //TBranch        *b_K_1_pt;   //!
   TBranch        *b_K_1_minC2TDist;   //!
   TBranch        *b_K_1_trackNECLClusters;   //!
   TBranch        *b_K_1_dll_arich;   //!
   TBranch        *b_K_1_R_Kpi_arich;   //!
   TBranch        *b_K_1_kaonID_arich;   //!
   TBranch        *b_K_1_pionID_arich;   //!
   TBranch        *b_K_1_R_Kpi_all;   //!
   TBranch        *b_K_1_R_ppi_woarich;   //!
   TBranch        *b_K_1_R_Ke_all;   //!
   TBranch        *b_K_1_R_Ke_arich;   //!
   TBranch        *b_detPhot;   //!
   TBranch        *b_K_0_arich_expPhot;   //!
   TBranch        *b_K_0_arich_logL;   //!
   TBranch        *b_K_0_arich_recHit;   //!
   TBranch        *b_K_0_arich_mcHit;   //!
   TBranch        *b_K_0_arich_winHit;   //!
   TBranch        *b_K_0_arich_photons_;   //!
   TBranch        *b_K_0_arich_photons_fUniqueID;   //!
   TBranch        *b_K_0_arich_photons_fBits;   //!
   TBranch        *b_K_0_arich_photons_m_hitID;   //!
   TBranch        *b_K_0_arich_photons_m_thetaCer;   //!
   TBranch        *b_K_0_arich_photons_m_phiCer;   //!
   TBranch        *b_K_0_arich_photons_m_mirror;   //!
   TBranch        *b_K_0_arich_photons_m_sigExp_e;   //!
   TBranch        *b_K_0_arich_photons_m_bkgExp_e;   //!
   TBranch        *b_K_0_arich_photons_m_sigExp_mu;   //!
   TBranch        *b_K_0_arich_photons_m_bkgExp_mu;   //!
   TBranch        *b_K_0_arich_photons_m_sigExp_pi;   //!
   TBranch        *b_K_0_arich_photons_m_bkgExp_pi;   //!
   TBranch        *b_K_0_arich_photons_m_sigExp_K;   //!
   TBranch        *b_K_0_arich_photons_m_bkgExp_K;   //!
   TBranch        *b_K_0_arich_photons_m_sigExp_p;   //!
   TBranch        *b_K_0_arich_photons_m_bkgExp_p;   //!
   TBranch        *b_K_0_arich_photons_m_nCosThetaCh_e;   //!
   TBranch        *b_K_0_arich_photons_m_nCosThetaCh_mu;   //!
   TBranch        *b_K_0_arich_photons_m_nCosThetaCh_pi;   //!
   TBranch        *b_K_0_arich_photons_m_nCosThetaCh_K;   //!
   TBranch        *b_K_0_arich_photons_m_nCosThetaCh_p;   //!
   TBranch        *b_K_0_arich_photons_m_phiCh_e;   //!
   TBranch        *b_K_0_arich_photons_m_phiCh_mu;   //!
   TBranch        *b_K_0_arich_photons_m_phiCh_pi;   //!
   TBranch        *b_K_0_arich_photons_m_phiCh_K;   //!
   TBranch        *b_K_0_arich_photons_m_phiCh_p;   //!
   TBranch        *b_K_0_arich_photons_m_x;   //!
   TBranch        *b_K_0_arich_photons_m_y;   //!
   TBranch        *b_K_0_arich_photons_m_module;   //!
   TBranch        *b_K_0_arich_photons_m_channel;   //!
   TBranch        *b_K_0_arich_photons_m_phiCerTrk;   //!
   //TBranch        *b_detPhot;   //!
   TBranch        *b_K_1_arich_expPhot;   //!
   TBranch        *b_K_1_arich_logL;   //!
   TBranch        *b_K_1_arich_recHit;   //!
   TBranch        *b_K_1_arich_mcHit;   //!
   TBranch        *b_K_1_arich_winHit;   //!
   TBranch        *b_K_1_arich_photons_;   //!
   TBranch        *b_K_1_arich_photons_fUniqueID;   //!
   TBranch        *b_K_1_arich_photons_fBits;   //!
   TBranch        *b_K_1_arich_photons_m_hitID;   //!
   TBranch        *b_K_1_arich_photons_m_thetaCer;   //!
   TBranch        *b_K_1_arich_photons_m_phiCer;   //!
   TBranch        *b_K_1_arich_photons_m_mirror;   //!
   TBranch        *b_K_1_arich_photons_m_sigExp_e;   //!
   TBranch        *b_K_1_arich_photons_m_bkgExp_e;   //!
   TBranch        *b_K_1_arich_photons_m_sigExp_mu;   //!
   TBranch        *b_K_1_arich_photons_m_bkgExp_mu;   //!
   TBranch        *b_K_1_arich_photons_m_sigExp_pi;   //!
   TBranch        *b_K_1_arich_photons_m_bkgExp_pi;   //!
   TBranch        *b_K_1_arich_photons_m_sigExp_K;   //!
   TBranch        *b_K_1_arich_photons_m_bkgExp_K;   //!
   TBranch        *b_K_1_arich_photons_m_sigExp_p;   //!
   TBranch        *b_K_1_arich_photons_m_bkgExp_p;   //!
   TBranch        *b_K_1_arich_photons_m_nCosThetaCh_e;   //!
   TBranch        *b_K_1_arich_photons_m_nCosThetaCh_mu;   //!
   TBranch        *b_K_1_arich_photons_m_nCosThetaCh_pi;   //!
   TBranch        *b_K_1_arich_photons_m_nCosThetaCh_K;   //!
   TBranch        *b_K_1_arich_photons_m_nCosThetaCh_p;   //!
   TBranch        *b_K_1_arich_photons_m_phiCh_e;   //!
   TBranch        *b_K_1_arich_photons_m_phiCh_mu;   //!
   TBranch        *b_K_1_arich_photons_m_phiCh_pi;   //!
   TBranch        *b_K_1_arich_photons_m_phiCh_K;   //!
   TBranch        *b_K_1_arich_photons_m_phiCh_p;   //!
   TBranch        *b_K_1_arich_photons_m_x;   //!
   TBranch        *b_K_1_arich_photons_m_y;   //!
   TBranch        *b_K_1_arich_photons_m_module;   //!
   TBranch        *b_K_1_arich_photons_m_channel;   //!
   TBranch        *b_K_1_arich_photons_m_phiCerTrk;   //!

   // Other variables
   int mc_data = 0;
   int quick = 0;
   TRandom3 randGen0;
   int chosen_track;
   int segment_index;
   TString path[10];
   int len_path = 0;
   int proc = 11;
   std::string folderName;
   int numberOfFiles = 0;

   myClass(TTree *tree=0);
   virtual ~myClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    Cut_d0z0();
   virtual Int_t    Choose_track(double momentum0, double momentum1, double TCut_recHit_p, int i);
   virtual Int_t    Find_momentum_segment(int m, double segments[][2], double momentum);
   virtual Int_t    get_number_of_files_in_folder(int count, TString name);
   virtual TString* getNames(TString file_arr[], int number_of_files, TString name);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef myClass_cxx
myClass::myClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
      if (!f || !f->IsOpen()) {
         f = new TFile("Memory Directory");
      }
      f->GetObject("phi",tree);

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("phi","");
      /*chain->Add("dataProc11/27.04.2021/arich_phi_reco_r00045.root/phi");
      chain->Add("dataProc11/27.04.2021/arich_phi_reco_r00043.root/phi");
      chain->Add("dataProc11/27.04.2021/arich_phi_reco_r00044.root/phi");
      */
      if(mc_data){
         len_path = 6;     
         
         path[0] = "./dataMC/7.04.2021/uubar_10_fb/";
         path[1] = "./dataMC/7.04.2021/ccbar_10_fb/";
         path[2] = "./dataMC/7.04.2021/ssbar_10_fb/";
         path[3] = "./dataMC/7.04.2021/ddbar_10_fb/";
         path[4] = "./dataMC/7.04.2021/charged_10_fb/";      
         path[5] = "./dataMC/7.04.2021/mixed_10_fb/";

      }else{
         len_path = 1;
         
         if(proc == 10){
            path[0] = "./dataProc10/6.04.2021/";
         }else if (proc == 11)
         {
            path[0] = "./dataProc11/27.04.2021/";   
            path[0] = "/home/andrej/Work/belle2/analysis/decay_phi-KK/dataProc11/27.04.2021/";
         }  
      }
      
      int N = get_number_of_files_in_folder(0, path[0]);
      cout << "Data folder: "<< path[0] << endl;
      if(quick==0){
         std::cout <<"Loading " << N << " files.\n";
      }else{
         std::cout <<"Loading " << (int)(N/10) << " files.\n";
      }
      

      TString temp[N];
      TString *output;

      output = getNames(temp, N, path[0]);
      for(int i = 0; i < N; i++){
         if(quick and i >= (int)(N/10)){
            break;
         }
         std::cout << output[i] << std::endl;
         chain->Add(output[i]);
      }
      
      tree = chain;

#endif // SINGLE_TREE

   }
   Init(tree);
}

myClass::~myClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t myClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}

Long64_t myClass::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void myClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("__experiment__", &__experiment__, &b___experiment__);
   fChain->SetBranchAddress("__run__", &__run__, &b___run__);
   fChain->SetBranchAddress("__event__", &__event__, &b___event__);
   fChain->SetBranchAddress("__candidate__", &__candidate__, &b___candidate__);
   fChain->SetBranchAddress("__ncandidates__", &__ncandidates__, &b___ncandidates__);
   fChain->SetBranchAddress("__weight__", &__weight__, &b___weight__);
   fChain->SetBranchAddress("isSignal", &isSignal, &b_isSignal);
   fChain->SetBranchAddress("mcErrors", &mcErrors, &b_mcErrors);
   fChain->SetBranchAddress("mcPDG", &mcPDG, &b_mcPDG);
   fChain->SetBranchAddress("px", &px, &b_px);
   fChain->SetBranchAddress("py", &py, &b_py);
   fChain->SetBranchAddress("pz", &pz, &b_pz);
   fChain->SetBranchAddress("pt", &pt, &b_pt);
   fChain->SetBranchAddress("p", &p, &b_p);
   fChain->SetBranchAddress("E", &E, &b_E);
   fChain->SetBranchAddress("distance", &distance, &b_distance);
   fChain->SetBranchAddress("significanceOfDistance", &significanceOfDistance, &b_significanceOfDistance);
   fChain->SetBranchAddress("dx", &dx, &b_dx);
   fChain->SetBranchAddress("dy", &dy, &b_dy);
   fChain->SetBranchAddress("dz", &dz, &b_dz);
   fChain->SetBranchAddress("x", &x, &b_x);
   fChain->SetBranchAddress("y", &y, &b_y);
   fChain->SetBranchAddress("z", &z, &b_z);
   fChain->SetBranchAddress("x_uncertainty", &x_uncertainty, &b_x_uncertainty);
   fChain->SetBranchAddress("y_uncertainty", &y_uncertainty, &b_y_uncertainty);
   fChain->SetBranchAddress("z_uncertainty", &z_uncertainty, &b_z_uncertainty);
   fChain->SetBranchAddress("dr", &dr, &b_dr);
   fChain->SetBranchAddress("dphi", &dphi, &b_dphi);
   fChain->SetBranchAddress("dcosTheta", &dcosTheta, &b_dcosTheta);
   fChain->SetBranchAddress("prodVertexX", &prodVertexX, &b_prodVertexX);
   fChain->SetBranchAddress("prodVertexY", &prodVertexY, &b_prodVertexY);
   fChain->SetBranchAddress("prodVertexZ", &prodVertexZ, &b_prodVertexZ);
   fChain->SetBranchAddress("prodVertexXErr", &prodVertexXErr, &b_prodVertexXErr);
   fChain->SetBranchAddress("prodVertexYErr", &prodVertexYErr, &b_prodVertexYErr);
   fChain->SetBranchAddress("prodVertexZErr", &prodVertexZErr, &b_prodVertexZErr);
   fChain->SetBranchAddress("chiProb", &chiProb, &b_chiProb);
   fChain->SetBranchAddress("M", &M, &b_M);
   fChain->SetBranchAddress("ErrM", &ErrM, &b_ErrM);
   fChain->SetBranchAddress("SigM", &SigM, &b_SigM);
   fChain->SetBranchAddress("InvM", &InvM, &b_InvM);
   fChain->SetBranchAddress("cosAngleBetweenMomentumAndVertexVector", &cosAngleBetweenMomentumAndVertexVector, &b_cosAngleBetweenMomentumAndVertexVector);
   fChain->SetBranchAddress("K_0_kaonID", &K_0_kaonID, &b_K_0_kaonID);
   fChain->SetBranchAddress("K_0_pionID", &K_0_pionID, &b_K_0_pionID);
   fChain->SetBranchAddress("K_0_protonID", &K_0_protonID, &b_K_0_protonID);
   fChain->SetBranchAddress("K_0_muonID", &K_0_muonID, &b_K_0_muonID);
   fChain->SetBranchAddress("K_0_electronID", &K_0_electronID, &b_K_0_electronID);
   fChain->SetBranchAddress("K_0_deuteronID", &K_0_deuteronID, &b_K_0_deuteronID);
   fChain->SetBranchAddress("K_0_px", &K_0_px, &b_K_0_px);
   fChain->SetBranchAddress("K_0_py", &K_0_py, &b_K_0_py);
   fChain->SetBranchAddress("K_0_pz", &K_0_pz, &b_K_0_pz);
   fChain->SetBranchAddress("K_0_pt", &K_0_pt, &b_K_0_pt);
   fChain->SetBranchAddress("K_0_p", &K_0_p, &b_K_0_p);
   fChain->SetBranchAddress("K_0_E", &K_0_E, &b_K_0_E);
   fChain->SetBranchAddress("K_0_dr", &K_0_dr, &b_K_0_dr);
   fChain->SetBranchAddress("K_0_dx", &K_0_dx, &b_K_0_dx);
   fChain->SetBranchAddress("K_0_dy", &K_0_dy, &b_K_0_dy);
   fChain->SetBranchAddress("K_0_dz", &K_0_dz, &b_K_0_dz);
   fChain->SetBranchAddress("K_0_d0", &K_0_d0, &b_K_0_d0);
   fChain->SetBranchAddress("K_0_z0", &K_0_z0, &b_K_0_z0);
   fChain->SetBranchAddress("K_0_pValue", &K_0_pValue, &b_K_0_pValue);
   fChain->SetBranchAddress("K_0_nCDCHits", &K_0_nCDCHits, &b_K_0_nCDCHits);
   fChain->SetBranchAddress("K_0_cosTheta", &K_0_cosTheta, &b_K_0_cosTheta);
   fChain->SetBranchAddress("K_0_clusterE", &K_0_clusterE, &b_K_0_clusterE);
   fChain->SetBranchAddress("K_0_nMatchedKLMClusters", &K_0_nMatchedKLMClusters, &b_K_0_nMatchedKLMClusters);
   //    fChain->SetBranchAddress("K_0_pt", &K_0_pt, &b_K_0_pt);
   fChain->SetBranchAddress("K_0_minC2TDist", &K_0_minC2TDist, &b_K_0_minC2TDist);
   fChain->SetBranchAddress("K_0_trackNECLClusters", &K_0_trackNECLClusters, &b_K_0_trackNECLClusters);
   fChain->SetBranchAddress("K_0_dll_arich", &K_0_dll_arich, &b_K_0_dll_arich);
   fChain->SetBranchAddress("K_0_R_Kpi_arich", &K_0_R_Kpi_arich, &b_K_0_R_Kpi_arich);
   fChain->SetBranchAddress("K_0_kaonID_arich", &K_0_kaonID_arich, &b_K_0_kaonID_arich);
   fChain->SetBranchAddress("K_0_pionID_arich", &K_0_pionID_arich, &b_K_0_pionID_arich);
   fChain->SetBranchAddress("K_0_R_Kpi_all", &K_0_R_Kpi_all, &b_K_0_R_Kpi_all);
   fChain->SetBranchAddress("K_0_R_ppi_woarich", &K_0_R_ppi_woarich, &b_K_0_R_ppi_woarich);
   fChain->SetBranchAddress("K_0_R_Ke_all", &K_0_R_Ke_all, &b_K_0_R_Ke_all);
   fChain->SetBranchAddress("K_0_R_Ke_arich", &K_0_R_Ke_arich, &b_K_0_R_Ke_arich);
   fChain->SetBranchAddress("K_1_kaonID", &K_1_kaonID, &b_K_1_kaonID);
   fChain->SetBranchAddress("K_1_pionID", &K_1_pionID, &b_K_1_pionID);
   fChain->SetBranchAddress("K_1_protonID", &K_1_protonID, &b_K_1_protonID);
   fChain->SetBranchAddress("K_1_muonID", &K_1_muonID, &b_K_1_muonID);
   fChain->SetBranchAddress("K_1_electronID", &K_1_electronID, &b_K_1_electronID);
   fChain->SetBranchAddress("K_1_deuteronID", &K_1_deuteronID, &b_K_1_deuteronID);
   fChain->SetBranchAddress("K_1_px", &K_1_px, &b_K_1_px);
   fChain->SetBranchAddress("K_1_py", &K_1_py, &b_K_1_py);
   fChain->SetBranchAddress("K_1_pz", &K_1_pz, &b_K_1_pz);
   fChain->SetBranchAddress("K_1_pt", &K_1_pt, &b_K_1_pt);
   fChain->SetBranchAddress("K_1_p", &K_1_p, &b_K_1_p);
   fChain->SetBranchAddress("K_1_E", &K_1_E, &b_K_1_E);
   fChain->SetBranchAddress("K_1_dr", &K_1_dr, &b_K_1_dr);
   fChain->SetBranchAddress("K_1_dx", &K_1_dx, &b_K_1_dx);
   fChain->SetBranchAddress("K_1_dy", &K_1_dy, &b_K_1_dy);
   fChain->SetBranchAddress("K_1_dz", &K_1_dz, &b_K_1_dz);
   fChain->SetBranchAddress("K_1_d0", &K_1_d0, &b_K_1_d0);
   fChain->SetBranchAddress("K_1_z0", &K_1_z0, &b_K_1_z0);
   fChain->SetBranchAddress("K_1_pValue", &K_1_pValue, &b_K_1_pValue);
   fChain->SetBranchAddress("K_1_nCDCHits", &K_1_nCDCHits, &b_K_1_nCDCHits);
   fChain->SetBranchAddress("K_1_cosTheta", &K_1_cosTheta, &b_K_1_cosTheta);
   fChain->SetBranchAddress("K_1_clusterE", &K_1_clusterE, &b_K_1_clusterE);
   fChain->SetBranchAddress("K_1_nMatchedKLMClusters", &K_1_nMatchedKLMClusters, &b_K_1_nMatchedKLMClusters);
//    fChain->SetBranchAddress("K_1_pt", &K_1_pt, &b_K_1_pt);
   fChain->SetBranchAddress("K_1_minC2TDist", &K_1_minC2TDist, &b_K_1_minC2TDist);
   fChain->SetBranchAddress("K_1_trackNECLClusters", &K_1_trackNECLClusters, &b_K_1_trackNECLClusters);
   fChain->SetBranchAddress("K_1_dll_arich", &K_1_dll_arich, &b_K_1_dll_arich);
   fChain->SetBranchAddress("K_1_R_Kpi_arich", &K_1_R_Kpi_arich, &b_K_1_R_Kpi_arich);
   fChain->SetBranchAddress("K_1_kaonID_arich", &K_1_kaonID_arich, &b_K_1_kaonID_arich);
   fChain->SetBranchAddress("K_1_pionID_arich", &K_1_pionID_arich, &b_K_1_pionID_arich);
   fChain->SetBranchAddress("K_1_R_Kpi_all", &K_1_R_Kpi_all, &b_K_1_R_Kpi_all);
   fChain->SetBranchAddress("K_1_R_ppi_woarich", &K_1_R_ppi_woarich, &b_K_1_R_ppi_woarich);
   fChain->SetBranchAddress("K_1_R_Ke_all", &K_1_R_Ke_all, &b_K_1_R_Ke_all);
   fChain->SetBranchAddress("K_1_R_Ke_arich", &K_1_R_Ke_arich, &b_K_1_R_Ke_arich);
   fChain->SetBranchAddress("K_0_arich_detPhot", &K_0_arich_detPhot, &b_detPhot);
   fChain->SetBranchAddress("K_0_arich_expPhot", &K_0_arich_expPhot_e, &b_K_0_arich_expPhot);
   fChain->SetBranchAddress("K_0_arich_logL", &K_0_arich_logL_e, &b_K_0_arich_logL);
   fChain->SetBranchAddress("K_0_arich_recHit", &K_0_arich_recHit_PDG, &b_K_0_arich_recHit);
   fChain->SetBranchAddress("K_0_arich_mcHit", &K_0_arich_mcHit_PDG, &b_K_0_arich_mcHit);
   fChain->SetBranchAddress("K_0_arich_winHit", &K_0_arich_winHit_x, &b_K_0_arich_winHit);
   fChain->SetBranchAddress("K_0_arich_photons", &K_0_arich_photons_, &b_K_0_arich_photons_);
   fChain->SetBranchAddress("K_0_arich_photons.fUniqueID", K_0_arich_photons_fUniqueID, &b_K_0_arich_photons_fUniqueID);
   fChain->SetBranchAddress("K_0_arich_photons.fBits", K_0_arich_photons_fBits, &b_K_0_arich_photons_fBits);
   fChain->SetBranchAddress("K_0_arich_photons.m_hitID", K_0_arich_photons_m_hitID, &b_K_0_arich_photons_m_hitID);
   fChain->SetBranchAddress("K_0_arich_photons.m_thetaCer", K_0_arich_photons_m_thetaCer, &b_K_0_arich_photons_m_thetaCer);
   fChain->SetBranchAddress("K_0_arich_photons.m_phiCer", K_0_arich_photons_m_phiCer, &b_K_0_arich_photons_m_phiCer);
   fChain->SetBranchAddress("K_0_arich_photons.m_mirror", K_0_arich_photons_m_mirror, &b_K_0_arich_photons_m_mirror);
   fChain->SetBranchAddress("K_0_arich_photons.m_sigExp_e", K_0_arich_photons_m_sigExp_e, &b_K_0_arich_photons_m_sigExp_e);
   fChain->SetBranchAddress("K_0_arich_photons.m_bkgExp_e", K_0_arich_photons_m_bkgExp_e, &b_K_0_arich_photons_m_bkgExp_e);
   fChain->SetBranchAddress("K_0_arich_photons.m_sigExp_mu", K_0_arich_photons_m_sigExp_mu, &b_K_0_arich_photons_m_sigExp_mu);
   fChain->SetBranchAddress("K_0_arich_photons.m_bkgExp_mu", K_0_arich_photons_m_bkgExp_mu, &b_K_0_arich_photons_m_bkgExp_mu);
   fChain->SetBranchAddress("K_0_arich_photons.m_sigExp_pi", K_0_arich_photons_m_sigExp_pi, &b_K_0_arich_photons_m_sigExp_pi);
   fChain->SetBranchAddress("K_0_arich_photons.m_bkgExp_pi", K_0_arich_photons_m_bkgExp_pi, &b_K_0_arich_photons_m_bkgExp_pi);
   fChain->SetBranchAddress("K_0_arich_photons.m_sigExp_K", K_0_arich_photons_m_sigExp_K, &b_K_0_arich_photons_m_sigExp_K);
   fChain->SetBranchAddress("K_0_arich_photons.m_bkgExp_K", K_0_arich_photons_m_bkgExp_K, &b_K_0_arich_photons_m_bkgExp_K);
   fChain->SetBranchAddress("K_0_arich_photons.m_sigExp_p", K_0_arich_photons_m_sigExp_p, &b_K_0_arich_photons_m_sigExp_p);
   fChain->SetBranchAddress("K_0_arich_photons.m_bkgExp_p", K_0_arich_photons_m_bkgExp_p, &b_K_0_arich_photons_m_bkgExp_p);
   fChain->SetBranchAddress("K_0_arich_photons.m_nCosThetaCh_e", K_0_arich_photons_m_nCosThetaCh_e, &b_K_0_arich_photons_m_nCosThetaCh_e);
   fChain->SetBranchAddress("K_0_arich_photons.m_nCosThetaCh_mu", K_0_arich_photons_m_nCosThetaCh_mu, &b_K_0_arich_photons_m_nCosThetaCh_mu);
   fChain->SetBranchAddress("K_0_arich_photons.m_nCosThetaCh_pi", K_0_arich_photons_m_nCosThetaCh_pi, &b_K_0_arich_photons_m_nCosThetaCh_pi);
   fChain->SetBranchAddress("K_0_arich_photons.m_nCosThetaCh_K", K_0_arich_photons_m_nCosThetaCh_K, &b_K_0_arich_photons_m_nCosThetaCh_K);
   fChain->SetBranchAddress("K_0_arich_photons.m_nCosThetaCh_p", K_0_arich_photons_m_nCosThetaCh_p, &b_K_0_arich_photons_m_nCosThetaCh_p);
   fChain->SetBranchAddress("K_0_arich_photons.m_phiCh_e", K_0_arich_photons_m_phiCh_e, &b_K_0_arich_photons_m_phiCh_e);
   fChain->SetBranchAddress("K_0_arich_photons.m_phiCh_mu", K_0_arich_photons_m_phiCh_mu, &b_K_0_arich_photons_m_phiCh_mu);
   fChain->SetBranchAddress("K_0_arich_photons.m_phiCh_pi", K_0_arich_photons_m_phiCh_pi, &b_K_0_arich_photons_m_phiCh_pi);
   fChain->SetBranchAddress("K_0_arich_photons.m_phiCh_K", K_0_arich_photons_m_phiCh_K, &b_K_0_arich_photons_m_phiCh_K);
   fChain->SetBranchAddress("K_0_arich_photons.m_phiCh_p", K_0_arich_photons_m_phiCh_p, &b_K_0_arich_photons_m_phiCh_p);
   fChain->SetBranchAddress("K_0_arich_photons.m_x", K_0_arich_photons_m_x, &b_K_0_arich_photons_m_x);
   fChain->SetBranchAddress("K_0_arich_photons.m_y", K_0_arich_photons_m_y, &b_K_0_arich_photons_m_y);
   fChain->SetBranchAddress("K_0_arich_photons.m_module", K_0_arich_photons_m_module, &b_K_0_arich_photons_m_module);
   fChain->SetBranchAddress("K_0_arich_photons.m_channel", K_0_arich_photons_m_channel, &b_K_0_arich_photons_m_channel);
   fChain->SetBranchAddress("K_0_arich_photons.m_phiCerTrk", K_0_arich_photons_m_phiCerTrk, &b_K_0_arich_photons_m_phiCerTrk);
   fChain->SetBranchAddress("K_1_arich_detPhot", &K_1_arich_detPhot, &b_detPhot);
   fChain->SetBranchAddress("K_1_arich_expPhot", &K_1_arich_expPhot_e, &b_K_1_arich_expPhot);
   fChain->SetBranchAddress("K_1_arich_logL", &K_1_arich_logL_e, &b_K_1_arich_logL);
   fChain->SetBranchAddress("K_1_arich_recHit", &K_1_arich_recHit_PDG, &b_K_1_arich_recHit);
   fChain->SetBranchAddress("K_1_arich_mcHit", &K_1_arich_mcHit_PDG, &b_K_1_arich_mcHit);
   fChain->SetBranchAddress("K_1_arich_winHit", &K_1_arich_winHit_x, &b_K_1_arich_winHit);
   fChain->SetBranchAddress("K_1_arich_photons", &K_1_arich_photons_, &b_K_1_arich_photons_);
   fChain->SetBranchAddress("K_1_arich_photons.fUniqueID", K_1_arich_photons_fUniqueID, &b_K_1_arich_photons_fUniqueID);
   fChain->SetBranchAddress("K_1_arich_photons.fBits", K_1_arich_photons_fBits, &b_K_1_arich_photons_fBits);
   fChain->SetBranchAddress("K_1_arich_photons.m_hitID", K_1_arich_photons_m_hitID, &b_K_1_arich_photons_m_hitID);
   fChain->SetBranchAddress("K_1_arich_photons.m_thetaCer", K_1_arich_photons_m_thetaCer, &b_K_1_arich_photons_m_thetaCer);
   fChain->SetBranchAddress("K_1_arich_photons.m_phiCer", K_1_arich_photons_m_phiCer, &b_K_1_arich_photons_m_phiCer);
   fChain->SetBranchAddress("K_1_arich_photons.m_mirror", K_1_arich_photons_m_mirror, &b_K_1_arich_photons_m_mirror);
   fChain->SetBranchAddress("K_1_arich_photons.m_sigExp_e", K_1_arich_photons_m_sigExp_e, &b_K_1_arich_photons_m_sigExp_e);
   fChain->SetBranchAddress("K_1_arich_photons.m_bkgExp_e", K_1_arich_photons_m_bkgExp_e, &b_K_1_arich_photons_m_bkgExp_e);
   fChain->SetBranchAddress("K_1_arich_photons.m_sigExp_mu", K_1_arich_photons_m_sigExp_mu, &b_K_1_arich_photons_m_sigExp_mu);
   fChain->SetBranchAddress("K_1_arich_photons.m_bkgExp_mu", K_1_arich_photons_m_bkgExp_mu, &b_K_1_arich_photons_m_bkgExp_mu);
   fChain->SetBranchAddress("K_1_arich_photons.m_sigExp_pi", K_1_arich_photons_m_sigExp_pi, &b_K_1_arich_photons_m_sigExp_pi);
   fChain->SetBranchAddress("K_1_arich_photons.m_bkgExp_pi", K_1_arich_photons_m_bkgExp_pi, &b_K_1_arich_photons_m_bkgExp_pi);
   fChain->SetBranchAddress("K_1_arich_photons.m_sigExp_K", K_1_arich_photons_m_sigExp_K, &b_K_1_arich_photons_m_sigExp_K);
   fChain->SetBranchAddress("K_1_arich_photons.m_bkgExp_K", K_1_arich_photons_m_bkgExp_K, &b_K_1_arich_photons_m_bkgExp_K);
   fChain->SetBranchAddress("K_1_arich_photons.m_sigExp_p", K_1_arich_photons_m_sigExp_p, &b_K_1_arich_photons_m_sigExp_p);
   fChain->SetBranchAddress("K_1_arich_photons.m_bkgExp_p", K_1_arich_photons_m_bkgExp_p, &b_K_1_arich_photons_m_bkgExp_p);
   fChain->SetBranchAddress("K_1_arich_photons.m_nCosThetaCh_e", K_1_arich_photons_m_nCosThetaCh_e, &b_K_1_arich_photons_m_nCosThetaCh_e);
   fChain->SetBranchAddress("K_1_arich_photons.m_nCosThetaCh_mu", K_1_arich_photons_m_nCosThetaCh_mu, &b_K_1_arich_photons_m_nCosThetaCh_mu);
   fChain->SetBranchAddress("K_1_arich_photons.m_nCosThetaCh_pi", K_1_arich_photons_m_nCosThetaCh_pi, &b_K_1_arich_photons_m_nCosThetaCh_pi);
   fChain->SetBranchAddress("K_1_arich_photons.m_nCosThetaCh_K", K_1_arich_photons_m_nCosThetaCh_K, &b_K_1_arich_photons_m_nCosThetaCh_K);
   fChain->SetBranchAddress("K_1_arich_photons.m_nCosThetaCh_p", K_1_arich_photons_m_nCosThetaCh_p, &b_K_1_arich_photons_m_nCosThetaCh_p);
   fChain->SetBranchAddress("K_1_arich_photons.m_phiCh_e", K_1_arich_photons_m_phiCh_e, &b_K_1_arich_photons_m_phiCh_e);
   fChain->SetBranchAddress("K_1_arich_photons.m_phiCh_mu", K_1_arich_photons_m_phiCh_mu, &b_K_1_arich_photons_m_phiCh_mu);
   fChain->SetBranchAddress("K_1_arich_photons.m_phiCh_pi", K_1_arich_photons_m_phiCh_pi, &b_K_1_arich_photons_m_phiCh_pi);
   fChain->SetBranchAddress("K_1_arich_photons.m_phiCh_K", K_1_arich_photons_m_phiCh_K, &b_K_1_arich_photons_m_phiCh_K);
   fChain->SetBranchAddress("K_1_arich_photons.m_phiCh_p", K_1_arich_photons_m_phiCh_p, &b_K_1_arich_photons_m_phiCh_p);
   fChain->SetBranchAddress("K_1_arich_photons.m_x", K_1_arich_photons_m_x, &b_K_1_arich_photons_m_x);
   fChain->SetBranchAddress("K_1_arich_photons.m_y", K_1_arich_photons_m_y, &b_K_1_arich_photons_m_y);
   fChain->SetBranchAddress("K_1_arich_photons.m_module", K_1_arich_photons_m_module, &b_K_1_arich_photons_m_module);
   fChain->SetBranchAddress("K_1_arich_photons.m_channel", K_1_arich_photons_m_channel, &b_K_1_arich_photons_m_channel);
   fChain->SetBranchAddress("K_1_arich_photons.m_phiCerTrk", K_1_arich_photons_m_phiCerTrk, &b_K_1_arich_photons_m_phiCerTrk);
   Notify();
}

Bool_t myClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void myClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}

Int_t myClass::Cut(Long64_t entry)
{
   // This function may be called from Loop.
   // returns number of choosen track for arich performance: 0 or 1 if entry is accepted.
   // returns -1 otherwise.
   // Use for applying global cuts
   // Sets chosen_track
   // Sets segment_index
   
   double TCut_R_Ke_all = 0.001;
   int use_d0z0_cut = 1;
   double TCut_recHit_p = 0.5;

   const int N_p_segments = 8;
   double TCut_recHit_p_segments[N_p_segments][2] = {
                                                      {0.0, 0.3},
                                                      {0.3, 0.5},
                                                      {0.5, 0.7},
                                                      {0.7, 0.9},
                                                      {0.9, 1.1},
                                                      {1.1, 1.4},
                                                      {1.4, 2.0},
                                                      {2.0, 10.0}};

   /* ---- General cuts: ----  */ 
   
   // 1: d0 and z0 cut
   if(Cut_d0z0() and (use_d0z0_cut==1)){
      return -1;
   }

   // 2: R_Ke_all
   // Remove events with cut on track (not for track in Arich) R_Ke_all < 0.##
   int track = Choose_track(K_0_arich_recHit_p, K_1_arich_recHit_p, TCut_recHit_p, entry);
   chosen_track = -1;
   switch (track)
   {
   case -1:
      /* not in arich */
      return -1;
   case 0:
   case 2:
      // Track 0 in arich
      chosen_track = 0;
      if(K_1_R_Ke_all < TCut_R_Ke_all){
         return -1;
      }
      break;

   case 1:
   case 3:
      chosen_track = 1;
      // Track 1 in arich
      if(K_0_R_Ke_all < TCut_R_Ke_all){
         return -1;
      }
      break;

   default:
      return -1;
   }

   // Calculate the momentum segment
   if(chosen_track == 0){
      // track 0
      segment_index = Find_momentum_segment(N_p_segments, TCut_recHit_p_segments, K_0_arich_recHit_p);
   }else if(chosen_track == 1){
      // track 1
      segment_index = Find_momentum_segment(N_p_segments, TCut_recHit_p_segments, K_1_arich_recHit_p);
   }else{
      // Error
      return -1;
   }
   
   if(segment_index == -1){
      std::cout << "out of momentum range" <<  std::endl;
   }
   return 1;
}

Int_t myClass::Cut_d0z0(){
   // used to add general cuts before analysis
   // return 0 if accept
   // return 1 if reject

   double d0_cut = 0.5;
   double z0_cut = 0.5;
   
   if(abs(K_0_d0) > d0_cut){
      return 1;
   }

   if(abs(K_0_z0) > z0_cut){
      return 1;
   }

   if(abs(K_1_d0) > d0_cut){
      return 1;
   }

   if(abs(K_1_z0) > z0_cut){
      return 1;
   }

   return 0;
}

Int_t myClass::Choose_track(double momentum0, double momentum1, double TCut_recHit_p, int i){
   // find out which track is detected in ARICH, if both than 50% chose one
   //m = number of segments
   //TCut_recHit_p = basic momentum cut
   //return -1 if no track in ARICH
   //return :
   //0 if track 0 in arihc
   //1 if track 1 in arich
   //2 if both tracks in arich, but take track 0
   //3 if both tracks in arich, but take track 1
   
   int track = -1;
   if((momentum0 > TCut_recHit_p) && (momentum1 == 0)){
      //daughter_0 is in ARICH, daughter_1 is not in ARICH
      track = 0;
   }

   if((momentum1 > TCut_recHit_p) && (momentum0 == 0)){
      //daughter_1 is in ARICH, daughter_0 is not in ARICH
      track = 1;
   }

   if((momentum0 > TCut_recHit_p) && (momentum1 > TCut_recHit_p)){
      double rand = randGen0.Rndm();
      if(rand < 0.5){
         track = 2;
      }else{
         track = 3;
      }
   }

   return track;
}

Int_t myClass::Find_momentum_segment(int m, double segments[][2], double momentum){
   //m - number of segments
   int index = -1;
   for(int i = 0; i < m; i++){
      //Preveri v kateri segment pade gibalna kolicina
      if( (segments[i][0] < momentum) && (momentum <= segments[i][1]) ){
         // nasel segment
         index = i;
         //cout << "p = " << momentum << ", " << segments[i][0] << ", " << segments[i][1] << endl;
         break;
      }
   }
   return index;
}

Int_t myClass::get_number_of_files_in_folder(int count, TString name){
   std::string filename;// = path + "arich_phi_reco_r" + run[0] + ".root";;
   std::string folderName;
   
   folderName = name; // Must convert TString to std::string in two steps, if directly it does not work

   DIR *dir;
   struct dirent *ent;
   int number_of_files = 0;
   int size = folderName.length();
   char folder[size+1];
   strcpy(folder, folderName.c_str()); //use std::string, TString does not work
   
   if ((dir = opendir (folder)) != NULL) {
      /* print all the files and directories within directory */
      while ((ent = readdir (dir)) != NULL) {
         filename = ent->d_name;
         
         if(not ((filename == ".") or (filename == "..") or (filename == "log")) ){
            //std::cout << filename << std::endl;
            number_of_files++;
         }
      }
      closedir (dir);
   } else {
      /* could not open directory */
      perror ("");
      return EXIT_FAILURE;
   }

   if(count == 0){
      return number_of_files;
   }

   return 0;
}

TString* myClass::getNames(TString file_arr[], int number_of_files, TString name){

   std::string filename;// = path + "arich_phi_reco_r" + run[0] + ".root";;
   std::string folderName;
   
   folderName = name; // Must convert TString to std::string in two steps, if directly it does not work

   DIR *dir;
   struct dirent *ent;
   int size = folderName.length();
   char folder[size+1];
   strcpy(folder, folderName.c_str()); //use std::string, TString does not work
   
   int i = 0;

   if ((dir = opendir (folder)) != NULL) {
      /* print all the files and directories within directory */
      while ((ent = readdir (dir)) != NULL) {
         filename = ent->d_name;
         
         if(not ((filename == ".") or (filename == "..") or (filename == "log")) ){
            
            file_arr[i] = name + TString(filename);
            //std::cout << filename << std::endl;
            i++;
            if(i >= number_of_files){
               break;
            }
         }
      }
      closedir (dir);
   } else {
      /* could not open directory */
      perror ("");
   }

   return file_arr;
}

#endif // #ifdef myClass_cxx
