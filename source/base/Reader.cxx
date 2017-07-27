#ifndef READER_CXX
#define READER_CXX

#include <iostream>

#include "Event.h"
#include "Reader.h"

#include "TChain.h"

Reader::Reader() {
  fChain = new TChain("miniTree"); 
  
  Init();
}

Reader::~Reader(){
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

Event & Reader::GetEvent(){
  return event; 
}

void Reader::AddFile(std::string &filename){
  fChain->AddFile(filename.c_str()); 
}

Int_t Reader::GetEntry(Long64_t entry) {
   return fChain->GetEntry(entry);
}


void Reader::Init() {
   fCurrent = -1;

   fChain->SetBranchAddress("qq",        &event.qq,        &b_qq);
   fChain->SetBranchAddress("x",         &event.x,         &b_x);
   fChain->SetBranchAddress("mes_b",     &event.mes_b,     &b_mes_b);
   fChain->SetBranchAddress("w",         &event.w,         &b_w);
   fChain->SetBranchAddress("y",         &event.y,         &b_y);
   fChain->SetBranchAddress("z",         &event.z,         &b_z);
   fChain->SetBranchAddress("mm2",       &event.mm2,       &b_mm2);
   fChain->SetBranchAddress("hel",       &event.hel,       &b_hel);
   fChain->SetBranchAddress("pt",        &event.pt,        &b_pt);
   fChain->SetBranchAddress("ele_vz",    &event.ele_vz,    &b_ele_vz);
   fChain->SetBranchAddress("mes_vz",    &event.mes_vz,    &b_mes_vz);
   fChain->SetBranchAddress("ele_p",     &event.ele_p,     &b_ele_p);
   fChain->SetBranchAddress("mes_p",     &event.mes_p,     &b_mes_p);
   fChain->SetBranchAddress("ele_phi",   &event.ele_phi,   &b_ele_phi);
   fChain->SetBranchAddress("mes_phi",   &event.mes_phi,   &b_mes_phi);
   fChain->SetBranchAddress("ele_theta", &event.ele_theta, &b_ele_theta);
   fChain->SetBranchAddress("mes_theta", &event.mes_theta, &b_mes_theta);
   fChain->SetBranchAddress("pass_sf",   &event.pass_sf,   &b_pass_sf);
   fChain->SetBranchAddress("pass_dc1",  &event.pass_dc1,  &b_pass_dc1);
   fChain->SetBranchAddress("pass_dc3",  &event.pass_dc3,  &b_pass_dc3);
   fChain->SetBranchAddress("pass_vz",   &event.pass_vz,   &b_pass_vz);
   fChain->SetBranchAddress("pass_ec",   &event.pass_ec,   &b_pass_ec);
   fChain->SetBranchAddress("meson_id",  &event.meson_id,  &b_meson_id);
   fChain->SetBranchAddress("tof_mass",  &event.tof_mass,  &b_tof_mass);
   fChain->SetBranchAddress("phi_h",     &event.phi_h,     &b_phi_h);
}

Long64_t Reader::GetEntries() {
  return fChain->GetEntries(); 
}

#endif // #ifdef Reader_cxx
