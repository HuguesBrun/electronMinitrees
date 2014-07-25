//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jul  3 16:27:10 2014 by ROOT version 6.00/00
// from TTree eventsTree/
// found on file: ElecIDtree_1_1_p7j.root
//////////////////////////////////////////////////////////

#ifndef miniTreeBuilder_h
#define miniTreeBuilder_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include <iostream>

class miniTreeBuilder : public TSelector {
public :
    ////Out file
    TFile *myFile;
    TTree *myTree;
    
    int  myIterator;
    float pt;
    float eta;
    int isFromTau;
    float absEta;
    float phi;
    float energy;
    int nLost;
    int nHits;
    float kfchi2;
    int kfhits;
    int gsfhits;
    float gsfChi2;
    float fBrem;
    int missingHits;
    float Dist;
    float Dcot;
    float D0;
    float DZ;
    float ip3d;
    float ip3ds;
    float detacalo;
    float eledeta;
    float eledphi;
    float dphicalo;
    float deltaPhiIn;
    float deltaEtaIn;
    float EoP;
    float ESeedoP;
    float ESeedoPout;
    float EEleoPout;
    float IoEmIoP;
    float SC_Et;
    float SC_Eta;
    float SC_Phi;
    float SC_RawEnergy;
    float EcalEnergy;
    float EsEnergy;
    float PreShowerOverRaw;
    int NClusters;
    float EtaSeed;
    float PhiSeed;
    float ESeed;
    float HtoE;
    float EmaxSeed;
    float EtopSeed;
    float EbottomSeed;
    float EleftSeed;
    float ErightSeed;
    float E2ndSeed;
    float E2x5RightSeed;
    float E2x5LeftSeed;
    float E2x5TopSeed;
    float E2x5BottomSeed;
    float E2x5MaxSeed;
    float E1x5Seed;
    float E2x2Seed;
    float E3x3Seed;
    float E5x5Seed;
    float see;
    float spp;
    float sep;
    float etawidth;
    float phiwidth;
    float e1x5e5x5;
    float s9e25;
    float R9;
    int MatchConv;
    int EcalDriven;
    float noZSsee;
    float noZSspp;
    float noZSsep;
    float noZSr9;
    float noZSe1x5;
    float noZSe2x5MaxSeed;
    float noZSe5x5;
    float noZSe1x5e5x5;
    float ECALiso;
    float HCALiso;
    float TKiso;
    int nbBC;
    
    
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           T_Event_RunNumber;
   Int_t           T_Event_EventNumber;
   Int_t           T_Event_LuminosityBlock;
   Int_t           T_Event_nPU;
   Float_t         T_Event_nTruePU;
   Int_t           T_Event_nPUm;
   Int_t           T_Event_nPUp;
   Float_t         T_Event_AveNTruePU;
   vector<float>   *T_Event_Rho;
   vector<int>     *T_Event_pathsFired;
   vector<float>   *T_Gen_Elec_Px;
   vector<float>   *T_Gen_Elec_Py;
   vector<float>   *T_Gen_Elec_Pz;
   vector<float>   *T_Gen_Elec_Energy;
   vector<int>     *T_Gen_Elec_PDGid;
    vector<int>     *T_Gen_Elec_MotherID;
    vector<int>     *T_Gen_Elec_fromTAU;
   vector<int>     *T_Gen_Elec_GndMotherID;
   vector<int>     *T_Elec_TriggerLeg;
   vector<float>   *T_Elec_puChargedIso;
   vector<float>   *T_Elec_allChargedHadronIso;
   vector<float>   *T_Elec_chargedHadronIso;
   vector<float>   *T_Elec_neutralHadronIso;
   vector<float>   *T_Elec_photonIso;
   vector<float>   *T_Elec_puChargedIso04;
   vector<float>   *T_Elec_allChargedHadronIso04;
   vector<float>   *T_Elec_chargedHadronIso04;
   vector<float>   *T_Elec_neutralHadronIso04;
   vector<float>   *T_Elec_photonIso04;
   vector<float>   *T_Elec_Eta;
   vector<float>   *T_Elec_Phi;
   vector<float>   *T_Elec_Px;
   vector<float>   *T_Elec_Py;
   vector<float>   *T_Elec_Pz;
   vector<float>   *T_Elec_Pt;
   vector<float>   *T_Elec_Energy;
   vector<int>     *T_Elec_Charge;
   vector<int>     *T_Elec_isEB;
   vector<int>     *T_Elec_isEE;
   vector<float>   *T_Elec_vz;
   vector<float>   *T_Elec_vy;
   vector<float>   *T_Elec_vx;
   vector<int>     *T_Elec_nLost;
   vector<int>     *T_Elec_nHits;
   vector<float>   *T_Elec_kfchi2;
   vector<int>     *T_Elec_kfhits;
   vector<int>     *T_Elec_gsfhits;
   vector<float>   *T_Elec_gsfchi2;
   vector<float>   *T_Elec_fbrem;
   vector<int>     *T_Elec_nbrems;
   vector<int>     *T_Elec_missingHits;
   vector<float>   *T_Elec_Dist;
   vector<float>   *T_Elec_Dcot;
   vector<float>   *T_Elec_D0;
   vector<float>   *T_Elec_Dz;
   vector<float>   *T_Elec_ip3d;
   vector<float>   *T_Elec_ip3ds;
   vector<float>   *T_Elec_detacalo;
   vector<float>   *T_Elec_eledeta;
   vector<float>   *T_Elec_eledphi;
   vector<float>   *T_Elec_dphicalo;
   vector<float>   *T_Elec_deltaPhiIn;
   vector<float>   *T_Elec_deltaEtaIn;
   vector<float>   *T_Elec_EoP;
   vector<float>   *T_Elec_ESeedoP;
   vector<float>   *T_Elec_ESeedoPout;
   vector<float>   *T_Elec_EEleoPout;
   vector<float>   *T_Elec_IoEmIoP;
   vector<float>   *T_Elec_SC_Et;
   vector<float>   *T_Elec_SC_Eta;
   vector<float>   *T_Elec_SC_Phi;
   vector<float>   *T_Elec_SC_RawEnergy;
   vector<float>   *T_Elec_EcalEnergy;
   vector<float>   *T_Elec_EsEnergy;
   vector<float>   *T_Elec_PreShowerOverRaw;
   vector<int>     *T_Elec_NClusters;
   vector<float>   *T_Elec_EtaSeed;
   vector<float>   *T_Elec_PhiSeed;
   vector<float>   *T_Elec_ESeed;
   vector<float>   *T_Elec_HtoE;
   vector<float>   *T_Elec_EmaxSeed;
   vector<float>   *T_Elec_EtopSeed;
   vector<float>   *T_Elec_EbottomSeed;
   vector<float>   *T_Elec_EleftSeed;
   vector<float>   *T_Elec_ErightSeed;
   vector<float>   *T_Elec_E2ndSeed;
   vector<float>   *T_Elec_E2x5RightSeed;
   vector<float>   *T_Elec_E2x5LeftSeed;
   vector<float>   *T_Elec_E2x5TopSeed;
   vector<float>   *T_Elec_E2x5BottomSeed;
   vector<float>   *T_Elec_E2x5MaxSeed;
   vector<float>   *T_Elec_E1x5Seed;
   vector<float>   *T_Elec_E2x2Seed;
   vector<float>   *T_Elec_E3x3Seed;
   vector<float>   *T_Elec_E5x5Seed;
   vector<float>   *T_Elec_see;
   vector<float>   *T_Elec_spp;
   vector<float>   *T_Elec_sep;
   vector<float>   *T_Elec_etawidth;
   vector<float>   *T_Elec_phiwidth;
   vector<float>   *T_Elec_e1x5e5x5;
   vector<float>   *T_Elec_s9e25;
   vector<float>   *T_Elec_R9;
   vector<int>     *T_Elec_MatchConv;
   vector<int>     *T_Elec_EcalDriven;
   vector<float>   *T_Elec_noZSsee;
   vector<float>   *T_Elec_noZSspp;
   vector<float>   *T_Elec_noZSsep;
   vector<float>   *T_Elec_noZSr9;
   vector<float>   *T_Elec_noZSe1x5;
   vector<float>   *T_Elec_noZSe2x5MaxSeed;
   vector<float>   *T_Elec_noZSe5x5;
   vector<float>   *T_Elec_ECALiso;
   vector<float>   *T_Elec_HCALiso;
   vector<float>   *T_Elec_TKiso;
   vector<int>     *T_Elec_nbBC;
   vector<float>   *T_Elec_BC1_eta;
   vector<float>   *T_Elec_BC1_phi;
   vector<float>   *T_Elec_BC1_energy;
   vector<float>   *T_Elec_BC2_eta;
   vector<float>   *T_Elec_BC2_phi;
   vector<float>   *T_Elec_BC2_energy;
   vector<float>   *T_Elec_BC3_eta;
   vector<float>   *T_Elec_BC3_phi;
   vector<float>   *T_Elec_BC3_energy;
   vector<float>   *T_Jet_Px;
   vector<float>   *T_Jet_Py;
   vector<float>   *T_Jet_Pz;
   vector<float>   *T_Jet_Et;
   vector<float>   *T_Jet_Eta;
   vector<float>   *T_Jet_Energy;
   vector<float>   *T_Jet_Phi;
   Float_t         T_METPF_ET;
   Float_t         T_METPF_px;
   Float_t         T_METPF_py;
   Float_t         T_METPF_Phi;
   Float_t         T_METPF_Sig;
   Float_t         T_METPFTypeI_ET;
   Float_t         T_METPFTypeI_Phi;

   // List of branches
   TBranch        *b_T_Event_RunNumber;   //!
   TBranch        *b_T_Event_EventNumber;   //!
   TBranch        *b_T_Event_LuminosityBlock;   //!
   TBranch        *b_T_Event_nPU;   //!
   TBranch        *b_T_Event_nTruePU;   //!
   TBranch        *b_T_Event_nPUm;   //!
   TBranch        *b_T_Event_nPUp;   //!
   TBranch        *b_T_Event_AveNTruePU;   //!
   TBranch        *b_T_Event_Rho;   //!
   TBranch        *b_T_Event_pathsFired;   //!
   TBranch        *b_T_Gen_Elec_Px;   //!
   TBranch        *b_T_Gen_Elec_Py;   //!
   TBranch        *b_T_Gen_Elec_Pz;   //!
   TBranch        *b_T_Gen_Elec_Energy;   //!
   TBranch        *b_T_Gen_Elec_PDGid;   //!
    TBranch        *b_T_Gen_Elec_MotherID;   //!
    TBranch        *b_T_Gen_Elec_GndMotherID;   //!
   TBranch        *b_T_Gen_Elec_fromTAU;   //!
   TBranch        *b_T_Elec_TriggerLeg;   //!
   TBranch        *b_T_Elec_puChargedIso;   //!
   TBranch        *b_T_Elec_allChargedHadronIso;   //!
   TBranch        *b_T_Elec_chargedHadronIso;   //!
   TBranch        *b_T_Elec_neutralHadronIso;   //!
   TBranch        *b_T_Elec_photonIso;   //!
   TBranch        *b_T_Elec_puChargedIso04;   //!
   TBranch        *b_T_Elec_allChargedHadronIso04;   //!
   TBranch        *b_T_Elec_chargedHadronIso04;   //!
   TBranch        *b_T_Elec_neutralHadronIso04;   //!
   TBranch        *b_T_Elec_photonIso04;   //!
   TBranch        *b_T_Elec_Eta;   //!
   TBranch        *b_T_Elec_Phi;   //!
   TBranch        *b_T_Elec_Px;   //!
   TBranch        *b_T_Elec_Py;   //!
   TBranch        *b_T_Elec_Pz;   //!
   TBranch        *b_T_Elec_Pt;   //!
   TBranch        *b_T_Elec_Energy;   //!
   TBranch        *b_T_Elec_Charge;   //!
   TBranch        *b_T_Elec_isEB;   //!
   TBranch        *b_T_Elec_isEE;   //!
   TBranch        *b_T_Elec_vz;   //!
   TBranch        *b_T_Elec_vy;   //!
   TBranch        *b_T_Elec_vx;   //!
   TBranch        *b_T_Elec_nLost;   //!
   TBranch        *b_T_Elec_nHits;   //!
   TBranch        *b_T_Elec_kfchi2;   //!
   TBranch        *b_T_Elec_kfhits;   //!
   TBranch        *b_T_Elec_gsfhits;   //!
   TBranch        *b_T_Elec_gsfchi2;   //!
   TBranch        *b_T_Elec_fbrem;   //!
   TBranch        *b_T_Elec_nbrems;   //!
   TBranch        *b_T_Elec_missingHits;   //!
   TBranch        *b_T_Elec_Dist;   //!
   TBranch        *b_T_Elec_Dcot;   //!
   TBranch        *b_T_Elec_D0;   //!
   TBranch        *b_T_Elec_Dz;   //!
   TBranch        *b_T_Elec_ip3d;   //!
   TBranch        *b_T_Elec_ip3ds;   //!
   TBranch        *b_T_Elec_detacalo;   //!
   TBranch        *b_T_Elec_eledeta;   //!
   TBranch        *b_T_Elec_eledphi;   //!
   TBranch        *b_T_Elec_dphicalo;   //!
   TBranch        *b_T_Elec_deltaPhiIn;   //!
   TBranch        *b_T_Elec_deltaEtaIn;   //!
   TBranch        *b_T_Elec_EoP;   //!
   TBranch        *b_T_Elec_ESeedoP;   //!
   TBranch        *b_T_Elec_ESeedoPout;   //!
   TBranch        *b_T_Elec_EEleoPout;   //!
   TBranch        *b_T_Elec_IoEmIoP;   //!
   TBranch        *b_T_Elec_SC_Et;   //!
   TBranch        *b_T_Elec_SC_Eta;   //!
   TBranch        *b_T_Elec_SC_Phi;   //!
   TBranch        *b_T_Elec_SC_RawEnergy;   //!
   TBranch        *b_T_Elec_EcalEnergy;   //!
   TBranch        *b_T_Elec_EsEnergy;   //!
   TBranch        *b_T_Elec_PreShowerOverRaw;   //!
   TBranch        *b_T_Elec_NClusters;   //!
   TBranch        *b_T_Elec_EtaSeed;   //!
   TBranch        *b_T_Elec_PhiSeed;   //!
   TBranch        *b_T_Elec_ESeed;   //!
   TBranch        *b_T_Elec_HtoE;   //!
   TBranch        *b_T_Elec_EmaxSeed;   //!
   TBranch        *b_T_Elec_EtopSeed;   //!
   TBranch        *b_T_Elec_EbottomSeed;   //!
   TBranch        *b_T_Elec_EleftSeed;   //!
   TBranch        *b_T_Elec_ErightSeed;   //!
   TBranch        *b_T_Elec_E2ndSeed;   //!
   TBranch        *b_T_Elec_E2x5RightSeed;   //!
   TBranch        *b_T_Elec_E2x5LeftSeed;   //!
   TBranch        *b_T_Elec_E2x5TopSeed;   //!
   TBranch        *b_T_Elec_E2x5BottomSeed;   //!
   TBranch        *b_T_Elec_E2x5MaxSeed;   //!
   TBranch        *b_T_Elec_E1x5Seed;   //!
   TBranch        *b_T_Elec_E2x2Seed;   //!
   TBranch        *b_T_Elec_E3x3Seed;   //!
   TBranch        *b_T_Elec_E5x5Seed;   //!
   TBranch        *b_T_Elec_see;   //!
   TBranch        *b_T_Elec_spp;   //!
   TBranch        *b_T_Elec_sep;   //!
   TBranch        *b_T_Elec_etawidth;   //!
   TBranch        *b_T_Elec_phiwidth;   //!
   TBranch        *b_T_Elec_e1x5e5x5;   //!
   TBranch        *b_T_Elec_s9e25;   //!
   TBranch        *b_T_Elec_R9;   //!
   TBranch        *b_T_Elec_MatchConv;   //!
   TBranch        *b_T_Elec_EcalDriven;   //!
   TBranch        *b_T_Elec_noZSsee;   //!
   TBranch        *b_T_Elec_noZSspp;   //!
   TBranch        *b_T_Elec_noZSsep;   //!
   TBranch        *b_T_Elec_noZSr9;   //!
   TBranch        *b_T_Elec_noZSe1x5;   //!
   TBranch        *b_T_Elec_noZSe2x5MaxSeed;   //!
   TBranch        *b_T_Elec_noZSe5x5;   //!
   TBranch        *b_T_Elec_ECALiso;   //!
   TBranch        *b_T_Elec_HCALiso;   //!
   TBranch        *b_T_Elec_TKiso;   //!
   TBranch        *b_T_Elec_nbBC;   //!
   TBranch        *b_T_Elec_BC1_eta;   //!
   TBranch        *b_T_Elec_BC1_phi;   //!
   TBranch        *b_T_Elec_BC1_energy;   //!
   TBranch        *b_T_Elec_BC2_eta;   //!
   TBranch        *b_T_Elec_BC2_phi;   //!
   TBranch        *b_T_Elec_BC2_energy;   //!
   TBranch        *b_T_Elec_BC3_eta;   //!
   TBranch        *b_T_Elec_BC3_phi;   //!
   TBranch        *b_T_Elec_BC3_energy;   //!
   TBranch        *b_T_Jet_Px;   //!
   TBranch        *b_T_Jet_Py;   //!
   TBranch        *b_T_Jet_Pz;   //!
   TBranch        *b_T_Jet_Et;   //!
   TBranch        *b_T_Jet_Eta;   //!
   TBranch        *b_T_Jet_Energy;   //!
   TBranch        *b_T_Jet_Phi;   //!
   TBranch        *b_T_METPF_ET;   //!
   TBranch        *b_T_METPF_px;   //!
   TBranch        *b_T_METPF_py;   //!
   TBranch        *b_T_METPF_Phi;   //!
   TBranch        *b_T_METPF_Sig;   //!
   TBranch        *b_T_METPFTypeI_ET;   //!
   TBranch        *b_T_METPFTypeI_Phi;   //!

   miniTreeBuilder(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~miniTreeBuilder() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
    virtual void    SlaveTerminate();
    virtual void    saveInTheTree(int);
    virtual bool passTrigSelection(int);

   virtual void    Terminate();

   ClassDef(miniTreeBuilder,0);
};

#endif

#ifdef miniTreeBuilder_cxx
void miniTreeBuilder::Init(TTree *tree)
{
    
    
    myFile = new TFile("/tmp/hbrun/theOutFile.root","RECREATE");
    myTree = new TTree("myTree","");
    myTree->Branch("pt",&pt,"pt/F");
    myTree->Branch("eta",&eta,"eta/F");
    myTree->Branch("absEta",&absEta,"absEta/F");
    myTree->Branch("phi",&phi,"phi/F");
    myTree->Branch("isFromTau",&isFromTau,"isFromTau/I");
    myTree->Branch("nLost",&nLost,"nLost/I");
    myTree->Branch("nHits",&nHits,"nHits/I");
    myTree->Branch("kfchi2",&kfchi2,"kfchi2/F");
    myTree->Branch("kfhits",&kfhits,"kfhits/I");
    myTree->Branch("gsfhits",&gsfhits,"gsfhits/I");
    myTree->Branch("gsfChi2",&gsfChi2,"gsfChi2/F");
    myTree->Branch("fBrem",&fBrem,"fBrem/F");
    myTree->Branch("missingHits",&missingHits,"missingHits/I");
    myTree->Branch("Dist",&Dist,"Dist/F");
    myTree->Branch("Dcot",&Dcot,"Dcot/F");
    myTree->Branch("D0",&D0,"D0/F");
    myTree->Branch("ip3d",&ip3d,"ip3d/F");
    myTree->Branch("ip3ds",&ip3ds,"ip3ds/F");
    myTree->Branch("detacalo",&detacalo,"detacalo/F");
    myTree->Branch("eledeta",&eledeta,"eledeta/F");
    myTree->Branch("eledphi",&eledphi,"eledphi/F");
    myTree->Branch("dphicalo",&dphicalo,"dphicalo/F");
    myTree->Branch("deltaPhiIn",&deltaPhiIn,"deltaPhiIn/F");
    myTree->Branch("deltaEtaIn",&deltaEtaIn,"deltaEtaIn/F");
    myTree->Branch("EoP",&EoP,"EoP/F");
    myTree->Branch("ESeedoP",&ESeedoP,"ESeedoP/F");
    myTree->Branch("ESeedoPout",&ESeedoPout,"ESeedoPout/F");
    myTree->Branch("EEleoPout",&EEleoPout,"EEleoPout/F");
    myTree->Branch("IoEmIoP",&IoEmIoP,"IoEmIoP/F");
    myTree->Branch("SC_Et",&SC_Et,"SC_Et/F");
    myTree->Branch("SC_Eta",&SC_Eta,"SC_Eta/F");
    myTree->Branch("SC_Phi",&SC_Phi,"SC_Phi/F");
    myTree->Branch("SC_RawEnergy",&SC_RawEnergy,"SC_RawEnergy/F");
    myTree->Branch("EcalEnergy",&EcalEnergy,"EcalEnergy/F");
    myTree->Branch("EsEnergy",&EsEnergy,"EsEnergy/F");
    myTree->Branch("PreShowerOverRaw",&PreShowerOverRaw,"PreShowerOverRaw/F");
    myTree->Branch("NClusters",&NClusters,"NClusters/I");
    myTree->Branch("EtaSeed",&EtaSeed,"EtaSeed/F");
    myTree->Branch("PhiSeed",&PhiSeed,"PhiSeed/F");
    myTree->Branch("ESeed",&ESeed,"ESeed/F");
    myTree->Branch("HtoE",&HtoE,"HtoE/F");
    myTree->Branch("EmaxSeed",&EmaxSeed,"EmaxSeed/F");
    myTree->Branch("EtopSeed",&EtopSeed,"EtopSeed/F");
    myTree->Branch("EbottomSeed",&EbottomSeed,"EbottomSeed/F");
    myTree->Branch("EleftSeed",&EleftSeed,"EleftSeed/F");
    myTree->Branch("ErightSeed",&ErightSeed,"ErightSeed/F");
    myTree->Branch("E2ndSeed",&E2ndSeed,"E2ndSeed/F");
    myTree->Branch("E2x5RightSeed",&E2x5RightSeed,"E2x5RightSeed/F");
    myTree->Branch("E2x5LeftSeed",&E2x5LeftSeed,"E2x5LeftSeed/F");
    myTree->Branch("E2x5TopSeed",&E2x5TopSeed,"E2x5TopSeed/F");
    myTree->Branch("E2x5BottomSeed",&E2x5BottomSeed,"E2x5BottomSeed/F");
    myTree->Branch("E2x5MaxSeed",&E2x5MaxSeed,"E2x5MaxSeed/F");
    myTree->Branch("E1x5Seed",&E1x5Seed,"E1x5Seed/F");
    myTree->Branch("E2x2Seed",&E2x2Seed,"E2x2Seed/F");
    myTree->Branch("E3x3Seed",&E3x3Seed,"E3x3Seed/F");
    myTree->Branch("see",&see,"see/F");
    myTree->Branch("spp",&spp,"spp/F");
    myTree->Branch("sep",&sep,"sep/F");
    myTree->Branch("etawidth",&etawidth,"etawidth/F");
    myTree->Branch("phiwidth",&phiwidth,"phiwidth/F");
    myTree->Branch("e1x5e5x5",&e1x5e5x5,"e1x5e5x5/F");
    myTree->Branch("s9e25",&s9e25,"s9e25/F");
    myTree->Branch("R9",&R9,"R9/F");
    myTree->Branch("MatchConv",&MatchConv,"MatchConv/I");
    myTree->Branch("EcalDriven",&EcalDriven,"EcalDriven/I");
    myTree->Branch("noZSsee",&noZSsee,"noZSsee/F");
    myTree->Branch("noZSspp",&noZSspp,"noZSspp/F");
    myTree->Branch("noZSsep",&noZSsep,"noZSsep/F");
    myTree->Branch("noZSr9",&noZSr9,"noZSr9/F");
    myTree->Branch("noZSe1x5",&noZSe1x5,"noZSe1x5/F");
    myTree->Branch("noZSe2x5MaxSeed",&noZSe2x5MaxSeed,"noZSe2x5MaxSeed/F");
    myTree->Branch("noZSe5x5",&noZSe5x5,"noZSe5x5/F");
    myTree->Branch("noZSe1x5e5x5",&noZSe1x5e5x5,"noZSe1x5e5x5/F");
    myTree->Branch("ECALiso",&ECALiso,"ECALiso/F");
    myTree->Branch("HCALiso",&HCALiso,"HCALiso/F");
    myTree->Branch("TKiso",&TKiso,"TKiso/F");
    myTree->Branch("nbBC",&nbBC,"nbBC/I");

    
    
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   T_Event_Rho = 0;
   T_Event_pathsFired = 0;
   T_Gen_Elec_Px = 0;
   T_Gen_Elec_Py = 0;
   T_Gen_Elec_Pz = 0;
   T_Gen_Elec_Energy = 0;
   T_Gen_Elec_PDGid = 0;
   T_Gen_Elec_MotherID = 0;
    T_Gen_Elec_GndMotherID = 0;
    T_Gen_Elec_fromTAU = 0;
   T_Elec_TriggerLeg = 0;
   T_Elec_puChargedIso = 0;
   T_Elec_allChargedHadronIso = 0;
   T_Elec_chargedHadronIso = 0;
   T_Elec_neutralHadronIso = 0;
   T_Elec_photonIso = 0;
   T_Elec_puChargedIso04 = 0;
   T_Elec_allChargedHadronIso04 = 0;
   T_Elec_chargedHadronIso04 = 0;
   T_Elec_neutralHadronIso04 = 0;
   T_Elec_photonIso04 = 0;
   T_Elec_Eta = 0;
   T_Elec_Phi = 0;
   T_Elec_Px = 0;
   T_Elec_Py = 0;
   T_Elec_Pz = 0;
   T_Elec_Pt = 0;
   T_Elec_Energy = 0;
   T_Elec_Charge = 0;
   T_Elec_isEB = 0;
   T_Elec_isEE = 0;
   T_Elec_vz = 0;
   T_Elec_vy = 0;
   T_Elec_vx = 0;
   T_Elec_nLost = 0;
   T_Elec_nHits = 0;
   T_Elec_kfchi2 = 0;
   T_Elec_kfhits = 0;
   T_Elec_gsfhits = 0;
   T_Elec_gsfchi2 = 0;
   T_Elec_fbrem = 0;
   T_Elec_nbrems = 0;
   T_Elec_missingHits = 0;
   T_Elec_Dist = 0;
   T_Elec_Dcot = 0;
   T_Elec_D0 = 0;
   T_Elec_Dz = 0;
   T_Elec_ip3d = 0;
   T_Elec_ip3ds = 0;
   T_Elec_detacalo = 0;
   T_Elec_eledeta = 0;
   T_Elec_eledphi = 0;
   T_Elec_dphicalo = 0;
   T_Elec_deltaPhiIn = 0;
   T_Elec_deltaEtaIn = 0;
   T_Elec_EoP = 0;
   T_Elec_ESeedoP = 0;
   T_Elec_ESeedoPout = 0;
   T_Elec_EEleoPout = 0;
   T_Elec_IoEmIoP = 0;
   T_Elec_SC_Et = 0;
   T_Elec_SC_Eta = 0;
   T_Elec_SC_Phi = 0;
   T_Elec_SC_RawEnergy = 0;
   T_Elec_EcalEnergy = 0;
   T_Elec_EsEnergy = 0;
   T_Elec_PreShowerOverRaw = 0;
   T_Elec_NClusters = 0;
   T_Elec_EtaSeed = 0;
   T_Elec_PhiSeed = 0;
   T_Elec_ESeed = 0;
   T_Elec_HtoE = 0;
   T_Elec_EmaxSeed = 0;
   T_Elec_EtopSeed = 0;
   T_Elec_EbottomSeed = 0;
   T_Elec_EleftSeed = 0;
   T_Elec_ErightSeed = 0;
   T_Elec_E2ndSeed = 0;
   T_Elec_E2x5RightSeed = 0;
   T_Elec_E2x5LeftSeed = 0;
   T_Elec_E2x5TopSeed = 0;
   T_Elec_E2x5BottomSeed = 0;
   T_Elec_E2x5MaxSeed = 0;
   T_Elec_E1x5Seed = 0;
   T_Elec_E2x2Seed = 0;
   T_Elec_E3x3Seed = 0;
   T_Elec_E5x5Seed = 0;
   T_Elec_see = 0;
   T_Elec_spp = 0;
   T_Elec_sep = 0;
   T_Elec_etawidth = 0;
   T_Elec_phiwidth = 0;
   T_Elec_e1x5e5x5 = 0;
   T_Elec_s9e25 = 0;
   T_Elec_R9 = 0;
   T_Elec_MatchConv = 0;
   T_Elec_EcalDriven = 0;
   T_Elec_noZSsee = 0;
   T_Elec_noZSspp = 0;
   T_Elec_noZSsep = 0;
   T_Elec_noZSr9 = 0;
   T_Elec_noZSe1x5 = 0;
   T_Elec_noZSe2x5MaxSeed = 0;
   T_Elec_noZSe5x5 = 0;
   T_Elec_ECALiso = 0;
   T_Elec_HCALiso = 0;
   T_Elec_TKiso = 0;
   T_Elec_nbBC = 0;
   T_Elec_BC1_eta = 0;
   T_Elec_BC1_phi = 0;
   T_Elec_BC1_energy = 0;
   T_Elec_BC2_eta = 0;
   T_Elec_BC2_phi = 0;
   T_Elec_BC2_energy = 0;
   T_Elec_BC3_eta = 0;
   T_Elec_BC3_phi = 0;
   T_Elec_BC3_energy = 0;
   T_Jet_Px = 0;
   T_Jet_Py = 0;
   T_Jet_Pz = 0;
   T_Jet_Et = 0;
   T_Jet_Eta = 0;
   T_Jet_Energy = 0;
   T_Jet_Phi = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("T_Event_RunNumber", &T_Event_RunNumber, &b_T_Event_RunNumber);
   fChain->SetBranchAddress("T_Event_EventNumber", &T_Event_EventNumber, &b_T_Event_EventNumber);
   fChain->SetBranchAddress("T_Event_LuminosityBlock", &T_Event_LuminosityBlock, &b_T_Event_LuminosityBlock);
   fChain->SetBranchAddress("T_Event_nPU", &T_Event_nPU, &b_T_Event_nPU);
   fChain->SetBranchAddress("T_Event_nTruePU", &T_Event_nTruePU, &b_T_Event_nTruePU);
   fChain->SetBranchAddress("T_Event_nPUm", &T_Event_nPUm, &b_T_Event_nPUm);
   fChain->SetBranchAddress("T_Event_nPUp", &T_Event_nPUp, &b_T_Event_nPUp);
   fChain->SetBranchAddress("T_Event_AveNTruePU", &T_Event_AveNTruePU, &b_T_Event_AveNTruePU);
   fChain->SetBranchAddress("T_Event_Rho", &T_Event_Rho, &b_T_Event_Rho);
   fChain->SetBranchAddress("T_Event_pathsFired", &T_Event_pathsFired, &b_T_Event_pathsFired);
   fChain->SetBranchAddress("T_Gen_Elec_Px", &T_Gen_Elec_Px, &b_T_Gen_Elec_Px);
   fChain->SetBranchAddress("T_Gen_Elec_Py", &T_Gen_Elec_Py, &b_T_Gen_Elec_Py);
   fChain->SetBranchAddress("T_Gen_Elec_Pz", &T_Gen_Elec_Pz, &b_T_Gen_Elec_Pz);
   fChain->SetBranchAddress("T_Gen_Elec_Energy", &T_Gen_Elec_Energy, &b_T_Gen_Elec_Energy);
   fChain->SetBranchAddress("T_Gen_Elec_PDGid", &T_Gen_Elec_PDGid, &b_T_Gen_Elec_PDGid);
   fChain->SetBranchAddress("T_Gen_Elec_MotherID", &T_Gen_Elec_MotherID, &b_T_Gen_Elec_MotherID);
    fChain->SetBranchAddress("T_Gen_Elec_GndMotherID", &T_Gen_Elec_GndMotherID, &b_T_Gen_Elec_GndMotherID);
    fChain->SetBranchAddress("T_Gen_Elec_fromTAU", &T_Gen_Elec_fromTAU, &b_T_Gen_Elec_fromTAU);
   fChain->SetBranchAddress("T_Elec_TriggerLeg", &T_Elec_TriggerLeg, &b_T_Elec_TriggerLeg);
   fChain->SetBranchAddress("T_Elec_puChargedIso", &T_Elec_puChargedIso, &b_T_Elec_puChargedIso);
   fChain->SetBranchAddress("T_Elec_allChargedHadronIso", &T_Elec_allChargedHadronIso, &b_T_Elec_allChargedHadronIso);
   fChain->SetBranchAddress("T_Elec_chargedHadronIso", &T_Elec_chargedHadronIso, &b_T_Elec_chargedHadronIso);
   fChain->SetBranchAddress("T_Elec_neutralHadronIso", &T_Elec_neutralHadronIso, &b_T_Elec_neutralHadronIso);
   fChain->SetBranchAddress("T_Elec_photonIso", &T_Elec_photonIso, &b_T_Elec_photonIso);
   fChain->SetBranchAddress("T_Elec_puChargedIso04", &T_Elec_puChargedIso04, &b_T_Elec_puChargedIso04);
   fChain->SetBranchAddress("T_Elec_allChargedHadronIso04", &T_Elec_allChargedHadronIso04, &b_T_Elec_allChargedHadronIso04);
   fChain->SetBranchAddress("T_Elec_chargedHadronIso04", &T_Elec_chargedHadronIso04, &b_T_Elec_chargedHadronIso04);
   fChain->SetBranchAddress("T_Elec_neutralHadronIso04", &T_Elec_neutralHadronIso04, &b_T_Elec_neutralHadronIso04);
   fChain->SetBranchAddress("T_Elec_photonIso04", &T_Elec_photonIso04, &b_T_Elec_photonIso04);
   fChain->SetBranchAddress("T_Elec_Eta", &T_Elec_Eta, &b_T_Elec_Eta);
   fChain->SetBranchAddress("T_Elec_Phi", &T_Elec_Phi, &b_T_Elec_Phi);
   fChain->SetBranchAddress("T_Elec_Px", &T_Elec_Px, &b_T_Elec_Px);
   fChain->SetBranchAddress("T_Elec_Py", &T_Elec_Py, &b_T_Elec_Py);
   fChain->SetBranchAddress("T_Elec_Pz", &T_Elec_Pz, &b_T_Elec_Pz);
   fChain->SetBranchAddress("T_Elec_Pt", &T_Elec_Pt, &b_T_Elec_Pt);
   fChain->SetBranchAddress("T_Elec_Energy", &T_Elec_Energy, &b_T_Elec_Energy);
   fChain->SetBranchAddress("T_Elec_Charge", &T_Elec_Charge, &b_T_Elec_Charge);
   fChain->SetBranchAddress("T_Elec_isEB", &T_Elec_isEB, &b_T_Elec_isEB);
   fChain->SetBranchAddress("T_Elec_isEE", &T_Elec_isEE, &b_T_Elec_isEE);
   fChain->SetBranchAddress("T_Elec_vz", &T_Elec_vz, &b_T_Elec_vz);
   fChain->SetBranchAddress("T_Elec_vy", &T_Elec_vy, &b_T_Elec_vy);
   fChain->SetBranchAddress("T_Elec_vx", &T_Elec_vx, &b_T_Elec_vx);
   fChain->SetBranchAddress("T_Elec_nLost", &T_Elec_nLost, &b_T_Elec_nLost);
   fChain->SetBranchAddress("T_Elec_nHits", &T_Elec_nHits, &b_T_Elec_nHits);
   fChain->SetBranchAddress("T_Elec_kfchi2", &T_Elec_kfchi2, &b_T_Elec_kfchi2);
   fChain->SetBranchAddress("T_Elec_kfhits", &T_Elec_kfhits, &b_T_Elec_kfhits);
   fChain->SetBranchAddress("T_Elec_gsfhits", &T_Elec_gsfhits, &b_T_Elec_gsfhits);
   fChain->SetBranchAddress("T_Elec_gsfchi2", &T_Elec_gsfchi2, &b_T_Elec_gsfchi2);
   fChain->SetBranchAddress("T_Elec_fbrem", &T_Elec_fbrem, &b_T_Elec_fbrem);
   fChain->SetBranchAddress("T_Elec_nbrems", &T_Elec_nbrems, &b_T_Elec_nbrems);
   fChain->SetBranchAddress("T_Elec_missingHits", &T_Elec_missingHits, &b_T_Elec_missingHits);
   fChain->SetBranchAddress("T_Elec_Dist", &T_Elec_Dist, &b_T_Elec_Dist);
   fChain->SetBranchAddress("T_Elec_Dcot", &T_Elec_Dcot, &b_T_Elec_Dcot);
   fChain->SetBranchAddress("T_Elec_D0", &T_Elec_D0, &b_T_Elec_D0);
   fChain->SetBranchAddress("T_Elec_Dz", &T_Elec_Dz, &b_T_Elec_Dz);
   fChain->SetBranchAddress("T_Elec_ip3d", &T_Elec_ip3d, &b_T_Elec_ip3d);
   fChain->SetBranchAddress("T_Elec_ip3ds", &T_Elec_ip3ds, &b_T_Elec_ip3ds);
   fChain->SetBranchAddress("T_Elec_detacalo", &T_Elec_detacalo, &b_T_Elec_detacalo);
   fChain->SetBranchAddress("T_Elec_eledeta", &T_Elec_eledeta, &b_T_Elec_eledeta);
   fChain->SetBranchAddress("T_Elec_eledphi", &T_Elec_eledphi, &b_T_Elec_eledphi);
   fChain->SetBranchAddress("T_Elec_dphicalo", &T_Elec_dphicalo, &b_T_Elec_dphicalo);
   fChain->SetBranchAddress("T_Elec_deltaPhiIn", &T_Elec_deltaPhiIn, &b_T_Elec_deltaPhiIn);
   fChain->SetBranchAddress("T_Elec_deltaEtaIn", &T_Elec_deltaEtaIn, &b_T_Elec_deltaEtaIn);
   fChain->SetBranchAddress("T_Elec_EoP", &T_Elec_EoP, &b_T_Elec_EoP);
   fChain->SetBranchAddress("T_Elec_ESeedoP", &T_Elec_ESeedoP, &b_T_Elec_ESeedoP);
   fChain->SetBranchAddress("T_Elec_ESeedoPout", &T_Elec_ESeedoPout, &b_T_Elec_ESeedoPout);
   fChain->SetBranchAddress("T_Elec_EEleoPout", &T_Elec_EEleoPout, &b_T_Elec_EEleoPout);
   fChain->SetBranchAddress("T_Elec_IoEmIoP", &T_Elec_IoEmIoP, &b_T_Elec_IoEmIoP);
   fChain->SetBranchAddress("T_Elec_SC_Et", &T_Elec_SC_Et, &b_T_Elec_SC_Et);
   fChain->SetBranchAddress("T_Elec_SC_Eta", &T_Elec_SC_Eta, &b_T_Elec_SC_Eta);
   fChain->SetBranchAddress("T_Elec_SC_Phi", &T_Elec_SC_Phi, &b_T_Elec_SC_Phi);
   fChain->SetBranchAddress("T_Elec_SC_RawEnergy", &T_Elec_SC_RawEnergy, &b_T_Elec_SC_RawEnergy);
   fChain->SetBranchAddress("T_Elec_EcalEnergy", &T_Elec_EcalEnergy, &b_T_Elec_EcalEnergy);
   fChain->SetBranchAddress("T_Elec_EsEnergy", &T_Elec_EsEnergy, &b_T_Elec_EsEnergy);
   fChain->SetBranchAddress("T_Elec_PreShowerOverRaw", &T_Elec_PreShowerOverRaw, &b_T_Elec_PreShowerOverRaw);
   fChain->SetBranchAddress("T_Elec_NClusters", &T_Elec_NClusters, &b_T_Elec_NClusters);
   fChain->SetBranchAddress("T_Elec_EtaSeed", &T_Elec_EtaSeed, &b_T_Elec_EtaSeed);
   fChain->SetBranchAddress("T_Elec_PhiSeed", &T_Elec_PhiSeed, &b_T_Elec_PhiSeed);
   fChain->SetBranchAddress("T_Elec_ESeed", &T_Elec_ESeed, &b_T_Elec_ESeed);
   fChain->SetBranchAddress("T_Elec_HtoE", &T_Elec_HtoE, &b_T_Elec_HtoE);
   fChain->SetBranchAddress("T_Elec_EmaxSeed", &T_Elec_EmaxSeed, &b_T_Elec_EmaxSeed);
   fChain->SetBranchAddress("T_Elec_EtopSeed", &T_Elec_EtopSeed, &b_T_Elec_EtopSeed);
   fChain->SetBranchAddress("T_Elec_EbottomSeed", &T_Elec_EbottomSeed, &b_T_Elec_EbottomSeed);
   fChain->SetBranchAddress("T_Elec_EleftSeed", &T_Elec_EleftSeed, &b_T_Elec_EleftSeed);
   fChain->SetBranchAddress("T_Elec_ErightSeed", &T_Elec_ErightSeed, &b_T_Elec_ErightSeed);
   fChain->SetBranchAddress("T_Elec_E2ndSeed", &T_Elec_E2ndSeed, &b_T_Elec_E2ndSeed);
   fChain->SetBranchAddress("T_Elec_E2x5RightSeed", &T_Elec_E2x5RightSeed, &b_T_Elec_E2x5RightSeed);
   fChain->SetBranchAddress("T_Elec_E2x5LeftSeed", &T_Elec_E2x5LeftSeed, &b_T_Elec_E2x5LeftSeed);
   fChain->SetBranchAddress("T_Elec_E2x5TopSeed", &T_Elec_E2x5TopSeed, &b_T_Elec_E2x5TopSeed);
   fChain->SetBranchAddress("T_Elec_E2x5BottomSeed", &T_Elec_E2x5BottomSeed, &b_T_Elec_E2x5BottomSeed);
   fChain->SetBranchAddress("T_Elec_E2x5MaxSeed", &T_Elec_E2x5MaxSeed, &b_T_Elec_E2x5MaxSeed);
   fChain->SetBranchAddress("T_Elec_E1x5Seed", &T_Elec_E1x5Seed, &b_T_Elec_E1x5Seed);
   fChain->SetBranchAddress("T_Elec_E2x2Seed", &T_Elec_E2x2Seed, &b_T_Elec_E2x2Seed);
   fChain->SetBranchAddress("T_Elec_E3x3Seed", &T_Elec_E3x3Seed, &b_T_Elec_E3x3Seed);
   fChain->SetBranchAddress("T_Elec_E5x5Seed", &T_Elec_E5x5Seed, &b_T_Elec_E5x5Seed);
   fChain->SetBranchAddress("T_Elec_see", &T_Elec_see, &b_T_Elec_see);
   fChain->SetBranchAddress("T_Elec_spp", &T_Elec_spp, &b_T_Elec_spp);
   fChain->SetBranchAddress("T_Elec_sep", &T_Elec_sep, &b_T_Elec_sep);
   fChain->SetBranchAddress("T_Elec_etawidth", &T_Elec_etawidth, &b_T_Elec_etawidth);
   fChain->SetBranchAddress("T_Elec_phiwidth", &T_Elec_phiwidth, &b_T_Elec_phiwidth);
   fChain->SetBranchAddress("T_Elec_e1x5e5x5", &T_Elec_e1x5e5x5, &b_T_Elec_e1x5e5x5);
   fChain->SetBranchAddress("T_Elec_s9e25", &T_Elec_s9e25, &b_T_Elec_s9e25);
   fChain->SetBranchAddress("T_Elec_R9", &T_Elec_R9, &b_T_Elec_R9);
   fChain->SetBranchAddress("T_Elec_MatchConv", &T_Elec_MatchConv, &b_T_Elec_MatchConv);
   fChain->SetBranchAddress("T_Elec_EcalDriven", &T_Elec_EcalDriven, &b_T_Elec_EcalDriven);
   fChain->SetBranchAddress("T_Elec_noZSsee", &T_Elec_noZSsee, &b_T_Elec_noZSsee);
   fChain->SetBranchAddress("T_Elec_noZSspp", &T_Elec_noZSspp, &b_T_Elec_noZSspp);
   fChain->SetBranchAddress("T_Elec_noZSsep", &T_Elec_noZSsep, &b_T_Elec_noZSsep);
   fChain->SetBranchAddress("T_Elec_noZSr9", &T_Elec_noZSr9, &b_T_Elec_noZSr9);
   fChain->SetBranchAddress("T_Elec_noZSe1x5", &T_Elec_noZSe1x5, &b_T_Elec_noZSe1x5);
   fChain->SetBranchAddress("T_Elec_noZSe2x5MaxSeed", &T_Elec_noZSe2x5MaxSeed, &b_T_Elec_noZSe2x5MaxSeed);
   fChain->SetBranchAddress("T_Elec_noZSe5x5", &T_Elec_noZSe5x5, &b_T_Elec_noZSe5x5);
   fChain->SetBranchAddress("T_Elec_ECALiso", &T_Elec_ECALiso, &b_T_Elec_ECALiso);
   fChain->SetBranchAddress("T_Elec_HCALiso", &T_Elec_HCALiso, &b_T_Elec_HCALiso);
   fChain->SetBranchAddress("T_Elec_TKiso", &T_Elec_TKiso, &b_T_Elec_TKiso);
   fChain->SetBranchAddress("T_Elec_nbBC", &T_Elec_nbBC, &b_T_Elec_nbBC);
   fChain->SetBranchAddress("T_Elec_BC1_eta", &T_Elec_BC1_eta, &b_T_Elec_BC1_eta);
   fChain->SetBranchAddress("T_Elec_BC1_phi", &T_Elec_BC1_phi, &b_T_Elec_BC1_phi);
   fChain->SetBranchAddress("T_Elec_BC1_energy", &T_Elec_BC1_energy, &b_T_Elec_BC1_energy);
   fChain->SetBranchAddress("T_Elec_BC2_eta", &T_Elec_BC2_eta, &b_T_Elec_BC2_eta);
   fChain->SetBranchAddress("T_Elec_BC2_phi", &T_Elec_BC2_phi, &b_T_Elec_BC2_phi);
   fChain->SetBranchAddress("T_Elec_BC2_energy", &T_Elec_BC2_energy, &b_T_Elec_BC2_energy);
   fChain->SetBranchAddress("T_Elec_BC3_eta", &T_Elec_BC3_eta, &b_T_Elec_BC3_eta);
   fChain->SetBranchAddress("T_Elec_BC3_phi", &T_Elec_BC3_phi, &b_T_Elec_BC3_phi);
   fChain->SetBranchAddress("T_Elec_BC3_energy", &T_Elec_BC3_energy, &b_T_Elec_BC3_energy);
   fChain->SetBranchAddress("T_Jet_Px", &T_Jet_Px, &b_T_Jet_Px);
   fChain->SetBranchAddress("T_Jet_Py", &T_Jet_Py, &b_T_Jet_Py);
   fChain->SetBranchAddress("T_Jet_Pz", &T_Jet_Pz, &b_T_Jet_Pz);
   fChain->SetBranchAddress("T_Jet_Et", &T_Jet_Et, &b_T_Jet_Et);
   fChain->SetBranchAddress("T_Jet_Eta", &T_Jet_Eta, &b_T_Jet_Eta);
   fChain->SetBranchAddress("T_Jet_Energy", &T_Jet_Energy, &b_T_Jet_Energy);
   fChain->SetBranchAddress("T_Jet_Phi", &T_Jet_Phi, &b_T_Jet_Phi);
   fChain->SetBranchAddress("T_METPF_ET", &T_METPF_ET, &b_T_METPF_ET);
   fChain->SetBranchAddress("T_METPF_px", &T_METPF_px, &b_T_METPF_px);
   fChain->SetBranchAddress("T_METPF_py", &T_METPF_py, &b_T_METPF_py);
   fChain->SetBranchAddress("T_METPF_Phi", &T_METPF_Phi, &b_T_METPF_Phi);
   fChain->SetBranchAddress("T_METPF_Sig", &T_METPF_Sig, &b_T_METPF_Sig);
   fChain->SetBranchAddress("T_METPFTypeI_ET", &T_METPFTypeI_ET, &b_T_METPFTypeI_ET);
   fChain->SetBranchAddress("T_METPFTypeI_Phi", &T_METPFTypeI_Phi, &b_T_METPFTypeI_Phi);
}

Bool_t miniTreeBuilder::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef miniTreeBuilder_cxx
