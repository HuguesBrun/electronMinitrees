void runTheTree(){
/*TFile *c = TFile::Open("ElecIDtree_9_1_mz8.root");

TTree *theTree = (TTree*) c->Get("eventsTree");*/

//theTree->Print();
    
    TChain *theTree = new TChain("eventsTree");

theTree->Add("/tmp/hbrun/DYJets_25ns/*.root");

    cout << "full nb of events " << theTree->GetEntries() << endl;

theTree->Process("miniTreeBuilder.C+");
//
//
}
