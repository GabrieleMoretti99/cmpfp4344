#include <iostream>
#include "TRandom3.h"
#include "TRandom.h"
#include "TH1F.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TLorentzVector.h"
#include "TFile.h"

using namespace std;

int main(){
  TLorentzVector p4_B;
  double m_B=5.279; //GeV
  double m_pi=0.14;
  double m_K=0.5;
  double p_B=0.3;
  double E_B=sqrt(pow(m_B,2)+pow(p_B,2));
  p4_B.SetPxPyPzE(p_B,0,0,E_B);
  p4_B.Print();
  return 0;
}
