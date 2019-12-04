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
bool ultrasonido_state = false;
unsigned char velocidad = 1;





//ROUTINES - https://www.youtube.com/watch?v=VD6sgTo6NOY



void walk_forward(){

	unsigned int i;

	Serial.println("Ejecutando walk forward.");

	for(i=0 ; i<2 ; i++){
		servo_der_pie.write(120);
		delay(velocidad*100);
		servo_der_rod.write(70);
		servo_izq_rod.write(70);
		delay(velocidad*100);
		servo_der_pie.write(90);
		delay(velocidad*100);
		servo_izq_pie.write(120);
		delay(velocidad*100);
		servo_der_rod.write(110);
		servo_izq_rod.write(110);
		delay(velocidad*100);
		servo_izq_pie.write(90);
		delay(velocidad*100);
	}
	servo_der_rod.write(90);
	servo_izq_rod.write(90);

}



void walk_backward(){

	unsigned int i;

	Serial.println("Ejecutando walk backward.");

	for(i=0 ; i<2 ; i++){
		servo_der_pie.write(120);
		delay(velocidad*100);
		servo_der_rod.write(110);
		servo_izq_rod.write(110);
		delay(velocidad*100);
		servo_der_pie.write(90);
		delay(velocidad*100);
		servo_izq_pie.write(120);
		delay(velocidad*100);
		servo_der_rod.write(70);
		servo_izq_rod.write(70);
		delay(velocidad*100);
		servo_izq_pie.write(90);
		delay(velocidad*100);
	}
	servo_der_rod.write(90);
	servo_izq_rod.write(90);

}



void turn_left(){

	unsigned int i;

	Serial.println("Ejecutando turn left.");

	for(i=0 ; i<2 ; i++){
		servo_der_pie.write(120);
		delay(velocidad*100);
		servo_der_rod.write(70);
		servo_izq_rod.write(90);
		delay(velocidad*100);
		servo_der_pie.write(90);
		delay(velocidad*100);
		servo_izq_pie.write(60);
		delay(velocidad*100);
		servo_der_rod.write(110);
		servo_izq_rod.write(90);
		delay(velocidad*100);
		servo_izq_pie.write(90);
		delay(velocidad*100);
	}
	servo_der_rod.write(90);
	servo_izq_rod.write(90);

}



void turn_right(){

	unsigned int i;

	Serial.println("Ejecutando turn right.");

	for(i=0; i<2; i++){
		servo_der_pie.write(120);
		delay(velocidad*100);
		servo_izq_rod.write(70);
		delay(velocidad*100);
		servo_der_pie.write(90);
		delay(velocidad*100);
		servo_izq_pie.write(120);
		delay(velocidad*100);
		servo_izq_rod.write(110);
		delay(velocidad*100);
		servo_izq_pie.write(90);
		delay(velocidad*100);
	}
	servo_der_rod.write(90);
	servo_izq_rod.write(90);

}



void moonwalk(){

	unsigned int i;

	Serial.println("Ejecutando moonwalk.");

	//hacia un lado
	for(i=0 ; i<2 ; i++){
		servo_der_pie.write(135);
		delay(velocidad*250);
		servo_izq_pie.write(45);
		delay(velocidad*250);
		servo_der_pie.write(90);
		delay(velocidad*250);
		servo_izq_pie.write(90);
		delay(velocidad*250);
	}
	delay(velocidad*750);
	//hacia el otro
	for(i=0 ; i<2 ; i++){
		servo_izq_pie.write(45);
		delay(velocidad*250);
		servo_der_pie.write(135);
		delay(velocidad*250);
		servo_izq_pie.write(90);
		delay(velocidad*250);
		servo_der_pie.write(90);
		delay(velocidad*250);
	}

}



void bend(){

	Serial.println("Ejecutando bend.");

	servo_der_pie.write(135);
	delay(velocidad*250);
	servo_der_pie.write(90);
	delay(velocidad*1000);
	servo_izq_pie.write(45);
	delay(velocidad*250);
	servo_izq_pie.write(90);

}



void shake_leg(){

	Serial.println("Ejecutando shake leg.");

	servo_der_pie.write(115);
	delay(velocidad*70);
	servo_der_pie.write(140);
	delay(velocidad*200);
	servo_izq_pie.write(110);
	servo_der_pie.write(120);
	delay(velocidad*200);
	servo_der_pie.write(70);
	delay(velocidad*70);
	servo_der_pie.write(110);
	delay(velocidad*70);
	servo_der_pie.write(70);
	delay(velocidad*70);
	servo_der_pie.write(130);
	delay(velocidad*70);
	servo_der_pie.write(90);
	servo_izq_pie.write(90);

}



void crusaito(){

	unsigned int i;

	Serial.println("Ejecutando crusaito.");

	servo_der_rod.write(70);
	delay(velocidad*200);
	for(i=0 ; i<2 ; i++){
		servo_der_pie.write(115);
		servo_izq_pie.write(90);
		delay(velocidad*200);
		servo_der_rod.write(90);
		servo_izq_rod.write(90);
		delay(velocidad*200);
		servo_der_rod.write(110);
		servo_izq_rod.write(110);
		delay(velocidad*200);
		servo_der_pie.write(90);
		servo_izq_pie.write(65);
		delay(velocidad*200);
		servo_der_rod.write(90);
		servo_izq_rod.write(90);
		delay(velocidad*200);
		servo_der_rod.write(70);
		servo_izq_rod.write(70);
		delay(velocidad*200);
	}
	servo_izq_pie.write(90);
	delay(velocidad*200);
	servo_der_rod.write(90);
	servo_izq_rod.write(90);

}



void flapping(){

	unsigned int i;

	Serial.println("Ejecutando flapping.");

	//hacia un lado
	//subir

	for(i=1 ; i<=15 ; i++){
		servo_der_pie.write(90+(i*2));
		servo_izq_pie.write(90-(i*2));
		servo_der_rod.write(90+i);
		servo_izq_rod.write(90-i);
		delay(velocidad*40);
	}

	for(i=1 ; i<=15 ; i++){
		servo_der_pie.write(120+i);
		servo_izq_pie.write(60-i);
		servo_der_rod.write(105-i);
		servo_izq_rod.write(75+i);
		delay(velocidad*40);
	}

	//bajar

	for(i=1; i<=15; i++){
		servo_der_pie.write(135-i);
		servo_izq_pie.write(45+i);
		servo_der_rod.write(90+i);
		servo_izq_rod.write(90-i);
		delay(velocidad*40);
	}

	for(i=1; i<=15; i++){
		servo_der_pie.write(120-i*2);
		servo_izq_pie.write(60+i*2);
		servo_der_rod.write(105-i);
		servo_izq_rod.write(75+i);
		delay(velocidad*40);
	}

	//hacia el otro
	//subir

	for (i = 1; i<=15; i++){
		servo_der_pie.write(90+i*2);
		servo_izq_pie.write(90-i*2);
		servo_der_rod.write(90+i);
		servo_izq_rod.write(90-i);
		delay(velocidad*40);
	}

	for (i = 1; i<=15; i++){
		servo_der_pie.write(120+i);
		servo_izq_pie.write(60-i);
		servo_der_rod.write(105-i);
		servo_izq_rod.write(75+i);
		delay(velocidad*40);
	}

	//bajar

	for (i = 1; i<=15; i++){
		servo_der_pie.write(135-i);
		servo_izq_pie.write(45+i);
		servo_der_rod.write(90+i);
		servo_izq_rod.write(90-i);
		delay(velocidad*40);
	}

	for (i = 1; i<=15; i++){
		servo_der_pie.write(120-i*2);
		servo_izq_pie.write(60+i*2);
		servo_der_rod.write(105-i);
		servo_izq_rod.write(75+i);
		delay(velocidad*40);
	}

}



void swing(){

	unsigned int j;

	Serial.println("Ejecutando swing.");

	servo_izq_pie.write(70);
	delay(velocidad*100);
	servo_izq_pie.write(50);
	delay(velocidad*200);

	for(j=1; j<=2; j++){
		servo_der_pie.write(110);
		servo_izq_pie.write(70);
		delay(velocidad*200);
		servo_der_pie.write(130);
		servo_izq_pie.write(90);
		delay(velocidad*200);
		servo_der_pie.write(110);
		servo_izq_pie.write(70);
		delay(velocidad*200);
		servo_der_pie.write(90);
		servo_izq_pie.write(50);
		delay(velocidad*200);
	}

	servo_der_pie.write(130);
	servo_izq_pie.write(50);
	delay(velocidad*200);
	servo_der_pie.write(160);
	servo_izq_pie.write(70);
	delay(velocidad*200);
	servo_der_pie.write(130);
	servo_izq_pie.write(50);
	delay(velocidad*200);
	servo_der_pie.write(90);
	servo_izq_pie.write(30);
	delay(velocidad*200);
	servo_der_pie.write(90);
	servo_izq_pie.write(90);
	delay(velocidad*200);

}



void tiptoe_swing(){

	unsigned int i;

	Serial.println("Ejecutando tiptoe swing.");

	//mover rodillas 2 veces
	for(i=1; i<=2; i++){
		servo_izq_rod.write(70);
		servo_der_rod.write(110);
		delay(velocidad*150);
		servo_izq_rod.write(90);
		servo_der_rod.write(90);
		delay(velocidad*100);
		servo_izq_rod.write(110);
		servo_der_rod.write(70);
		delay(velocidad*150);
		servo_izq_rod.write(90);
		servo_der_rod.write(90);
		delay(velocidad*100);
	}

  //mover pies
	for(i=1 ; i<=40 ; i++){
		servo_izq_pie.write(90-i);
		servo_der_pie.write(90+i);
		delay(velocidad*10);
	}
	for(i=1; i<=40; i++){
		servo_izq_pie.write(50+i);
		servo_der_pie.write(130-i);
		delay(velocidad*10);
	}

}



void jitter(){

	Serial.println("Ejecutando jitter.");

	//1
	servo_der_pie.write(105);
	servo_izq_pie.write(75);
	delay(velocidad*200);
	servo_der_pie.write(120);
	servo_izq_pie.write(60);
	delay(velocidad*200);
	servo_izq_pie.write(75);
	delay(velocidad*200);
	servo_der_pie.write(90);
	servo_izq_pie.write(90);
	delay(velocidad*200);
	//2
	servo_der_pie.write(105);
	servo_izq_pie.write(75);
	servo_izq_rod.write(95);
	servo_der_rod.write(85);
	delay(velocidad*200);
	servo_der_pie.write(120);
	servo_izq_pie.write(60);
	servo_izq_rod.write(100);
	servo_der_rod.write(80);
	delay(velocidad*200);
	servo_izq_pie.write(75);
	servo_izq_rod.write(95);
	servo_der_rod.write(85);
	delay(velocidad*200);
	servo_der_pie.write(90);
	servo_izq_pie.write(90);
	servo_izq_rod.write(90);
	servo_der_rod.write(90);
	delay(velocidad*200);
	//3
	servo_der_pie.write(105);
	servo_izq_pie.write(75);
	servo_izq_rod.write(97);
	servo_der_rod.write(83);
	delay(velocidad*200);
	servo_der_pie.write(120);
	servo_izq_pie.write(60);
	servo_izq_rod.write(105);
	servo_der_rod.write(75);
	delay(velocidad*200);
	servo_der_pie.write(120);
	servo_izq_pie.write(75);
	servo_izq_rod.write(97);
	servo_der_rod.write(83);
	delay(velocidad*200);
	servo_der_pie.write(90);
	servo_izq_pie.write(90);
	servo_izq_rod.write(90);
	servo_der_rod.write(90);
	delay(velocidad*200);

}



void up_down(){

	unsigned int i;

	Serial.println("Ejecutando up down.");

	for(i=1 ; i<=30 ; i++){
		servo_der_pie.write(90+i);
		servo_izq_pie.write(90-i);
		delay((20+i)*velocidad);
	}

	for(i=1 ; i<=3 ; i++){
		servo_der_rod.write(90+i*2);
		servo_izq_rod.write(90-i*2);
		servo_der_pie.write(125+i*5);
		servo_izq_pie.write(45-i*5);
		delay((55+i*5)*velocidad);
	}

	delay(30*velocidad);

	for(i=1 ; i<=2 ; i++){
		servo_der_rod.write(96-i*2);
		servo_izq_rod.write(84+i*2);
		servo_der_pie.write(140-i*5);
		servo_izq_pie.write(30+i*5);
		delay((70-i*5)*velocidad);
	}

	for(i=0 ; i<35 ; i++){
		servo_der_pie.write(125-i);
		servo_izq_pie.write(45+i);
		delay((55-i)*velocidad);
	}

	servo_der_rod.write(90);
	servo_izq_rod.write(90);
	servo_der_pie.write(90);
	servo_izq_pie.write(90);

}



void happy(){

	unsigned int i;

	Serial.println("Ejecutando happy.");

	for(i=1 ; i<=20 ; i++){
		servo_der_pie.write(90-i);
		servo_izq_pie.write(90-i*2);
		delay(18*velocidad);
	}

	for(i=1 ; i<=60 ; i++){
		servo_der_pie.write(70+i);
		servo_izq_pie.write(50+i);
		delay(6*velocidad);
	}

	for(i=1 ; i<=6 ; i++){
		servo_der_pie.write(122-i*2);
		servo_izq_pie.write(110-i*5);
		delay(35*velocidad);
	}

	servo_der_pie.write(90);
	servo_izq_pie.write(90);

}



void super_happy(){

	Serial.println("Ejecutando super happy.");

	servo_der_pie.write(120);
	servo_izq_pie.write(75);
	delay(250*velocidad);
	servo_der_pie.write(105);
	servo_izq_pie.write(60);
	delay(100*velocidad);
	servo_der_pie.write(120);
	servo_izq_pie.write(75);
	delay(100*velocidad);
	servo_der_pie.write(105);
	servo_izq_pie.write(60);
	delay(250*velocidad);
	servo_der_pie.write(120);
	servo_izq_pie.write(75);
	delay(100*velocidad);
	servo_der_pie.write(105);
	servo_izq_pie.write(60);
	delay(100*velocidad);
	servo_der_pie.write(120);
	servo_izq_pie.write(75);
	delay(250*velocidad);
	servo_der_pie.write(90);
	servo_izq_pie.write(90);

}



void sad(){

	unsigned int i;

	Serial.println("Ejecutando sad.");

	for(i=1 ; i<=5 ; i++){
		servo_der_rod.write(90-i*2);
		servo_izq_rod.write(90+i*4);
		servo_der_pie.write(90-i*9);
		servo_izq_pie.write(90+i*12);
		delay(55*velocidad);
	}
	delay(4000);
	for(i=1 ; i<=5 ; i++){
		servo_der_rod.write(80+i*2);
		servo_izq_rod.write(110-i*4);
		servo_der_pie.write(45+i*9);
		servo_izq_pie.write(150-i*12);
		delay(55*velocidad);
	}

}



void victory(){

	unsigned int i;

	Serial.println("Ejecutando victory.");

	for(i=1; i<=30;i++){
		servo_der_pie.write(90+i);
		servo_izq_pie.write(90-i);
		delay((25+i)*velocidad);
	}

 	for(i=1; i<3; i++){
		servo_der_rod.write(90+i*2);
		servo_izq_rod.write(90-i*2);
		servo_der_pie.write(125+i*5);
		servo_izq_pie.write(45-i*5);
		delay(60*velocidad);
 	}

	delay(100*velocidad);

	for (i = 1; i <= 2; i++){
		servo_der_rod.write(96-i*2);
		servo_izq_rod.write(84+i*2);
		servo_der_pie.write(140-i*5);
		servo_izq_pie.write(30+i*5);
		delay((70-i*5)*velocidad);
	}

	for(i=1; i<8; i++){
		servo_der_pie.write(130-i*5);
		servo_izq_pie.write(40+i*5);
		delay((60-i*4)*velocidad);
	}

	delay(velocidad*100);
	servo_izq_pie.write(70);
	delay(velocidad*100);
	servo_izq_pie.write(50);
	delay(velocidad*100);

	for(i=1; i<=2; i++){
		servo_der_pie.write(110);
		servo_izq_pie.write(70);
		delay(velocidad*100);
		servo_der_pie.write(130);
		servo_izq_pie.write(90);
		delay(velocidad*100);
		servo_der_pie.write(110);
		servo_izq_pie.write(70);
		delay(velocidad*100);
		servo_der_pie.write(90);
		servo_izq_pie.write(50);
		delay(velocidad*100);
	}

	servo_izq_pie.write(90);

}



void angry(){

	unsigned int i, j;

	Serial.println("Ejecutando angry.");

	for(i=0 ; i<2 ; i++){
		for(j=1; j<=2 ; j++){
			servo_izq_rod.write(90-j);
			servo_der_rod.write(90-j);
			delay(velocidad*10);
		}
		delay(velocidad*200);
		for(j=1; j<=40 ; j++){
			servo_izq_rod.write(70+j);
			servo_der_rod.write(70+j);
			delay(velocidad*10);
		}
		delay(velocidad*200);
		for(j=1 ; j<=20 ; j++){
			servo_izq_rod.write(110-j);
			servo_der_rod.write(110-j);
			delay(velocidad*10);
		}
	}
	delay(velocidad*300);
	servo_izq_pie.write(70);
	servo_der_pie.write(110);
	delay(velocidad*400);
	servo_izq_pie.write(90);
	servo_der_pie.write(90);

}



void sleeping(){

	Serial.println("Ejecutando sleeping.");

	servo_der_pie.write(75);
	servo_izq_pie.write(105);
	delay(velocidad*500);
	servo_izq_pie.write(115);
	delay(velocidad*3000);
	servo_der_pie.write(90);
	servo_izq_pie.write(90);

}



void fretful(){

	Serial.println("Ejecutando fretful.");

	servo_der_pie.write(105);
	delay(100*velocidad);
	servo_der_pie.write(90);
	delay(900*velocidad);
	servo_der_pie.write(110);
	delay(100*velocidad);
	servo_der_pie.write(90);
	delay(800*velocidad);
	servo_der_pie.write(100);
	delay(100*velocidad);
	servo_der_pie.write(90);
	delay(9000*velocidad);
	servo_der_pie.write(110);
	delay(100*velocidad);
	servo_der_pie.write(90);

}



void love(){

	unsigned int i, j;

	Serial.println("Ejecutando love.");

	for(i=1 ; i<30 ; i++){

		servo_der_rod.write(90+i);
		servo_der_pie.write(90+i);
		delay(10*velocidad);

	}

	for(j=0 ; j<2 ; j++){

		for(i=1 ; i<=30 ; i++){

			servo_der_rod.write(120-i);
			servo_der_pie.write(120-i);
			servo_izq_rod.write(90-i);
			servo_izq_pie.write(90-i);
			delay(10*velocidad);

		}

		for(i=1 ; i<=30 ; i++){

			servo_der_rod.write(90+i);
			servo_der_pie.write(90+i);
			servo_izq_rod.write(60+i);
			servo_izq_pie.write(60+i);
			delay(10*velocidad);

		}

	}

	for(i=1 ; i<30 ; i++){

		servo_der_rod.write(120-i);
		servo_der_pie.write(120-i);
		delay(10*velocidad);

	}

}



void confused(){

	unsigned int i;

	Serial.println("Ejecutando confused.");

	for(i=1 ; i<30 ; i++){
		servo_izq_rod.write(90+i);
		servo_der_rod.write(90-i);
		delay(30*velocidad);
	}
	delay(650*velocidad);

	for(i=1 ; i<30 ; i++){
		servo_izq_rod.write(120-i);
		servo_der_rod.write(60+i);
		delay(30*velocidad);
	}
	delay(650*velocidad);

}



void fart(){

	Serial.println("Ejecutando fart.");

  servo_izq_pie.write(80);
  servo_der_pie.write(100);
  delay(150*velocidad);
  servo_der_pie.write(140);
  delay(2000*velocidad);
  servo_der_pie.write(100);
  delay(150*velocidad);
  servo_izq_pie.write(90);
  servo_der_pie.write(90);

}



void fail(){

	Serial.println("Ejecutando fail.");
  servo_der_pie.write(130);
  delay(200*velocidad);
  servo_der_pie.write(170);
  delay(400*velocidad);
  servo_izq_pie.write(100);
  delay(100*velocidad);
  servo_izq_pie.write(110);
  delay(100*velocidad);
  servo_izq_pie.write(120);
  delay(100*velocidad);
  servo_izq_pie.write(130);
  delay(100*velocidad);
  servo_izq_pie.write(140);
  delay(5000*velocidad);
  servo_izq_pie.write(90);
  servo_der_pie.write(90);

}



void todas(){

	walk_forward();
	walk_backward();
	turn_left();
	turn_right();
	moonwalk();
	bend();
	shake_leg();
	crusaito();
	flapping();
	swing();
	tiptoe_swing();
	jitter();
	up_down();
	happy();
	super_happy();
	sad();
	victory();
	angry();
	sleeping();
	fretful();
	love();
	confused();
	fart();
	fail();

}

void velocidad_rapida(){
  velocidad = 1;
}

void velocidad_lenta(){
  velocidad = 2;
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
  double d; //distancia en centimetros

  digitalWrite(GPIO_TRIGGER, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(GPIO_TRIGGER, LOW);

  t = pulseIn(GPIO_ECHO, HIGH); //obtenemos el ancho del pulso
  //Serial.print("T:");
  //Serial.println(t);
  d = t*0.017;//cm
  //Serial.print("D:");
  //Serial.println(d);
  if(d < 5.0){
    return true;
  }else{
  	return false;
  }

}





//programa principal

void setup() {

	//serial para debug
	Serial.begin(9600);

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

	server.on("/todas", todas);
	server.on("/velocidad_lenta", velocidad_lenta);
	server.on("/velocidad_rapida", velocidad_rapida);

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

	//iniciar sensor ultrasonido
	pinMode(GPIO_TRIGGER, OUTPUT); // Sets the trigPin as an Output
	pinMode(GPIO_ECHO, INPUT); // Sets the echoPin as an Input
	digitalWrite(GPIO_TRIGGER, LOW);

}

void loop() {

	server.handleClient();
	delay(100);
	if(ultrasonido_state){
		if(ultrasonido()){
			walk_backward();
		}
	}

}
