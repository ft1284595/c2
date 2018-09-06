#include <stdio.h>

int main(void)
{
	int i, j, k;
	for(i=1; i<30; i++)
		for(j=1;j<30;j++)
			for(k=1;k<30;k++){
				if((i*3 + j*2 + k*1 == 50) && ((i+j+k) == 30)){
					printf("man=%d\twoman=%d\tchildren=%d\n", i, j, k);
				}
			}

	return 0;
}
