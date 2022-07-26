#include <stdio.h>
#include <stdlib.h>

int main()
{
	int LuckyNumbers[] = {4,8,15,16,23,42};
	LuckyNumbers[1] = 200;
	printf("%d", LuckyNumbers[1]); 
	
	return 0;
}
