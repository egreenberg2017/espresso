#include <arduino.h>
//This defines a datatype with the name profile step
struct profileStep
 {const byte pressure;//pressure to maintain for this step
  const byte duration;//how long to hold this pressure
 };
 
//This defines a datatype with the name brewProfile 
struct brewProfile
  {
   const char* name;  //description profile
   const profileStep* steps;  //pointer to array of bytes defining pressures
   int stepCount;  
};

const profileStep p1[]={
   {20,30}, //2 bar for 3 second
   {30,10}, //3 bar for 1 seconds
   {00,10}, //0 bar for 1 seconds
   {20,5}, //2 bar for .5 seconds
   {40,5}, //4 bar for .5 seconds
   {60,5}, //6 bar for .5 seconds
   {80,25}, //8 bar for 2.5 seconds
   {85,110}, //8.5 bar for 11 seconds
};

//This creates another array of profile steps called p2
const profileStep p2[]={
   {20,30}, //2 bar for 3 second
   {30,10}, //3 bar for 1 seconds
   {00,10}, //0 bar for 1 seconds
   {20,5}, //2 bar for .5 seconds
   {40,5}, //4 bar for .5 seconds
   {60,5}, //6 bar for .5 seconds
   {80,25}, //8 bar for 2.5 seconds
   {85,160}, //8.5 bar for 16 seconds
};

//This creates another array of profile steps called p3
const profileStep p3[]={
   {20,30}, //2 bar for 3 second
   {30,10}, //3 bar for 1 seconds
   {00,10}, //0 bar for 1 seconds
   {20,5}, //2 bar for .5 seconds
   {40,5}, //4 bar for .5 seconds
   {60,5}, //6 bar for .5 seconds
   {80,25}, //8 bar for 2.5 seconds
   {85,210}, //8.5 bar for 21 seconds
};

const brewProfile BREWS[3]={
  "1oz Espresso", p1, sizeof(p1) / sizeof(profileStep), 
  "1.5oz Espresso", p2, sizeof(p2) / sizeof(profileStep),
  "2oz Espresso", p3, sizeof(p3) / sizeof(profileStep)
};
