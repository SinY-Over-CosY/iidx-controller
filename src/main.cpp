#include <Arduino.h>
#include <Keyboard.h>
#include "buttonsClass.hpp"

// TODO: FILL OUT WHEN DECIDED
constexpr uint8_t button1{A0};
constexpr uint8_t button2{};
constexpr uint8_t button3{A1};
constexpr uint8_t button4{};
constexpr uint8_t button5{A2};
constexpr uint8_t button6{A3};
constexpr uint8_t button7{};

// buttons member
Buttons buttons;

void getButtonInputs(){ // TODO: MOVE TO EXTERNAL SOURCE FILE
  // button 1
  if(digitalRead(button1) == LOW){
    Keyboard.press(buttons.getBut1());
  }
  else{
    Keyboard.release(buttons.getBut1());
  }

  // button 2
  if(digitalRead(button2) == LOW){
    Keyboard.press(buttons.getBut2());
  }
  else{
    Keyboard.release(buttons.getBut2());
  }

  // button 3
  if(digitalRead(button3) == LOW){
    Keyboard.press(buttons.getBut3());
  }
  else{
    Keyboard.release(buttons.getBut3());
  }

  // button 4
  if(digitalRead(button4) == LOW){
    Keyboard.press(buttons.getBut4());
  }
  else{
    Keyboard.release(buttons.getBut4());
  }

  // button 5
  if(digitalRead(button5) == LOW){
    Keyboard.press(buttons.getBut5());
  }
  else{
    Keyboard.release(buttons.getBut5());
  }

  // button 6
  if(digitalRead(button6) == LOW){
    Keyboard.press(buttons.getBut6());
  }
  else{
    Keyboard.release(buttons.getBut6());
  }

  // button 7
  if(digitalRead(button7) == LOW){
    Keyboard.press(buttons.getBut7());
  }
  else{
    Keyboard.release(buttons.getBut7());
  }
}

void setup(){
  // button registers
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);
  pinMode(button6, INPUT_PULLUP);
  pinMode(button7, INPUT_PULLUP);
}

void loop(){
  getButtonInputs();
}