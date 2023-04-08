#include <TaskManagerIO.h>

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

void change(int ledState, int State){
  State = !State;
  digitalWrite(ledState, State);
}

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);

  taskManager.scheduleFixedRate(50, [] {
    change(ledState1, ledPin1);
  }, TIME_MICROS);

  taskManager.scheduleFixedRate(500, [] {
    change(ledState2, ledPin2);
  }, TIME_MICROS);

  taskManager.scheduleFixedRate(1000, [] {
    change(ledState3, ledPin3);
  }, TIME_MICROS);

  taskManager.scheduleFixedRate(15000, [] {
    change(ledState4, ledPin4);
  }, TIME_MICROS);

  taskManager.scheduleFixedRate(50000, [] {
    change(ledState5, ledPin5);
  }, TIME_MICROS);

  taskManager.scheduleFixedRate(200000, [] {
    change(ledState6, ledPin6);
  }, TIME_MICROS);
}

void loop() {
  taskManager.runLoop();
}
