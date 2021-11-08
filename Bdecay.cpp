#include <iostream>
#include "TRandom3.h"
#include "TRandom.h"
#include "TH1F.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TLorentzVector.h"
#include "TFile.h"
#include <cmath>

using namespace std;

int main(){
  TLorentzVector p4_B,p4_pi,p4_K;
  int i;
  double p_pix,p_piy,p_piz,p_Kx,p_Ky,p_Kz;
  double m_B=5.279; //GeV
  double m_pi=0.14;
  double m_K=0.5;
  double p_B=0.3;
  double E_B=sqrt(pow(m_B,2)+pow(p_B,2));
  p4_B.SetPxPyPzE(p_B,0,0,E_B);
  p4_B.Beta();
  p4_B.Gamma();
  p4_B.Print();
  p4_B.BoostVector().Print();
  double p_cdm=sqrt(pow(m_B,4)+pow(m_pi,4)+pow(m_K,4)-2*pow(m_B,2)*pow(m_pi,2)-2*pow(m_B,2)*pow(m_pi,2)-2*pow(m_pi,2)*pow(m_K,2))/(2*m_B);
  TRandom* gen = new TRandom();
  gen->SetSeed(0);
  for(i=0;i<10000;++i){
    gen->Sphere(p_Kx,p_Ky,p_Kz,p_cdm);
    gen->Sphere(p_pix,p_piy,p_piz,p_cdm);
    double p_pi=sqrt(pow(p_pix,2)+pow(p_piy,2)+pow(p_piz,2));
    double p_K=sqrt(pow(p_Kx,2)+pow(p_Ky,2)+pow(p_Kz,2));
    double E_pi=sqrt(pow(p_pi,2)+pow(m_pi,2));
    double E_K=sqrt(pow(p_K,2)+pow(m_K,2));
    p4_K.SetPxPyPzE(p_Kx,p_Ky,p_Kz,E_K);
    p4_pi.SetPxPyPzE(p_pix,p_piy,p_piz,E_pi);
    p4_K.Beta();
    p4_K.Gamma();
    p4_pi.Beta();
    p4_pi.Gamma(); 
  }
  return 0;
}

