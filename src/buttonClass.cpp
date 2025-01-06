#include <Arduino.h>

class Buttons{
    private:
        char buttons[7] = { 'z', 's', 'x', 'd', 'c', 'f', 'v'};

    public:
        char getBut1(){
            return buttons[0];
        }
        char getBut2(){
            return buttons[1];
        }
        char getBut3(){
            return buttons[2];
        }
        char getBut4(){
            return buttons[3];
        }
        char getBut5(){
            return buttons[4];
        }
        char getBut6(){
            return buttons[5];
        }
        char getBut7(){
            return buttons[6];
        }

};