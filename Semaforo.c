#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/time.h"

#define RED_LED 11
#define BLUE_LED 12
#define GREEN_LED 13

volatile int state = 0; // 0: Vermelho, 1: Azul, 2: Verde

bool repeating_timer_callback(struct repeating_timer *t) {
    // Desliga todos os LEDs
    gpio_put(RED_LED, 0);
    gpio_put(BLUE_LED, 0);
    gpio_put(GREEN_LED, 0);
    
    // Alterna entre os estados do semáforo
    if (state == 0) {
        gpio_put(RED_LED, 1);
        state = 1;
    } else if (state == 1) {
        gpio_put(BLUE_LED, 1);
        state = 2;
    } else {
        gpio_put(GREEN_LED, 1);
        state = 0;
    }
    return true;
}

int main() {
    stdio_init_all();
    
    // Configuração dos pinos dos LEDs
    gpio_init(RED_LED);
    gpio_set_dir(RED_LED, GPIO_OUT);
    gpio_init(BLUE_LED);
    gpio_set_dir(BLUE_LED, GPIO_OUT);
    gpio_init(GREEN_LED);
    gpio_set_dir(GREEN_LED, GPIO_OUT);
    
    struct repeating_timer timer;
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);
    
    // Aciona imediatamente o primeiro estado do semáforo
    repeating_timer_callback(NULL);
    
    while (1) {
        printf("Sistema funcionando...\n");
        sleep_ms(1000);
    }
}

