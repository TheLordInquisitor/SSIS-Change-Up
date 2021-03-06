/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       imperium                                                  */
/*    Created:      Sun Jun 14 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor1               motor         1               
// Motor2               motor         2               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

//Forming motor groups
motor_group Lift = motor_group(Motor1, Motor2);

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  while(1) {
    if (Controller1.ButtonA.pressing()) {
      Lift.spin(forward,50, percent);
    }else {
      Lift.stop(hold);
    }
    if (Controller1.ButtonB.pressing()) {
      Lift.rotateTo(50, degrees);
    }


    Motor1.spin(forward, Controller1.Axis2.value(), percent);
  }
  
}
