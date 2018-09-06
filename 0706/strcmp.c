#include <stdio.h>
#include <string.h>

int main(void)
{
	/*
	char *s1 = "good";	
	char s2[] = "good";

	int res;
	res = strcmp(s1, s2);
	printf("%d\n", res);
	*/

	int i;

	char name[][10] = {"xiaoming", "itcast", "xiaoqiang", "xiaohong"};
	char key[10];
	//char name[][10] = {"xiaoming\0\0itcast\0\0\0\0xiaoqiang\0xiaohong\0\0"};
	//
	for(i=0; i<4; i++){
		if(strcmp(name[i], "xiaohong") == 0){
			printf("%d\t%s\n",i,name[i]);
			strcmp(key, name[i]);
		}
	}

	
	return 0;
}
