#include "setup.h"

/********************************************************************************
* setup: Separat fil för att initiera alla portar som ska användas samt aktivera 
		 interrupts.
********************************************************************************/
volatile bool ledblink = false;

void setup(void)
{
led_init(&l1, 8);
led_init(&l2, 9);
led_init(&l3, 10);

button_init(&b1, 13);
button_enable_interrupt(&b1);

led_vector_init(&v1);

led_vector_push(&v1, &l1);
led_vector_push(&v1, &l2);
led_vector_push(&v1, &l3);
}

