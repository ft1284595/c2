/*
 *	基于命令行:猜数字
 *	编程实现一个猜数字游戏。
 *	游戏规则:首先程序生成一个随机数(以下称为题目) ,由4位不重复的数字组成,
 *	如1234,7603等,然后提示玩家输入4位不重复的数字,程序会告诉玩家所猜答案与题目是否相符,
 *	如果不相符,程序会以A,B标识提示玩家,A表示数字和位置都正确,B表示数字正确位置不正确.
 *	例如程序出的题目是1234,则运行过程可以是这样:
 *	玩家输入:8765(没有一个数字正确)
 *	程序提示:0000
 *	玩家再猜:5283(猜对了2和3,但是3的位置错了)
 *	程序提示:AB
 *	玩家再猜:3261(猜对了3，2，和 1,但是3,1的位置错了)
 *	程序提示:ABB
 *	玩家输入:I GIVE UP						或者玩家猜中:1234
 *	则程序给出正确结果:1234					则程序提示:YOU BET
 *
 *	要求程序具有用户友好性,可以处理各种非法输入。
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define LEN 4



/*
 * 打印一个数组
 */
void show_array(int arr[], int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d", arr[i]);
	}

	putchar('\n');

}

/*
 * 检查一个数字是否在一个数组中出现过
 */
int check_duplication(int *arr, int len, int num){
	int i;
	if(len == 0)
		return 0;
	for(i=0; i<len; i++){
		if(num == arr[i])
			return 1;
	}
	return 0;
}

/*
 * 将一个字符串转化成一个整形数组
 */
int switch_num_to_arr(int *inputArr, int len, char *input){
	int i;
	for(i=0; i<len; i++){
		inputArr[i] = (input[i] - '0');	
	}
	return 0;
}

/*
 * 检查用户输入的数字是否于程序产生的随机数相符
 */
int check_answer(int ans[], int len, int inputArr[]){
	int i,j;
	int countA=0;
	int countB=0;
	printf("check answer:");
	for(i=0;i<len;i++){
		if(inputArr[i] == ans[i]){
			//printf("A");
			countA++;
			continue;
		}else{
			for(j=0;j<len;j++){
				if(inputArr[i] == ans[j]){
					//printf("B");
					countB++;
				}
			}
		}
	}
	if(countA == 4)
	{
		printf("Congratulations. you win.\n");
		return 1;
	}
	printf("%dA%dB", countA, countB);
	putchar('\n');
	return 0;
}

int main(void)
{
	int ans[4]={0};
	int inputArr[4] = {0};
	char input[20]="";
	char *str = "I GIVE UP";
	int i, j, ret=0;
	int cmpRet = 0;
	int convertRet = 0;
	int flag=1;

	//generate the random answer
	srand(time(0));
	for(i=0; i<4; i++){
		j = rand() % 10;
		while(check_duplication(ans, i, j)){
			j = rand() % 10;
		}
		ans[i] = j;
	}
		
	printf("the answer is:");
	show_array(ans, 4);

	while(flag)	{
		printf("please input a 4 digits:");
		//scanf("%[^\n]", input);
		/*
		if(scanf("%s", input) != 1){
			printf("input valid.\n");	
			continue;
		}
		*/
		fgets(input, sizeof(input), stdin);
		fflush(stdin);
		if(strlen(input) > 19){
			input[19] = '\0';
		}
		if(input[strlen(input) - 1] == '\n'){
			input[strlen(input) - 1] = '\0';
		}
		printf("you input:%s\n", input);


		cmpRet = strcmp(input, str);
		if(!cmpRet){
			flag = 0;
			continue;
		}
			

		//printf("cmpRet=%d\n", cmpRet);
		convertRet = atoi(input);
		//printf("convertRet=%d\n", convertRet);
		if((convertRet <= 0) || (convertRet > 9999) || (convertRet < 1000)){
			printf("the number you input is invalid.\n");
			//input[0]='\0';
			memset(input, 0, sizeof(input));
			continue;
		}
		




		switch_num_to_arr(inputArr, 4, input);
		//show_array(inputArr, 4);
		ret = check_answer(ans, 4, inputArr);
		if(ret)
			flag = 0;
		//atoi();
		//printf("the answer is:");
		//show_array(ans, 4);
		
		/**
		printf("%c\n", input[0]);
		printf("atoi=%d\n", (input[0]-'0'));
		printf("%c\n", input[1]);
		printf("%c\n", input[2]);
		printf("%c\n", input[3]);
		*/
	}

	return 0;
}
