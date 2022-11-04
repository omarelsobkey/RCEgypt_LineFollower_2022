/********************************
 * Controller : Arduino Nano
 * Designed by: G4
 * Date       : 13 Dec 2022
 ********************************/

#include "variables.h"
#include "Initialize.h"
#include "motor.h"
#include "IR.h"

void setup() {
  motor_init();
  ir_init();
//  serial_init();
}

void loop() {
  ir_read();
  ir_BDC();

//  ir_printReadings();
  
  if (reading == 7 || reading == 2 || reading == 5){
    //forward
    lastMode = 'F';
    motor (180, 180 - 48);
  }
  if (reading == 3 || reading == 1){
    //right
    lastMode = 'R';
    motor (0, 160);
  }
  if (reading == 6 || reading == 4){
    //left
    lastMode = 'L';
    motor (160, 0);
  }
  if(reading == 0){
    switch(lastMode){
      case 'F': motor (180, 180 - 48); break;
      case 'R': motor (0, 160); break;
      case 'L': motor (160, 0); break;
    }
  }
}
