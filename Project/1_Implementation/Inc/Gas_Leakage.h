#include <Servo.h> // This library allows an Arduino board to control RC (hobby) servo motors
Servo myservo; 
int pos = 0;
int val;
int motor = 8;
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
// LCD RS pin to digital pin 12
// LCD Enable pin to digital pin 11
// LCD D4 pin to digital pin 5
// LCD D5 pin to digital pin 4
// LCD D6 pin to digital pin 3
// LCD D7 pin to digital pin 2
// LCD R/W pin to ground
#include <TinyGPS.h> //TinyGPS is a new Arduino library for parsing NMEA data streams provided by GPS modules
#include <SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);
byte tx = 1;
TinyGPS gps; //to Create a new instance of the TinyGPS objectconst
int SPEAKER = 6;
const int LED_RED = 7;
const int LED_YELLOW = 10;
int Relay = 7;
int tempC_1 = 0;     //settig initial value of Temperature Sensor to 0
int smkC_1 = 0;      //setting initial Value of Smoke Sensor to 0
int SensorPin1 = A0; //input sensor pinconst
int SensorPin2 = A1;
String textForSMS;
