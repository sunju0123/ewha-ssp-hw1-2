// Do not remove the include below
#include "lab2.h"

#define FRONT_LED_PIN 10
#define REAR_LED_PIN 9
int ledbright=100;
//The setup function is called once at startup of the sketch
void myAnalogWrite(int pin,	int percent,	int time)	{
//int pin:	pin	number
//int percent:	brightness	 0%	~	100%
//int time:	brightness	 remains	the	same	during	 this	time	in	ms
	for(int i=0;i<time/20;i++)
	  {
	  digitalWrite(pin,HIGH);
	  delay(percent/5);
	  digitalWrite(pin,LOW);
	  delay(20-percent/5);
	  }
}
void setup() {
  // put your setup code here, to run once:

  pinMode(FRONT_LED_PIN,OUTPUT);
  pinMode(REAR_LED_PIN,OUTPUT);

}

void loop() {
	myAnalogWrite(REAR_LED_PIN,ledbright,100);
	if(ledbright!=0) ledbright-=1;
}
