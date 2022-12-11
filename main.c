#include "setup.h"

/********************************************************************************
* main: Program innehållande tre lysdioder och en tryckknapp. Vid knapptryck så 
		startas en blink slinga. Vid nästa 
********************************************************************************/
int main(void)
{
	
	setup();
	
	while (1)
	{
		if (ledblink)
		{
			led_vector_blink_sequentially(&v1, 100);
		}
		else
		{
			led_vector_off(&v1);
		}
	}

	return 0;
}