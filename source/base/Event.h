#ifndef EVENT_H
#define EVENT_H

#include <TROOT.h>

class Event {
 public :
  Event();
  ~Event();

  Float_t         qq;
  Float_t         x;
  Float_t         mes_b;
  Float_t         w;
  Float_t         y;
  Float_t         z;
  Float_t         mm2;
  Int_t           hel;
  Float_t         pt;
  Float_t         ele_vz;
  Float_t         mes_vz;
  Float_t         ele_p;
  Float_t         mes_p;
  Float_t         ele_phi;
  Float_t         mes_phi;
  Float_t         ele_theta;
  Float_t         mes_theta;
  Int_t           pass_sf;
  Int_t           pass_dc1;
  Int_t           pass_dc3;
  Int_t           pass_vz;
  Int_t           pass_ec;
  Int_t           meson_id;
  Float_t         tof_mass;
  Float_t         phi_h;
};

#endif
