#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *dest, *src;
	char buf[4096];
	if(argc < 3){
		printf("./mycp src dest");
		return -1;
	}
	src = fopen(argv[1], "r");
	dest = fopen(argv[2], "w");

	//if(src == NULL || dest == NULL){
	if(!src || !dest){
		printf("open file err\n");
		return -1;
	}
	while(fgets(buf, sizeof(buf), src) != NULL){
		fputs(buf, dest);
	}

	fclose(src);
	fclose(dest);

	return 0;
}
