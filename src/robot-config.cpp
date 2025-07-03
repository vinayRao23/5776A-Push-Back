#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain Brain;
motor LeftBack = motor(PORT14, ratio6_1, false);
motor LeftMiddle = motor(PORT13, ratio6_1, false);
motor LeftFront = motor(PORT12, ratio6_1, true);
motor RightBack = motor(PORT9, ratio6_1, true);
motor RightMiddle = motor(PORT19, ratio6_1, true);
motor RightFront = motor(PORT18, ratio6_1, false);

motor firstStage = motor(PORT17, ratio6_1, false);
motor secondStage = motor(PORT15, ratio6_1, false);

motor storage = motor(PORT11, ratio6_1, false);

controller controller1 = controller();

// The motor constructor takes motors as (port, ratio, reversed), so for example
// motor LeftFront = motor(PORT1, ratio6_1, false);

// Add your devices below, and don't forget to do the same in robot-config.h:

void vexcodeInit(void) {
  // nothing to initialize
}