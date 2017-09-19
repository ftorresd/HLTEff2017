{  
	gSystem->AddIncludePath("-Iexternal");
	gSystem->SetBuildDir("tmpdir", kTRUE);

	gROOT->ProcessLine(".L xEff_JetHT.C++");

	gStyle->SetOptStat(0);

	char inpath[200];
	sprintf(inpath, "data/ggtree_data_*.root");
	

  // xEff_JetHT(inpath, 1);
	xEff_JetHT(inpath);
}
