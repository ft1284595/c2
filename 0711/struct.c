#include <stdio.h>
struct STU{
	int id;
	char name[20];
	char sex;
	//char blood;
	short blood;
};

int main(void)
{
	struct STU b = {10, "xwp", 'm'};
	struct STU a;
	a = b;

	printf("%p\t%d\n", &a.id, a.id);
	printf("%p\t%s\n", a.name, a.name);
	printf("%p\t%c\n", &a.sex, a.sex);
	printf("sizeof(a) = %ld\n", sizeof(a));
	printf("sizeof(struct STU) = %ld\n", sizeof(struct STU));

	return 0;
}
