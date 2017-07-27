#ifndef READER_H
#define READER_H

#include <TChain.h>
#include <TFile.h>

#include "Event.h"

class Reader {
public :
   TChain         *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain
   Event           event; 

   // List of branches
   TBranch        *b_qq;   //!
   TBranch        *b_x;   //!
   TBranch        *b_mes_b;   //!
   TBranch        *b_w;   //!
   TBranch        *b_y;   //!
   TBranch        *b_z;   //!
   TBranch        *b_mm2;   //!
   TBranch        *b_hel;   //!
   TBranch        *b_pt;   //!
   TBranch        *b_ele_vz;   //!
   TBranch        *b_mes_vz;   //!
   TBranch        *b_ele_p;   //!
   TBranch        *b_mes_p;   //!
   TBranch        *b_ele_phi;   //!
   TBranch        *b_mes_phi;   //!
   TBranch        *b_ele_theta;   //!
   TBranch        *b_mes_theta;   //!
   TBranch        *b_pass_sf;   //!
   TBranch        *b_pass_dc1;   //!
   TBranch        *b_pass_dc3;   //!
   TBranch        *b_pass_vz;   //!
   TBranch        *b_pass_ec;   //!
   TBranch        *b_meson_id;   //!
   TBranch        *b_tof_mass;   //!
   TBranch        *b_phi_h;   //!

   Reader();
   virtual ~Reader();
   virtual Int_t GetEntry(Long64_t entry); 
   virtual void  Init();

   Long64_t      GetEntries() ; 
   void AddFile(std::string &filename); 
   Event &GetEvent();
};

#endif
