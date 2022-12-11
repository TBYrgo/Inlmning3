#include "setup.h"

/********************************************************************************
*interrupts: PCI avbrott som aktiveras när tryckknappen släpps. 
********************************************************************************/
ISR(PCINT0_vect)
{
	if (!button_is_pressed(&b1))
	{
		ledblink = !ledblink;
	}
}