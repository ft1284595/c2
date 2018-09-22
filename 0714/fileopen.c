#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *fp;
   	//fp = fopen(argv[1], "w");
	fp = fopen("hellohahah", "r");
	if(fp == NULL)
		printf("open fail\n");
	//fprintf(fp, "niua\t%d\n", 10);
	fclose(fp);

	return 0;
}
