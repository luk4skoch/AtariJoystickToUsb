#include <Joystick.h>

const int buttonPin0 = 2;
const int buttonPin1 = 3;
const int buttonPin2 = 4;
const int buttonPin3 = 5;
const int buttonPin4 = 6;
const int buttonPin5 = 7;
const int buttonPin6 = 8;
const int buttonPin7 = 9;

const int button0 = 10; //start
const int button1 = 9; //select
const int button2 = 1; //a
const int button3 = 2; //b
const int button4 = 13;//up
const int button5 = 16;//right
const int button6 = 14;//down
const int button7 = 15;//left

int buttonState0 = 0;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int buttonState7 = 0;

void setup() {
  pinMode(buttonPin0, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
  pinMode(buttonPin7, INPUT);
  Joystick.begin();
}

void loop() {
  
  buttonState0 = digitalRead(buttonPin0);
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  buttonState6 = digitalRead(buttonPin6);
  buttonState7 = digitalRead(buttonPin7);

  // button press on
  if (buttonState0 == HIGH) {
    Joystick.button(button0, true);
  }
  if (buttonState1 == HIGH) {
    Joystick.button(button1, true);
  }
  if (buttonState2 == HIGH) {
    Joystick.button(button2, true);
  }  
  if (buttonState3 == HIGH) {
    Joystick.button(button3, true);
  }  
  if (buttonState4 == HIGH) {
    Joystick.button(button4, true);
  }  
  if (buttonState5 == HIGH) {
    Joystick.button(button5, true);
  }  
  if (buttonState6 == HIGH) {
    Joystick.button(button6, true);
  }  
  if (buttonState7 == HIGH) {
    Joystick.button(button7, true);
  }

  // button press off
  if (buttonState0 == LOW) {
    Joystick.button(button0, false);
  }
  if (buttonState1 == LOW) {
    Joystick.button(button1, false);
  }  
  if (buttonState2 == LOW) {
    Joystick.button(button2, false);
  }  
  if (buttonState3 == LOW) {
    Joystick.button(button3, false);
  }  
  if (buttonState4 == LOW) {
    Joystick.button(button4, false);
  }  
  if (buttonState5 == LOW) {
    Joystick.button(button5, false);
  }  
  if (buttonState6 == LOW) {
    Joystick.button(button6, false);
  } 
  if (buttonState7 == LOW) {
    Joystick.button(button7, false);
  }

  delay(10);
}
