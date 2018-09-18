#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s, *p;
	int len = 5, i=0;
	s = malloc(5);
	p = s;
	while((*p=getchar()) != 'q'){
		putchar(*p);
		if(i==(len-1)){
			len += len;
			s = p = realloc(s, len);//
			i ++;
			p += i;
			continue;
		}
		p++;
		i++;
	}

	free(s);

	return 0;
}
