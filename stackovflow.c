#include<stdio.h>

const char *const p=NULL;

struct xyz {
	int a;
	char b;
	long long c;
}xy={5};

static int y=10;
static int z=20;

int main(void)
{
	int m=230;
	static int y=100;
	int x=y;
	int c[1];

	c[1]=5;

	printf("%d",x);
	return 0;
}
