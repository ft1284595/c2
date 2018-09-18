#include <stdio.h>
#include <string.h>

union ITEM{
	float price;
	char name[20];
};

struct goods{
	char name[20];	//物品真正的名字
	int flag;		//0免费,1收费
	union ITEM item;//免费物品打印name, 收费物品描述价格
};

int main(void)
{
	int i;
	struct goods a[3];
	char buf[1024];

	for(i=0; i<3; i++){
		scanf("%s", buf);
		strcpy(a[i].name, buf);
		getchar();	//过滤掉上一次输入的回车
		scanf("%d", &a[i].flag);
		getchar();
		if(a[i].flag == 1){
			scanf("%f", &a[i].item.price);
		}else{
			scanf("%s", a[i].item.name);
		}
		getchar();
	}
	/*
	union ITEM a, b;
	a.price = 50;
	strcpy(b.name, "sprite");
	printf("%d\n", a.price);
	printf("%s\n", b.name);

	printf("sizeof(a) = %ld\n", sizeof(a));
	*/

	return 0;
}
