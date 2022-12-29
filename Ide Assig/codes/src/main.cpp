#include <Arduino.h>
int F,X,Y,Z;
void setup()
{
	pinMode(13, OUTPUT);
	pinMode(2, INPUT);
	pinMode(3, INPUT);
	pinMode(4, INPUT);
	pinMode(5, INPUT);
}
void loop(){
 	X = digitalRead(2);
	Y = digitalRead(3);
	Z = digitalRead(4);
	F= ((!X&&!Y)||(Y&&Z));
	digitalWrite(13, F);	
}
