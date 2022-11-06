/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\andre                                            */
/*    Created:      Sun Oct 30 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "screen.cpp"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  gui scr;
  gui::thatthingyoupress button(5,5);
  gui::thatthingyoupress butt2(75,5);
int t =0;
bool s=false;
  while(true) {
    
  if(button.pressed()) {
    
    while (button.pressed()) {
    wait(10,msec);
    }
    t=t+1;
    if (t>1) {
      t=0;
    }
  }
  
  
  if (t == 0){
    
    button.poff();
  }
  if (t==1) {
    button.p();
  }
  }
}
