#include <Servo.h>

#define GPIO_SERVO1 02  //D4
#define GPIO_SERVO2 14 //D5
#define GPIO_SERVO3 13 //D7
#define GPIO_SERVO4 15 //D8

Servo servo_der_pie;
Servo servo_der_rod;
Servo servo_izq_pie;
Servo servo_izq_rod;

void walk_forward(){}

void walk_backward(){}

void turn_left(){}

void turn_right(){}

void moonwalk(){}

void bend(){}

void shake_leg(){}

void crusaito(){}

void flapping(){}

void swing(){}

void tiptoe_swing(){}

void jitter(){}

void up_down(){}

void happy(){}

void super_happy(){}

void sad(){}

void victory(){}

void angry(){}

void sleeping(){}

void fretful(){}

void love(){}

void confused(){}

void fart(){}

void fail(){}

void setup() {

  //config servos
  servo_der_pie.attach(GPIO_SERVO1);
  servo_der_rod.attach(GPIO_SERVO2);
  servo_izq_pie.attach(GPIO_SERVO3);
  servo_izq_rod.attach(GPIO_SERVO4);

}

void loop() {

  servo_der_pie.write(45);
  delay(500);
  servo_izq_rod.write(45);
  delay(500);
  servo_izq_rod.write(135);
  delay(500);
  servo_izq_rod.write(90);
  delay(500);
  servo_der_pie.write(90);
  delay(500);
  
  servo_izq_pie.write(135);
  delay(500);
  servo_der_rod.write(45);
  delay(500);
  servo_der_rod.write(135);
  delay(500);
  servo_der_rod.write(90);
  delay(500);
  servo_izq_pie.write(90);
  delay(500);

 
}
