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
  TLorentzVector p4_B;
  double p_pix,p_piy,p_piz,p_Kx,p_Ky,p_Kz;
  double m_B=5.279; //GeV
  double m_pi=0.14;
  double m_K=0.5;
  double p_B=0.3;
  double E_B=sqrt(pow(m_B,2)+pow(p_B,2));
  p4_B.SetPxPyPzE(p_B,0,0,E_B);
  p4_B.Print();
  double p_cdm=sqrt(pow(m_B,4)+pow(m_pi,4)+pow(m_K,4)-2*pow(m_B,2)*pow(m_pi,2)-2*pow(m_B,2)*pow(m_pi,2)-2*pow(m_pi,2)*pow(m_k,2))/(2*m_B);
  for(i=0,i<=10000,i++){
    sphere(p_Kx,p_Ky,p_Kz,p_cdm);
    sphere(p_pix,p_piy,pi_piz,p_cdm);
  }
  
  return 0;
}
