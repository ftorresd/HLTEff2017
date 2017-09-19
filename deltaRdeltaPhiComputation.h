Float_t deltaPhi(Float_t phi1, Float_t phi2) 
{
  Float_t dPhi = phi1 - phi2;
  if (dPhi > TMath::Pi()) dPhi -= 2.*TMath::Pi();
  if (dPhi < -TMath::Pi()) dPhi += 2.*TMath::Pi();
  return dPhi;
}


Float_t deltaR (Float_t eta1, Float_t phi1, Float_t eta2, Float_t phi2) 
{
  Float_t dEta, dPhi ;
  dEta = eta1 - eta2;
  dPhi = deltaPhi(phi1, phi2);
  return sqrt(dEta*dEta+dPhi*dPhi);
}
