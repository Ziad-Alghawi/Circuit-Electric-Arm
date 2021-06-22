#include <Servo.h>

Servo ser1,ser2,ser3,ser4,ser5; // create servo objects



int potpin1 = A0; // analog pin used to connect the potentiometer

int potpin2 = A1; // analog pin used to connect the potentiometer

int potpin3 = A2; // analog pin used to connect the potentiometer

int potpin4 = A3; // analog pin used to connect the potentiometer

int potpin5 = A4; // analog pin used to connect the potentiometer

/*****************************************/

int val, va2, va3, va4, va5 ;

/******************************************/

void setup() {

ser1.attach(8); // attaches the servo on pin 8 to the servo object

ser2.attach(9); // attaches the servo on pin 9 to the servo object

ser3.attach(10); // attaches the servo on pin 10 to the servo object

ser4.attach(11); // attaches the servo on pin 11 to the servo object

ser5.attach(12); // attaches the servo on pin 12 to the servo object

}

void loop() {

val = analogRead(potpin1); // reads the value of the potentiometer (value between 0 and 1023)

val = map(val, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)

ser1.write(val);

delay(15); 



va2 = analogRead(potpin2); // reads the value of the potentiometer (value between 0 and 1023)

va2 = map(va2, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)

ser2.write(va2); 

delay(15);


va3 = analogRead(potpin3); // reads the value of the potentiometer (value between 0 and 1023)

va3 = map(va3, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)

ser3.write(va3); 

delay(15);



va4 = analogRead(potpin4); // reads the value of the potentiometer (value between 0 and 1023)

va4 = map(va4, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)

ser4.write(va4);

delay(15);


va5 = analogRead(potpin5); // reads the value of the potentiometer (value between 0 and 1023)

va5 = map(va5, 0, 1023, 0, 180); // scale it to use it with the servo (value between 0 and 180)

ser5.write(va5); // sets the servo position according to the scaled value

delay(15); 

}