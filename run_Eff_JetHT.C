{  
	gSystem->AddIncludePath("-Iexternal");
	gSystem->SetBuildDir("tmpdir", kTRUE);

	gROOT->ProcessLine(".L xEff_JetHT.C++");

	gStyle->SetOptStat(0);

	char inpath[200];
	// sprintf(inpath, "data/ggtree_data_*.root");
	sprintf(inpath, "/eos/uscms/store/user/ftorresd/triggerStudies2017/JetHT_Run2017D-PromptReco-v1_ggNtuples_JetHT_Run2017D_PromptReco_v1_DCSONLY_v11/JetHT/JetHT_Run2017D-PromptReco-v1/170917_183228/000*/*.root");


  // xEff_JetHT(inpath, 1);
	xEff_JetHT(inpath);
}
