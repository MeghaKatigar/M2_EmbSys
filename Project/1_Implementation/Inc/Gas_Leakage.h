#include <Servo.h>
Servo myservo;
int pos = 0;
int val;
int motor = 8;
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#include <TinyGPS.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);
byte tx = 1;
TinyGPS gps; //Creates a new instance of the TinyGPS objectconst
int SPEAKER = 6;
const int LED_RED = 7;
const int LED_YELLOW = 10;
int Relay = 7;
int tempC_1 = 0;     //settig initial tempC 0° for all LM35
int smkC_1 = 0;      //setting initial tempC 0º for all MQ 2const
int SensorPin1 = A0; //input sensor pinconst
int SensorPin2 = A1;
String textForSMS;