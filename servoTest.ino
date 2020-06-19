// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 3; 
// Create a servo object 
int microDegs = 1000;
Servo Servo1;

int steps= 25;
 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
   Serial.begin(9600);
}
void loop(){ 
//  if(microDegs<1500){
//     Servo1.writeMicroseconds(microDegs);
//     delay(150); 
//     microDegs+=30;
//  }
    Servo1.writeMicroseconds(microDegs);
    delay(150); 
    Serial.println(microDegs);
    if(microDegs>1500 || microDegs<950){
      steps*=-1;
    }
    microDegs+=steps;
  
   // Make servo go to 0 degrees 
   // 1000 microseconds = 1 mili second = 0 degrees
   // 1250 micro = 1.25 = 45 deg
//   // 1500 microseconds = 1.5 mili second = 90 degrees
//   Servo1.writeMicroseconds(1000);
//   delay(1000); 
//     // Make servo go to 0 degrees 
//   Servo1.writeMicroseconds(1250);
//   delay(1000); 

//   if(microDegs<1500){
//     Servo1.writeMicroseconds(microDegs);
//     delay(150); 
//     microDegs+=30;
//   }
//   if(microDegs>=1500){
//    microDegs = 1000;
//   }
//   // Make servo go to 90 degrees 
//   Servo1.write(90); 
//   delay(1000); 
//   // Make servo go to 180 degrees 
//   Servo1.write(180); 
//   delay(1000); 
}
