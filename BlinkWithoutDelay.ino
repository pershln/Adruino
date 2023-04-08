const int ledPin1 = 11;
const int ledPin2 = 10;
const int ledPin3 = 9;
const int ledPin4 = 6;
const int ledPin5 = 5;
const int ledPin6 = 3;

int ledState1 = LOW;
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;
int ledState6 = LOW;

unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;
unsigned long previousMillis4 = 0;
unsigned long previousMillis5 = 0;
unsigned long previousMillis6 = 0;

const long interval1 = 50;
const long interval2 = 500;
const long interval3 = 1000;
const long interval4 = 15000;
const long interval5 = 50000;
const long interval6 = 200000;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

void loop() {
  unsigned long currentMillis = micros();

  if (currentMillis - previousMillis1 >= interval1) {
    previousMillis1 = currentMillis;
    ledState1 = !ledState1;
    digitalWrite(ledPin1, ledState1);
  }

  if (currentMillis - previousMillis2 >= interval2) {
    previousMillis2 = currentMillis;
    ledState2 = !ledState2;
    digitalWrite(ledPin2, ledState2);
  }

  if (currentMillis - previousMillis3 >= interval3) {
    previousMillis3 = currentMillis;
    ledState3 = !ledState3;
    digitalWrite(ledPin3, ledState3);
  }

  if (currentMillis - previousMillis4 >= interval) {
    previousMillis4 = currentMillis;
    ledState4 = !ledState4;
    digitalWrite(ledPin4, ledState4);
  }

  if (currentMillis - previousMillis5 >= interval) {
    previousMillis5 = currentMillis;
    ledState5 = !ledState5;
    digitalWrite(ledPin5, ledState5);
  }

  if (currentMillis - previousMillis6 >= interval) {
    previousMillis6 = currentMillis;
    ledState6 = !ledState6;
    digitalWrite(ledPin6, ledState6);
  }
}
