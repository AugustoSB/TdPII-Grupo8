#include <Servo.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>





//macros
#define TRUE 1
#define FALSE 0
//ultrasonido
#define GPIO_TRIGGER 05 //D1
#define GPIO_ECHO 04 //D2
//servos
#define GPIO_SERVO1 02  //D4
#define GPIO_SERVO2 14 //D5
#define GPIO_SERVO3 13 //D7
#define GPIO_SERVO4 15 //D8





//variables globales
ESP8266WebServer server(80);
Servo servo_der_pie;
Servo servo_der_rod;
Servo servo_izq_pie;
Servo servo_izq_rod;
bool ultrasonido_state = FALSE;





//ROUTINES - https://www.youtube.com/watch?v=VD6sgTo6NOY



void walk_forward(){

  unsigned int i;

  for(i=0 ; i<2 ; i++){
	  servo_der_pie.write(120);
	  delay(100);
	  servo_der_rod.write(70);
	  servo_izq_rod.write(70);
	  delay(100);
	  servo_der_pie.write(90);
	  delay(100);
	  servo_izq_pie.write(120);
	  delay(100);
	  servo_der_rod.write(110);
	  servo_izq_rod.write(110);
	  delay(100);
	  servo_izq_pie.write(90);
	  delay(100);
  }

  servo_der_rod.write(90);
  servo_izq_rod.write(90);

}



void walk_backward(){

  unsigned int i;

  for(i=0 ; i<2 ; i++){
	  servo_der_pie.write(120);
	  delay(100);
	  servo_der_rod.write(110);
	  servo_izq_rod.write(110);
	  delay(100);
	  servo_der_pie.write(90);
	  delay(100);
	  servo_izq_pie.write(120);
	  delay(100);
	  servo_der_rod.write(70);
	  servo_izq_rod.write(70);
	  delay(100);
	  servo_izq_pie.write(90);
	  delay(100);
	}
  servo_der_rod.write(90);
  servo_izq_rod.write(90);
  
}



void turn_left(){
  
  unsigned int i;
  for(i=0 ; i<2 ; i++){
	  servo_der_pie.write(120);
	  delay(100);
	  servo_der_rod.write(70);
	  servo_izq_rod.write(90);
	  delay(100);
	  servo_der_pie.write(90);
	  delay(100);
	  servo_izq_pie.write(60);
	  delay(100);
	  servo_der_rod.write(110);
	  servo_izq_rod.write(90);
	  delay(100);
	  servo_izq_pie.write(90);
	  delay(100);

  }
  servo_der_rod.write(90);
  servo_izq_rod.write(90);
  
}



void turn_right(){
  unsigned int i;
  for(i=0; i<2; i++){

	  servo_der_pie.write(120);
	  delay(100);
	  servo_izq_rod.write(70);
	  delay(100);
	  servo_der_pie.write(90);
	  delay(100);
	  servo_izq_pie.write(120);
	  delay(100);
	  servo_izq_rod.write(110);
	  delay(100);
	  servo_izq_pie.write(90);
	  delay(100);
	  
	}
  servo_der_rod.write(90);
  servo_izq_rod.write(90);

}



void moonwalk(){

  //hacia un lado
  servo_der_pie.write(135);
  delay(250);
  servo_izq_pie.write(45);
  delay(250);
  servo_der_pie.write(90);
  delay(250);
  servo_izq_pie.write(90);
  delay(250);
  servo_der_pie.write(135);
  delay(250);
  servo_izq_pie.write(45);
  delay(250);
  servo_der_pie.write(90);
  delay(250);
  servo_izq_pie.write(90);
  
  delay(1000);
  
  //para el otro
  servo_izq_pie.write(45);
  delay(250);
  servo_der_pie.write(135);
  delay(250);
  servo_izq_pie.write(90);
  delay(250);
  servo_der_pie.write(90);
  delay(250);
  servo_izq_pie.write(45);
  delay(250);
  servo_der_pie.write(135);
  delay(250);
  servo_izq_pie.write(90);
  delay(250);
  servo_der_pie.write(90);
  delay(250);
  
}



void bend(){
  
	servo_der_pie.write(135);
	delay(250);
	servo_der_pie.write(90);
	delay(1000);
	servo_izq_pie.write(45);
  	delay(250);
	servo_izq_pie.write(90);

}



void shake_leg(){

  servo_der_pie.write(115);
  delay(70);
  servo_der_pie.write(140);
  delay(200);
  servo_izq_pie.write(110);
  servo_der_pie.write(120);
  delay(200);
  servo_der_pie.write(70);
  delay(70);
  servo_der_pie.write(110);
  delay(70);
  servo_der_pie.write(70);
  delay(70);
  servo_der_pie.write(130);
  delay(70);
  servo_der_pie.write(90);
  servo_izq_pie.write(90);

}



void crusaito(){

  servo_der_rod.write(70);
  delay(200);
  servo_der_pie.write(115);
  delay(200);
  servo_der_rod.write(90);
  delay(200);
  servo_der_rod.write(110);
  servo_izq_rod.write(110);
  delay(200);
  servo_der_pie.write(90);
  servo_izq_pie.write(65);
  delay(200);
  servo_der_rod.write(90);
  servo_izq_rod.write(90);
  delay(200);
  servo_der_rod.write(70);
  servo_izq_rod.write(70);
  delay(200);
  servo_der_pie.write(115);
  servo_izq_pie.write(90);
  delay(200);
  servo_der_rod.write(90);
  servo_izq_rod.write(90);
  delay(200);
  servo_der_rod.write(110);
  servo_izq_rod.write(110);
  delay(200);
  servo_der_pie.write(90);
  servo_izq_pie.write(65);
  delay(200);
  servo_der_rod.write(90);
  servo_izq_rod.write(90);
  delay(200);
  servo_der_rod.write(70);
  servo_izq_rod.write(70);
  delay(200);
  servo_izq_pie.write(90);
  delay(200);
  servo_der_rod.write(90);
  servo_izq_rod.write(90);

}



void flapping(){

	unsigned int i;
	//hacia un lado
	//subir
	for(i=1 ; i<=3 ; i++){
		servo_der_pie.write(90+(i*10));
		servo_izq_pie.write(90-(i*10));
		servo_der_rod.write(90+(i*5));
		servo_izq_rod.write(90-(i*5));
		delay(200);
	}
	/*
	servo_der_pie.write(100);
	servo_izq_pie.write(80);
	servo_der_rod.write(95);
	servo_izq_rod.write(85);
	delay(200);
	servo_der_pie.write(110);
	servo_izq_pie.write(70);
	servo_der_rod.write(100);
	servo_izq_rod.write(80);
	delay(200);
	servo_der_pie.write(120);
	servo_izq_pie.write(60);
	servo_der_rod.write(105);
	servo_izq_rod.write(75);
	delay(200);
	 */

	for(i=1 ; i<=3 ; i++){
		servo_der_pie.write(120+i*5);
		servo_izq_pie.write(60-i*5);
		servo_der_rod.write(105-i*5);
		servo_izq_rod.write(75+i*5);
		delay(200);
	}
	/*
	servo_der_pie.write(125);
	servo_izq_pie.write(55);
	servo_der_rod.write(100);
	servo_izq_rod.write(80);
	delay(200);
	servo_der_pie.write(130);
	servo_izq_pie.write(50);
	servo_der_rod.write(95);
	servo_izq_rod.write(85);
	delay(200);
	servo_der_pie.write(135);
	servo_izq_pie.write(45);
	servo_der_rod.write(90);
	servo_izq_rod.write(90);
	delay(200);
	*/

  //bajar
	for(i=1; i<=3; i++){

		servo_der_pie.write(135-i*5);
	  	servo_izq_pie.write(45+i*5);
  		servo_der_rod.write(90+i*5);
	  	servo_izq_rod.write(90-i*5);
	  	delay(200);
	}

  // servo_der_pie.write(130);
  // servo_izq_pie.write(50);
  // servo_der_rod.write(95);
  // servo_izq_rod.write(85);
  // delay(200);
  // servo_der_pie.write(125);
  // servo_izq_pie.write(55);
  // servo_der_rod.write(100);
  // servo_izq_rod.write(80);
  // delay(200);
  // servo_der_pie.write(120);
  // servo_izq_pie.write(60);
  // servo_der_rod.write(105);
  // servo_izq_rod.write(75);
  // delay(200);

for(i=1; i<=3; i++){
  servo_der_pie.write(120-i*10);
  servo_izq_pie.write(60+i*10);
  servo_der_rod.write(105-i*5);
  servo_izq_rod.write(75+i*5);
}
  // servo_der_pie.write(110);
  // servo_izq_pie.write(70);
  // servo_der_rod.write(100);
  // servo_izq_rod.write(80);
  // delay(200);
  // servo_der_pie.write(100);
  // servo_izq_pie.write(80);
  // servo_der_rod.write(95);
  // servo_izq_rod.write(85);
  // delay(200);
  // servo_der_pie.write(90);
  // servo_izq_pie.write(90);
  // servo_der_rod.write(90);
  // servo_izq_rod.write(90);
  // delay(200);

	//hacia el otro
	//subir
	for (i = 1; i<=3; i++)
	{
		servo_der_pie.write(90+i*10);
		servo_izq_pie.write(90-i*10);
		servo_der_rod.write(90+i*5);
		servo_izq_rod.write(90-i*5);
	}
	/*
	servo_der_pie.write(100);
	servo_izq_pie.write(80);
	servo_izq_rod.write(95);
	servo_der_rod.write(85);
	delay(200);
	servo_der_pie.write(110);
	servo_izq_pie.write(70);
	servo_izq_rod.write(100);
	servo_der_rod.write(80);
	delay(200);
	servo_der_pie.write(120);
	servo_izq_pie.write(60);
	servo_izq_rod.write(105);
	servo_der_rod.write(75);
	delay(200);
	*/
	for (i = 1; i<=3; i++)
	{
		servo_der_pie.write(120+i*5);
		servo_izq_pie.write(60-i*5);
		servo_der_rod.write(105-i*5);
		servo_izq_rod.write(75+i*5);
	}
	/*
	servo_der_pie.write(125);
	servo_izq_pie.write(55);
	servo_izq_rod.write(100);
	servo_der_rod.write(80);
	delay(200);
	servo_der_pie.write(130);
	servo_izq_pie.write(50);
	servo_izq_rod.write(95);
	servo_der_rod.write(85);
	delay(200);
	servo_der_pie.write(135);
	servo_izq_pie.write(45);
	servo_izq_rod.write(90);
	servo_der_rod.write(90);
	delay(200);
	*/
//bajar
	for (i = 1; i<=3; i++)
	{
		servo_der_pie.write(135-i*5);
		servo_izq_pie.write(45+i*5);
		servo_der_rod.write(90+i*5);
		servo_izq_rod.write(90-i*5);
	}
	/*
	servo_der_pie.write(130);
	servo_izq_pie.write(50);
	servo_izq_rod.write(95);
	servo_der_rod.write(85);
	delay(200);
	servo_der_pie.write(125);
	servo_izq_pie.write(55);
	servo_izq_rod.write(100);
	servo_der_rod.write(80);
	delay(200);
	servo_der_pie.write(120);
	servo_izq_pie.write(60);
	servo_izq_rod.write(105);
	servo_der_rod.write(75);
	delay(200);
	*/
	for (i = 1; i<=3; i++)
	{
		servo_der_pie.write(120-i*10);
		servo_izq_pie.write(60+i*10);
		servo_der_rod.write(105-i*5);
		servo_izq_rod.write(75+i*5);
	}
	/*
	servo_der_pie.write(110);
	servo_izq_pie.write(70);
	servo_izq_rod.write(100);
	servo_der_rod.write(80);
	delay(200);
	servo_der_pie.write(100);
	servo_izq_pie.write(80);
	servo_izq_rod.write(95);
	servo_der_rod.write(85);
	delay(200);
	servo_der_pie.write(90);
	servo_izq_pie.write(90);
	servo_izq_rod.write(90);
	servo_der_rod.write(90);
	delay(200);
	*/
}



void swing(){
	unsigned int j;
  	servo_izq_pie.write(70);
 	delay(100);
  servo_izq_pie.write(50);
  delay(200);
  //
  for(j=1; j<=2; j++){
	  servo_der_pie.write(110);
	  servo_izq_pie.write(70);
	  delay(200);
	  servo_der_pie.write(130);
	  servo_izq_pie.write(90);
	  delay(200);
	  servo_der_pie.write(110);
	  servo_izq_pie.write(70);
	  delay(200);
	  servo_der_pie.write(90);
	  servo_izq_pie.write(50);
	  delay(200);

  }
  //
  // servo_der_pie.write(110);
  // servo_izq_pie.write(70);
  // delay(200);
  // servo_der_pie.write(130);
  // servo_izq_pie.write(90);
  // delay(200);
  // servo_der_pie.write(110);
  // servo_izq_pie.write(70);
  // delay(200);
  // servo_der_pie.write(90);
  // servo_izq_pie.write(50);
  // delay(200);
  //

  servo_der_pie.write(130);
  servo_izq_pie.write(50);
  delay(200);
  servo_der_pie.write(160);
  servo_izq_pie.write(70);
  delay(200);
  servo_der_pie.write(130);
  servo_izq_pie.write(50);
  delay(200);
  servo_der_pie.write(90);
  servo_izq_pie.write(30);
  delay(200);
  servo_der_pie.write(90);
  servo_izq_pie.write(90);
  delay(200);
  
}



void tiptoe_swing(){
unsigned int i;
  //mover rodillas 2 veces
	for(i=1; i<=2; i++){
	  servo_izq_rod.write(70);
	  servo_der_rod.write(110);
	  delay(150);
	  servo_izq_rod.write(90);
	  servo_der_rod.write(90);
	  delay(100);
	  servo_izq_rod.write(110);
	  servo_der_rod.write(70);
	  delay(150);
	  servo_izq_rod.write(90);
	  servo_der_rod.write(90);
	  delay(100);

	}
  //segunda vez
  // servo_izq_rod.write(70);
  // servo_der_rod.write(110);
  // delay(150);
  // servo_izq_rod.write(90);
  // servo_der_rod.write(90);
  // delay(100);
  // servo_izq_rod.write(110);
  // servo_der_rod.write(70);
  // delay(150);
  // servo_izq_rod.write(90);
  // servo_der_rod.write(90);
  // delay(100);
  //mover pies
  servo_izq_pie.write(70);
  servo_der_pie.write(110);
  delay(200);
  servo_izq_pie.write(50);
  servo_der_pie.write(130);
  delay(200);
  servo_izq_pie.write(70);
  servo_der_pie.write(110);
  delay(200);
  servo_izq_pie.write(90);
  servo_der_pie.write(90);
  
}



void jitter(){

	//1
  servo_der_pie.write(105);
  servo_izq_pie.write(75);
  delay(200);
  servo_der_pie.write(120);
  servo_izq_pie.write(60);
  delay(200);
  servo_izq_pie.write(75);
  delay(200);
  servo_der_pie.write(90);
  servo_izq_pie.write(90);
  delay(200);
  //2

  servo_der_pie.write(105);
  servo_izq_pie.write(75);
  servo_izq_rod.write(95);
  servo_der_rod.write(85);
  delay(200);
  servo_der_pie.write(120);
  servo_izq_pie.write(60);
  servo_izq_rod.write(100);
  servo_der_rod.write(80);
  delay(200);
  servo_izq_pie.write(75);
  servo_izq_rod.write(95);
  servo_der_rod.write(85);
  delay(200);
  servo_der_pie.write(90);
  servo_izq_pie.write(90);
  servo_izq_rod.write(90);
  servo_der_rod.write(90);
  delay(200);
  //3
  servo_der_pie.write(105);
  servo_izq_pie.write(75);
  servo_izq_rod.write(97);
  servo_der_rod.write(83);
  delay(200);
  servo_der_pie.write(120);
  servo_izq_pie.write(60);
  servo_izq_rod.write(105);
  servo_der_rod.write(75);
  delay(200);
  servo_der_pie.write(120);
  servo_izq_pie.write(75);
  servo_izq_rod.write(97);
  servo_der_rod.write(83);
  delay(200);
  servo_der_pie.write(90);
  servo_izq_pie.write(90);
  servo_izq_rod.write(90);
  servo_der_rod.write(90);
  delay(200);

}



void up_down(){

	unsigned int i;

	for(i=1 ; i<=6 ; i++){
		servo_der_pie.write(90+i*5);
		servo_izq_pie.write(90-i*5);
		delay(20+i*5);
	}
	/*
	servo_der_pie.write(95);
	servo_izq_pie.write(85);
	delay(25);
	servo_der_pie.write(100);
	servo_izq_pie.write(70);
	delay(30);
	servo_der_pie.write(105);
	servo_izq_pie.write(65);
	delay(35);
	servo_der_pie.write(110);
	servo_izq_pie.write(60);
	delay(40);
	servo_der_pie.write(115);
	servo_izq_pie.write(55);
	delay(45);
	servo_der_pie.write(120);
	servo_izq_pie.write(50);
	delay(50);
	servo_der_pie.write(125);
	servo_izq_pie.write(45);
	delay(55);
	*/
	for(i=1 ; i<=3 ; i++){
		servo_der_rod.write(90+i*2);
		servo_izq_rod.write(90-i*2);
		servo_der_pie.write(125+i*5);
		servo_izq_pie.write(45-i*5);
		delay(55+i*5);
	}
	delay(30);
	/*
	servo_der_rod.write(92);
	servo_izq_rod.write(88);
	servo_der_pie.write(130);
	servo_izq_pie.write(40);
	delay(60);
	servo_der_rod.write(94);
	servo_izq_rod.write(86);
	servo_der_pie.write(135);
	servo_izq_pie.write(35);
	delay(65);
	servo_der_rod.write(95);
	servo_izq_rod.write(85);
	servo_der_pie.write(140);
	servo_izq_pie.write(30);
	delay(100);
	*/
  

	for(i=1 ; i<=2 ; i++){
		servo_der_rod.write(96-i*2);
		servo_izq_rod.write(84+i*2);
		servo_der_pie.write(140-i*5);
		servo_izq_pie.write(30+i*5);
		delay(70-i*5);
	}
	/*
	servo_der_rod.write(94);
	servo_izq_rod.write(86);
	servo_der_pie.write(135);
	servo_izq_pie.write(35);
	delay(65);

	servo_der_rod.write(92);
	servo_izq_rod.write(88);
	servo_der_pie.write(130);
	servo_izq_pie.write(40);
	delay(60);
	*/

  servo_der_pie.write(125);
  servo_izq_pie.write(45);
  delay(55);
  servo_der_pie.write(120);
  servo_izq_pie.write(50);
  delay(50);
  servo_der_pie.write(115);
  servo_izq_pie.write(55);
  delay(45);
  servo_der_pie.write(110);
  servo_izq_pie.write(60);
  delay(40);
  servo_der_pie.write(105);
  servo_izq_pie.write(65);
  delay(30);
  servo_der_pie.write(100);
  servo_izq_pie.write(70);
  delay(30);
  servo_der_pie.write(95);
  servo_izq_pie.write(85);
  
}



void happy(){
  
  delay(70);
  servo_der_pie.write(86);
  servo_izq_pie.write(82);
  delay(70);
  servo_der_pie.write(82);
  servo_izq_pie.write(74);
  delay(70);
  servo_der_pie.write(78);
  servo_izq_pie.write(66);
  delay(70);
  servo_der_pie.write(74);
  servo_izq_pie.write(58);
  delay(70);  
  servo_der_pie.write(70);
  servo_izq_pie.write(50);
  delay(70);
  servo_der_pie.write(82);
  servo_izq_pie.write(62);
  delay(70);
  servo_der_pie.write(94);
  servo_izq_pie.write(74);
  delay(70);
  servo_der_pie.write(106);
  servo_izq_pie.write(86);
  delay(70);
  servo_der_pie.write(118);
  servo_izq_pie.write(98);
  delay(70);
  servo_der_pie.write(130);
  servo_izq_pie.write(110);
  delay(70);
  servo_der_pie.write(118);
  servo_izq_pie.write(98);
  delay(70);
  servo_der_pie.write(114);
  servo_izq_pie.write(95);
  delay(70);
  servo_der_pie.write(110);
  servo_izq_pie.write(80);
  delay(70);
  servo_der_pie.write(90);
  servo_izq_pie.write(90);
  
}



void super_happy(){

  servo_der_pie.write(120);
  servo_izq_pie.write(75);
  delay(250);
  servo_der_pie.write(105);
  servo_izq_pie.write(60);
  delay(100);
  servo_der_pie.write(120);
  servo_izq_pie.write(75);
  delay(100);
  servo_der_pie.write(105);
  servo_izq_pie.write(60);
  delay(250);
  servo_der_pie.write(120);
  servo_izq_pie.write(75);
  delay(100);
  servo_der_pie.write(105);
  servo_izq_pie.write(60);
  delay(100);
  servo_der_pie.write(120);
  servo_izq_pie.write(75);
  delay(250);
  servo_der_pie.write(90);
  servo_izq_pie.write(90);
  
}



void sad(){

	unsigned int i;

	for(i=1 ; i<=5 ; i++){
		servo_der_rod.write(90-i*2);
		servo_izq_rod.write(90+i*4);
		servo_der_pie.write(90-i*9);
		servo_izq_pie.write(90+i*12);
		delay(55);
	}
	/*
	servo_der_rod.write(88);
	servo_izq_rod.write(94);
	servo_der_pie.write(81);
	servo_izq_pie.write(102);
	delay(55);
	servo_der_rod.write(86);
	servo_izq_rod.write(98);
	servo_der_pie.write(72);
	servo_izq_pie.write(114);
	delay(55);
	servo_der_rod.write(84);
	servo_izq_rod.write(102);
	servo_der_pie.write(63);
	servo_izq_pie.write(126);
	delay(55);
	servo_der_rod.write(82);
	servo_izq_rod.write(106);
	servo_der_pie.write(54);
	servo_izq_pie.write(138);
	delay(55);
	servo_der_rod.write(80);
	servo_izq_rod.write(110);
	servo_der_pie.write(45);
	servo_izq_pie.write(150);
	*/
	delay(4000);
	for(i=1 ; i<=5 ; i++){
		servo_der_rod.write(80+i*2);
		servo_izq_rod.write(110-i*4);
		servo_der_pie.write(45+i*9);
		servo_izq_pie.write(150-i*12);
		delay(55);
	}
	/*
	servo_der_rod.write(82);
	servo_izq_rod.write(106);
	servo_der_pie.write(54);
	servo_izq_pie.write(138);
	delay(55);
	servo_der_rod.write(84);
	servo_izq_rod.write(102);
	servo_der_pie.write(63);
	servo_izq_pie.write(126);
	delay(55);
	servo_der_rod.write(86);
	servo_izq_rod.write(98);
	servo_der_pie.write(72);
	servo_izq_pie.write(114);
	delay(55);
	servo_der_rod.write(88);
	servo_izq_rod.write(94);
	servo_der_pie.write(81);
	servo_izq_pie.write(102);
	delay(55);
	servo_der_rod.write(90);
	servo_izq_rod.write(90);
	servo_izq_pie.write(90);
	servo_der_pie.write(90);
	*/
}



void victory(){
  unsigned int i;
  for(i=1; i<=6;i++){
 	 servo_der_pie.write(90+i*5);
 	 servo_izq_pie.write(90-i*5);
 	 delay(25+i*5);	
  }
  /*
  servo_der_pie.write(95);
  servo_izq_pie.write(85);
  delay(30);
  servo_der_pie.write(100);
  servo_izq_pie.write(70);
  delay(30);
  servo_der_pie.write(105);
  servo_izq_pie.write(65);
  delay(35);
  servo_der_pie.write(110);
  servo_izq_pie.write(60);
  delay(40);
  servo_der_pie.write(115);
  servo_izq_pie.write(55);
  delay(45);
  servo_der_pie.write(120);
  servo_izq_pie.write(50);
  delay(50);
  servo_der_pie.write(125);
  servo_izq_pie.write(45);
  delay(55);
*/
 	for(i=1; i<3; i++){
		servo_der_rod.write(90+i*2);
		servo_izq_rod.write(90-i*2);
		servo_der_pie.write(125+i*5);
		servo_izq_pie.write(45-i*5);
		delay(60);
 	}
 	/*
  servo_der_rod.write(92);
  servo_izq_rod.write(88);
  servo_der_pie.write(130);
  servo_izq_pie.write(40);
  delay(60);
  servo_der_rod.write(94);
  servo_izq_rod.write(86);
  servo_der_pie.write(135);
  servo_izq_pie.write(35);
  delay(65);
  servo_der_rod.write(95);
  servo_izq_rod.write(85);
  servo_der_pie.write(140);
  servo_izq_pie.write(30);
 */
  delay(100);
  for (i = 1; i <= 2; i++)
  {
	  servo_der_rod.write(96-i*2);
	  servo_izq_rod.write(84+i*2);
	  servo_der_pie.write(140-i*5);
	  servo_izq_pie.write(30+i*5);
	  delay(70-i*5);
	  	

  	/* code */
  }
  /*
  servo_der_rod.write(94);
  servo_izq_rod.write(86);
  servo_der_pie.write(135);
  servo_izq_pie.write(35);
  delay(65);
  
  servo_der_rod.write(92);
  servo_izq_rod.write(88);
  servo_der_pie.write(130);
  servo_izq_pie.write(40);
  delay(60);
 */
  for(i=1; i<8; i++){

 	 servo_der_pie.write(130-i*5);
 	 servo_izq_pie.write(40+i*5);
 	 delay(60-i*4);	
  }
  /*
  servo_der_pie.write(125);
  servo_izq_pie.write(45);
  delay(55);
  servo_der_pie.write(120);
  servo_izq_pie.write(50);
  delay(50);
  servo_der_pie.write(115);
  servo_izq_pie.write(55);
  delay(45);
  servo_der_pie.write(110);
  servo_izq_pie.write(60);
  delay(40);
  servo_der_pie.write(105);
  servo_izq_pie.write(65);
  delay(30);
  servo_der_pie.write(100);
  servo_izq_pie.write(70);
  delay(30);
  servo_der_pie.write(90);
  servo_izq_pie.write(60);
  delay(30); 
  servo_der_pie.write(120);
  servo_izq_pie.write(70);
  delay(30);
  servo_der_pie.write(90);
  servo_izq_pie.write(90);
  */
  delay(100);
  servo_izq_pie.write(70);
  delay(100);
  servo_izq_pie.write(50);
  delay(100);
  //
  for(i=1; i<=2; i++){
	servo_der_pie.write(110);
	servo_izq_pie.write(70);
	delay(100);
	servo_der_pie.write(130);
	servo_izq_pie.write(90);
	delay(100);
	servo_der_pie.write(110);
	servo_izq_pie.write(70);
	delay(100);
	servo_der_pie.write(90);
	servo_izq_pie.write(50);
	delay(100);
  }
  //
/*
  servo_der_pie.write(110);
  servo_izq_pie.write(70);
  delay(100);
  servo_der_pie.write(130);
  servo_izq_pie.write(90);
  delay(100);
  servo_der_pie.write(110);
  servo_izq_pie.write(70);
  delay(100);
  servo_der_pie.write(90);
  servo_izq_pie.write(50);
  delay(100);
*/
  servo_izq_pie.write(90);

}



void angry(){
  
  servo_izq_rod.write(80);
  servo_der_rod.write(80);
  delay(100);
  servo_izq_rod.write(70);
  servo_der_rod.write(70);
  delay(300);
  servo_izq_rod.write(80);
  servo_der_rod.write(80);
  delay(100);
  servo_izq_rod.write(90);
  servo_der_rod.write(90);
  delay(100);
  servo_izq_rod.write(100);
  servo_der_rod.write(100);
  delay(100);
  servo_izq_rod.write(110);
  servo_der_rod.write(110);
  delay(300);
  servo_izq_rod.write(100);
  servo_der_rod.write(100);
  delay(100);
  servo_izq_rod.write(90);
  servo_der_rod.write(90);
  delay(100);
  //asdasdas
  servo_izq_rod.write(80);
  servo_der_rod.write(80);
  delay(100);
  servo_izq_rod.write(70);
  servo_der_rod.write(70);
  delay(300);
  servo_izq_rod.write(80);
  servo_der_rod.write(80);
  delay(100);
  servo_izq_rod.write(90);
  servo_der_rod.write(90);
  delay(100);
  servo_izq_rod.write(100);
  servo_der_rod.write(100);
  delay(100);
  servo_izq_rod.write(110);
  servo_der_rod.write(110);
  delay(200);
  servo_izq_rod.write(100);
  servo_der_rod.write(100);
  delay(100);
  servo_izq_rod.write(90);
  servo_der_rod.write(90);
  delay(300);
  //asdasd
  servo_izq_pie.write(70);
  servo_der_pie.write(110);
  delay(400);
  servo_izq_pie.write(90);
  servo_der_pie.write(90);

}



void sleeping(){

  servo_der_pie.write(75);
  servo_izq_pie.write(105);
  delay(500);
  servo_izq_pie.write(115);
  delay(3000);
  servo_der_pie.write(90);
  servo_izq_pie.write(90);
  
}



void fretful(){
  
  servo_der_pie.write(105);
  delay(100);
  servo_der_pie.write(90);
  delay(900);
  servo_der_pie.write(110);
  delay(100);
  servo_der_pie.write(90);
  delay(800);
  servo_der_pie.write(100);
  delay(100);
  servo_der_pie.write(90);
  delay(9000);
  servo_der_pie.write(110);
  delay(100);
  servo_der_pie.write(90);
  
}



void love(){
delay(115);
  servo_izq_pie.write(70);
  servo_der_pie.write(100);
  delay(115);
  servo_izq_rod.write(80);
  servo_der_rod.write(100);
  servo_izq_pie.write(80);
  servo_der_pie.write(110);
  delay(115);
  servo_izq_rod.write(70);
  servo_der_rod.write(110);
  servo_izq_pie.write(90);
  servo_der_pie.write(115);
  delay(115);
  servo_izq_rod.write(80);
  servo_der_rod.write(115);
  servo_izq_pie.write(80);
  servo_der_pie.write(120);
  delay(115);
  servo_izq_rod.write(90);
  servo_der_rod.write(120);
  servo_izq_pie.write(70);
  servo_der_pie.write(115);
  delay(115);
  servo_izq_rod.write(80);
  servo_der_rod.write(115);
  servo_izq_pie.write(80);
  servo_der_pie.write(110);
  delay(115);
  servo_izq_rod.write(70);
  servo_der_rod.write(110);
  servo_izq_pie.write(90);
  servo_der_pie.write(90);
  delay(115);
  servo_izq_rod.write(80);
  servo_der_rod.write(100);
  servo_izq_pie.write(80);
  servo_der_pie.write(100);
  delay(115);
  servo_izq_rod.write(90);
  servo_der_rod.write(110);
  servo_izq_pie.write(70);
  servo_der_pie.write(110);
  delay(115);
  servo_izq_rod.write(80);
  servo_der_rod.write(115);
  servo_izq_pie.write(80);
  servo_der_pie.write(115);
  delay(115);
  servo_izq_rod.write(70);
  servo_der_rod.write(120);
  servo_izq_pie.write(90);
  servo_der_pie.write(120);
  delay(115);
  servo_izq_rod.write(80);
  servo_der_rod.write(115);
  servo_izq_pie.write(80);
  servo_der_pie.write(115);
  delay(115);
  servo_izq_rod.write(90);
  servo_der_rod.write(100);
  servo_izq_pie.write(70);
  servo_der_pie.write(110);
  delay(115);
  servo_izq_rod.write(80);
  servo_izq_pie.write(80);
  servo_der_pie.write(100);
  delay(115);
  servo_izq_rod.write(70);
  servo_izq_pie.write(90);
  servo_der_pie.write(90);  
}



void confused(){
  
	unsigned int i;

	for(i=1 ; i<6 ; i++){
		servo_izq_rod.write(90+i*5);
		servo_der_rod.write(90-i*5);
		delay(150);
	}
	delay(650);
	/*
	servo_izq_rod.write(95);
	servo_der_rod.write(85);
	delay(150);
	servo_izq_rod.write(100);
	servo_der_rod.write(80);
	delay(150);
	servo_izq_rod.write(105);
	servo_der_rod.write(75);
	delay(150);
	servo_izq_rod.write(110);
	servo_der_rod.write(70);
	delay(150);
	servo_izq_rod.write(115);
	servo_der_rod.write(65);
	delay(150);
	servo_izq_rod.write(120);
	servo_der_rod.write(60);
	delay(800);
	*/
	for(i=1 ; i<6 ; i++){
		servo_izq_rod.write(120-i*5);
		servo_der_rod.write(60+i*5);
		delay(150);
	}
	delay(650);
	/*
	servo_izq_rod.write(115);
	servo_der_rod.write(65);
	delay(150);
	servo_izq_rod.write(110);
	servo_der_rod.write(70);
	delay(150);
	servo_izq_rod.write(105);
	servo_der_rod.write(75);
	delay(150);
	servo_izq_rod.write(100);
	servo_der_rod.write(80);
	delay(150);
	servo_izq_rod.write(95);
	servo_der_rod.write(85);
	delay(150);
	servo_izq_rod.write(90);
	servo_der_rod.write(90);
	*/
}



void fart(){
  
  servo_izq_pie.write(80);
  servo_der_pie.write(100);
  delay(150);
  servo_der_pie.write(140);
  delay(2000);
  servo_der_pie.write(100);
  delay(150);
  servo_izq_pie.write(90);
  servo_der_pie.write(90);
  
}



void fail(){

  servo_der_pie.write(130);
  delay(200);
  servo_der_pie.write(170);
  delay(400);
  servo_izq_pie.write(100);
  delay(100);
  servo_izq_pie.write(110);
  delay(100);
  servo_izq_pie.write(120);
  delay(100);
  servo_izq_pie.write(130);
  delay(100);
  servo_izq_pie.write(140);
  delay(5000);
  servo_izq_pie.write(90);
  servo_der_pie.write(90);
  
}



void ultrasonido_on(){
  ultrasonido_state = true;
}



void ultrasonido_off(){
  ultrasonido_state = false;
}





//ultrasonido
bool ultrasonido(){

  long t; //timepo que demora en llegar el eco
  long d; //distancia en centimetros

  digitalWrite(GPIO_TRIGGER, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(GPIO_TRIGGER, LOW);

  t = pulseIn(GPIO_ECHO, HIGH); //obtenemos el ancho del pulso
  d = t/59;//cm

  if(d < 5){
    return TRUE;
  }else{
  	return FALSE;
  }

}





//programa principal

void setup() {

  WiFi.softAP("OTTO", "12345678");
  delay(500);
  server.on("/walk_forward", walk_forward);
  server.on("/walk_backward", walk_backward);
  server.on("/turn_left", turn_left);
  server.on("/turn_right", turn_right);
  server.on("/moonwalk", moonwalk);
  server.on("/bend", bend);
  server.on("/shake_leg", shake_leg);
  server.on("/crusaito", crusaito);
  server.on("/flapping", flapping);
  server.on("/swing", swing);
  server.on("/tiptoe_swing", tiptoe_swing);
  server.on("/jitter", jitter);
  server.on("/up_down", up_down);
  server.on("/happy", happy);
  server.on("/super_happy", super_happy);
  server.on("/sad", sad);
  server.on("/victory", victory);
  server.on("/angry", angry);
  server.on("/sleeping", sleeping);
  server.on("/fretful", fretful);
  server.on("/love", love);
  server.on("/confused", confused);
  server.on("/fart", fart);
  server.on("/fail", fail);

  server.on("/ultrasonido_on", ultrasonido_on);
  server.on("/ultrasonido_off", ultrasonido_off);

  server.begin();

  //config servos
  servo_der_pie.attach(GPIO_SERVO1);
  servo_der_rod.attach(GPIO_SERVO2);
  servo_izq_pie.attach(GPIO_SERVO3);
  servo_izq_rod.attach(GPIO_SERVO4);

  //set pos inicial
  servo_izq_rod.write(90);
  servo_der_pie.write(90);
  servo_der_rod.write(90);
  servo_izq_pie.write(90);

}

void loop() {

  server.handleClient();
  delay(100);
  if(ultrasonido_state){
    //
  }

}
