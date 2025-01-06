#include <Arduino.h>
#include <Keyboard.h>
#include "buttonsClass.hpp"

// TODO: FILL OUT WHEN DECIDED
constexpr uint8_t button1{};
constexpr uint8_t button2{};
constexpr uint8_t button3{};
constexpr uint8_t button4{};
constexpr uint8_t button5{};
constexpr uint8_t button6{};
constexpr uint8_t button7{};

// buttons member
Buttons buttons;

void getInputs(){ // TODO: MOVE TO EXTERNAL SOURCE FILE
  // button 1
  if(digitalRead(button1) == HIGH){
    Keyboard.press(buttons.getBut1());
  }
  else{
    Keyboard.release(buttons.getBut1());
  }

  // button 2
  if(digitalRead(button1) == HIGH){
    Keyboard.press(buttons.getBut2());
  }
  else{
    Keyboard.release(buttons.getBut2());
  }

  // button 3
  if(digitalRead(button1) == HIGH){
    Keyboard.press(buttons.getBut3());
  }
  else{
    Keyboard.release(buttons.getBut3());
  }

  // button 4
  if(digitalRead(button1) == HIGH){
    Keyboard.press(buttons.getBut4());
  }
  else{
    Keyboard.release(buttons.getBut4());
  }

  // button 5
  if(digitalRead(button1) == HIGH){
    Keyboard.press(buttons.getBut5());
  }
  else{
    Keyboard.release(buttons.getBut5());
  }

  // button 6
  if(digitalRead(button1) == HIGH){
    Keyboard.press(buttons.getBut6());
  }
  else{
    Keyboard.release(buttons.getBut6());
  }

  // button 7
  if(digitalRead(button1) == HIGH){
    Keyboard.press(buttons.getBut7());
  }
  else{
    Keyboard.release(buttons.getBut7());
  }
}

void setup(){
  // button registers
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(button6, INPUT);
  pinMode(button7, INPUT);
}

void loop(){

}