#ifndef SETUP_H_
#define SETUP_H_

#include "misc.h"
#include "led.h"
#include "button.h"
#include "led_vector.h"

/* Skapar struktar för tre lysdioder, en knapp och en led_vector */
struct led l1, l2, l3;
struct button b1;
struct led_vector v1;

extern volatile bool ledblink; //skapar en global bool. 

void setup(void);

#endif /* SETUP_H_ */