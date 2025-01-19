#include "pico/stdlib.h"

#define LED_PIN_GREEN 11 // pino para o led verde
#define LED_PIN_BLUE 12 // pino para o led azul
#define LED_PIN_RED 13 // pino para o led vermelho
//#define BUZZER 21 // pino para o buzzer

void init_gpio() {
    gpio_init(LED_PIN_GREEN);
    gpio_set_dir(LED_PIN_GREEN, GPIO_OUT); // configura o pino para o led verde como saida

    gpio_init(LED_PIN_BLUE);
    gpio_set_dir(LED_PIN_BLUE, GPIO_OUT); // configura o pino para o led azul como saida

    gpio_init(LED_PIN_RED);
    gpio_set_dir(LED_PIN_RED, GPIO_OUT); // configura o pino para o led vermelho como saida

    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT); // configura o pino para o buzzer como saida
}
// funcao que controla os leds
void control_leds(bool green, bool blue, bool red) {//variaveis para o estado do led
    gpio_put(LED_PIN_GREEN, green);
    gpio_put(LED_PIN_BLUE, blue);
    gpio_put(LED_PIN_RED, red);
}
// funcao que controla o buzzer
void buzzer_sound() {
    gpio_put(BUZZER, true);// liga o buzzer
    sleep_ms(2000);
    gpio_put(BUZZER, false);// desliga o buzzer
}

int main() {
    //stdio_init_all();
    init_gpio();// inicia as GPIO

    while (true) {//cria um loop infinito para o sistema
        control_leds(true, false, false);// acende o led verde
        sleep_ms(1000);
        control_leds(false, false, false);// desliga todos os leds
        sleep_ms(1000);

        control_leds(false, true, false);// acende o led azul
        sleep_ms(1000);
        control_leds(false, false, false);// desliga todos os leds
        sleep_ms(1000);

        control_leds(false, false, true);// acende o led vermelho
        sleep_ms(1000);
        control_leds(false, false, false);// desliga todos os leds
        sleep_ms(1000);

        control_leds(true, true, true);// acende o led branco
        sleep_ms(1000);
        control_leds(false, false, false);// desliga todos os leds
        sleep_ms(1000);

        buzzer_sound();//liga o buzzer
        sleep_ms(1000);
    }

    return 0;
}
