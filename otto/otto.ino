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





//ROUTINES - https://www.youtube.com/watch?v=VD6sgTo6NOY

void walk_forward(){}

void walk_backward(){}

void turn_left(){}

void turn_right(){}

void moonwalk(){

  server.send(200, "text/plain", "recibido");

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

  server.send(200, "text/plain", "recibido");
  
	servo_der_pie.write(135);
	delay(250);
	servo_der_pie.write(90);
	delay(1000);
	servo_izq_pie.write(45);
  	delay(250);
	servo_izq_pie.write(90);

}

void shake_leg(){}

void crusaito(){}

void flapping(){

  server.send(200, "text/plain", "recibido");

  //hacia un lado
  //subir
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
  //bajar
  servo_der_pie.write(130);
  servo_izq_pie.write(50);
  servo_der_rod.write(95);
  servo_izq_rod.write(85);
  delay(200);
  servo_der_pie.write(125);
  servo_izq_pie.write(55);
  servo_der_rod.write(100);
  servo_izq_rod.write(80);
  delay(200);
  servo_der_pie.write(120);
  servo_izq_pie.write(60);
  servo_der_rod.write(105);
  servo_izq_rod.write(75);
  delay(200);
  servo_der_pie.write(110);
  servo_izq_pie.write(70);
  servo_der_rod.write(100);
  servo_izq_rod.write(80);
  delay(200);
  servo_der_pie.write(100);
  servo_izq_pie.write(80);
  servo_der_rod.write(95);
  servo_izq_rod.write(85);
  delay(200);
  servo_der_pie.write(90);
  servo_izq_pie.write(90);
  servo_der_rod.write(90);
  servo_izq_rod.write(90);
  delay(200);

  //hacia el otro
  //subir
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
  //bajar
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
  
}

void swing(){}

void tiptoe_swing(){}

void jitter(){

  server.send(200, "text/plain", "recibido");

	//1
  servo_der_pie.write(105);
  servo_izq_pie.write(75);
  delay(200);
  servo_der_pie.write(120);
  servo_izq_pie.write(60);
  delay(200);
  servo_der_pie.write(120);
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
  servo_der_pie.write(120);
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
  server.on("/moonwalk", moonwalk);
  server.on("/bend", bend);
  server.on("/flapping", flapping);
  server.on("/jitter", jitter);
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
  delay(1000);

}
