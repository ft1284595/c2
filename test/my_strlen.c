#include <stdio.h>

/**
 * 模拟c库函数strlen，实现mystrlen函数，检测一个字符串的长度
 * 
 * /

int my_strlen(char *str){
	int count = 0;

	if (str == NULL){
		count = 0;
		return count;
	}
	
	while(*str != '\0'){
		count ++;
		str++;
	}

	return count;
}

int main(void){

	char *str = "hello";
	char str1[20] = {'w','o', 'r','l','\0','d'}; 
	int ret = 0;

	ret = my_strlen(str1);

	printf("%s's length=%d\n", str1, ret);
	

	return 0;
}


