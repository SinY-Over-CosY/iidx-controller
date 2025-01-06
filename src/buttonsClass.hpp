#include <Arduino.h>

class Buttons{
    private:
        // usb protocol keyboard inputs for each button
        char buttons[7] = { 'z', 's', 'x', 'd', 'c', 'f', 'v' };

    public:
        char getBut1();

        char getBut2();

        char getBut3();

        char getBut4();

        char getBut5();

        char getBut6();

        char getBut7();
};
