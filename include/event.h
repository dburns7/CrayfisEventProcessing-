#ifndef EVENT_H
#define EVENT_H

class Event;

enum {LFMUMU=0, LFEMEM=1, LFEMMU=2}; // lpeton flavors

class Event {
public:
   Event();

   int device_ID;
   int run_ID;
   double longitude;
   double latitude;
   std::vector<int> * pix_val;
   std::vector<int> * pix_x;
   std::vector<int> * pix_y;
   std::vector<double> * longitude;
   std::vector<double> * latitude;

   void ReadTree(TTree * tree);
   void WriteTree(TTree * tree);
   void Clear();

};

#endif
