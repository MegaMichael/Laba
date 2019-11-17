#include<stdio.h>
int main()
{
	int a;
	int i = 0;
	while (scanf("%d", a)) {
		printf("%d", a);
		if (a == 5)
			i += 1;
		printf("%s", "число: ");
		printf("%d\n", i);
	}
	return 0;
}