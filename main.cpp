#include "mbed.h"

DigitalOut led1(RAK8212_ITRACKER_LED);

Serial pc(RAK8212_ITRACKER_UART_TX, RAK8212_ITRACKER_UART_RX, 115200);

// main() runs in its own thread in the OS
int main() {
    while (true) {
        led1 = !led1;
        // pc.printf("%s(%3d) LED is %s\r\n", __FUNCTION__, __LINE__, led1.read() ? "OFF" : "ON");
        if (led1.read())
            wait_ms(900);
        else
            wait_ms(100);
    }
}

