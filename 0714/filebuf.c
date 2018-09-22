#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char str[10];
	scanf("%s", str);
	printf("%s", str);
//	fflush(stdout);

	while(1){
		printf("%s", str);
		usleep(1000);
	}

}
