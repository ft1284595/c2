#include <stdio.h>

int add(int a, int b)
{
	printf("%d\t%d\n", a, b);
	return a + b;
}

char max_ch(char *str)
{
	int i, max;
	max = 0;
	for(i=0; str[i] != '\0'; i++){
		if(str[i] > str[max]){
			max = i;
		}
	}

	return str[max];
}

int main1(void)
{
	int res;
	int (*p)(int, int);

	char (*q)(char *);
	q = max_ch;
	printf("%c\n", q("hello"));
	p = add;
	res = p(3,5);
	//res = add(3, 5);
	printf("%d\n", res);

	return 0;
}

//函数指针作为参数
void ox_say(char *str)
{
	printf("%s\n", str);
}

void dog_say(char *str)
{
	printf("%s\n", str);
}

void man_say(char *str)
{
	printf("%s\n", str);
}
void say_what(void (*p)(char *), char *s)
{
	p(s);
}
int main(void)
{
	int num;
	while(1){
		scanf("%d", &num);
		switch(num){
			case 1:
				say_what(ox_say, "mn mn");
				break;
			case 2:
				say_what(dog_say, "wang wang");
				break;
			case 3:
				say_what(man_say, "Oh, year");
				break;
		}
	}

	return 0;
}
