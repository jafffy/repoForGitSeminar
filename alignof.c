#include <stdio.h>

struct S
{
	char a;
	int b;
	char c;
};

int main()
{
	printf("%d\n", sizeof(struct S));

	return 0;
}
