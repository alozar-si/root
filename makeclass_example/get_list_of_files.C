#include <string>
#include <iostream>
#include <dirent.h>
#include <TString.h>

int get_list_of_files(int only_count){
    std::string filename;// = path + "arich_phi_reco_r" + run[0] + ".root";;
    std::string folderName;
    folderName = "./dataProc11/27.04.2021/";

    DIR *dir;
    struct dirent *ent;

    int size = folderName.length();
    char folder[size+1];
    strcpy(folder, folderName.c_str());
    int number_of_files = 0;

    if ((dir = opendir (folder)) != NULL) {
        /* print all the files and directories within directory */
        while ((ent = readdir (dir)) != NULL) {
            filename = ent->d_name;
            
            if(not ((filename == ".") or (filename == "..") or (filename == "log")) ){
                std::cout << filename << std::endl;
                number_of_files++;
            }
        }
        closedir (dir);
    } else {
        /* could not open directory */
        perror ("");
        return EXIT_FAILURE;
    }
    
    return number_of_files;
}