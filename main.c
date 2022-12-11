#include "setup.h"

/********************************************************************************
* main: Program inneh�llande tre lysdioder och en tryckknapp. Vid knapptryck s� 
		startas en blink slinga. Vid n�sta 
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