#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);

int main() {
    while (true) {
        // LED1
        led1 = 1;
        thread_sleep_for(100);
        led1 = 0;

        // LED2
        led2 = 1;
        thread_sleep_for(150);
        led2 = 0;

        // LED3
        led3 = 1;
        thread_sleep_for(200);
        led3 = 0;

        // Then loop back to LED1 automatically
    }
}
