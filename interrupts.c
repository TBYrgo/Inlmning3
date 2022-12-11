#include "setup.h"

/********************************************************************************
*interrupts: PCI avbrott som aktiveras n�r tryckknappen sl�pps. 
********************************************************************************/
ISR(PCINT0_vect)
{
	if (!button_is_pressed(&b1))
	{
		ledblink = !ledblink;
	}
}