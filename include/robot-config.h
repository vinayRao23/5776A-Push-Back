using namespace vex;

extern brain Brain;

// To set up a motor called LeftFront here, you'd use
// extern motor LeftFront;
extern motor LeftFront;
extern motor LeftMiddle;
extern motor LeftBack;
extern motor RightFront;
extern motor RightMiddle;
extern motor RightBack;

extern controller controller1;
extern motor firstStage;
extern motor secondStage;
extern motor storage;

// Add your devices below, and don't forget to do the same in
// robot-config.cpp:

void vexcodeInit(void);