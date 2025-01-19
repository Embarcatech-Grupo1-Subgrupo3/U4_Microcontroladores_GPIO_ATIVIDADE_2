#include "pico/stdlib.h"

#define LED_PIN_GREEN 11
#define LED_PIN_BLUE 12
#define LED_PIN_RED 13
#define BUZZER 21

void init_gpio() {
    gpio_init(LED_PIN_GREEN);
    gpio_set_dir(LED_PIN_GREEN, GPIO_OUT);

    gpio_init(LED_PIN_BLUE);
    gpio_set_dir(LED_PIN_BLUE, GPIO_OUT);

    gpio_init(LED_PIN_RED);
    gpio_set_dir(LED_PIN_RED, GPIO_OUT);

    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);
}

void control_leds(bool green, bool blue, bool red) {
    gpio_put(LED_PIN_GREEN, green);
    gpio_put(LED_PIN_BLUE, blue);
    gpio_put(LED_PIN_RED, red);
}

void buzzer_sound() {
    gpio_put(BUZZER, true);
    sleep_ms(2000);
    gpio_put(BUZZER, false);
}

int main() {
    //stdio_init_all();
    init_gpio();

    while (true) {
        control_leds(true, false, false);
        sleep_ms(1000);
        control_leds(false, false, false);
        sleep_ms(1000);

        control_leds(false, true, false);
        sleep_ms(1000);
        control_leds(false, false, false);
        sleep_ms(1000);

        control_leds(false, false, true);
        sleep_ms(1000);
        control_leds(false, false, false);
        sleep_ms(1000);

        control_leds(true, true, true);
        sleep_ms(1000);
        control_leds(false, false, false);
        sleep_ms(1000);

        buzzer_sound();
        sleep_ms(1000);
    }

    return 0;
}