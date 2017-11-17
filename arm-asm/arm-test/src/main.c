#include<stdio.h>

int ITM_SendChar (int ch);
int tc_1_loop(int max);

void tc_1_run()
{
	ITM_SendChar('a');
	printf("tc_1_loop: %d\n", tc_1_loop(15));
}

int main(void)
{
	tc_1_run();
	return 0;
}
