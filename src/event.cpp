#include "event_tree.h"

#include <iostream>

event_tree::event_tree(){

   pix_val    = new std::vector<int>;
   pix_x      = new std::vector<int>;
   pix_y      = new std::vector<int>;
}

void event_tree::WriteTree(TTree * tree){   
   
   tree->Branch("device_ID", &device_ID);
   tree->Branch("run_ID",    &run_ID);
   tree->Branch("longitude", &longitude);
   tree->Branch("latitude",  &latitude);
   
   tree->Branch("pix_val",   &pix_val);
   tree->Branch("pix_x",     &pix_x);
   tree->Branch("pix_y",     &pix_y);
}
      
void event_tree::ReadTree(TTree * tree){
   
   tree->SetBranchAddress("device_ID", &device_ID);
   tree->SetBranchAddress("run_ID",    &run_ID);
   tree->SetBranchAddress("longitude", &longitute);
   tree->SetBranchAddress("latitude",  &latitude);
   
   delete pix_val;    pix_va     = NULL;
   delete pix_x;      pix_x      = NULL;
   delete pix_y;      pix_y      = NULL;

   tree->SetBranchAddress("pix_val",    &pix_val);
   tree->SetBranchAddress("pix_x",      &pix_x  );
   tree->SetBranchAddress("pix_y",      &pix_y  );
}

void event_tree::Clear(){

   device_ID  = 0;
   run_ID     = 0;
   longitude  = 0;
   latitude   = 0;
   pix_val->clear();
   pix_x->clear();
   pix_y->clear();
}
