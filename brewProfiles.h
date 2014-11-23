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
  };
const profileStep p1[]={
   {20,3}, //2 bar for 3 second
   {30,1}, //3 bar for 1 seconds
   {00,1}, //0 bar for 1 seconds
   {20,.5}, //2 bar for .5 seconds
   {40,.5}, //4 bar for .5 seconds
   {60,.5}, //6 bar for .5 seconds
   {80,2.5}, //8 bar for 2.5 seconds
   {85,11}, //8.5 bar for 11 seconds
};

//This creates another array of profile steps called p2
const profileStep p2[]={
   {20,3}, //2 bar for 3 second
   {30,1}, //3 bar for 1 seconds
   {00,1}, //0 bar for 1 seconds
   {20,.5}, //2 bar for .5 seconds
   {40,.5}, //4 bar for .5 seconds
   {60,.5}, //6 bar for .5 seconds
   {80,2.5}, //8 bar for 2.5 seconds
   {85,16}, //8.5 bar for 16 seconds
};

//This creates another array of profile steps called p3
const profileStep p3[]={
   {20,3}, //2 bar for 3 second
   {30,1}, //3 bar for 1 seconds
   {00,1}, //0 bar for 1 seconds
   {20,.5}, //2 bar for .5 seconds
   {40,.5}, //4 bar for .5 seconds
   {60,.5}, //6 bar for .5 seconds
   {80,2.5}, //8 bar for 2.5 seconds
   {85,21}, //8.5 bar for 21 seconds
};

const brewProfile BREWS[3]={
  "1oz Espresso", p1,
  "1.5oz Espresso", p2,
  "2oz Espresso", p3,
};
