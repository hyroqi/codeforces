#include <stdio.h>
#include <stdlib.h>

void *ft_evenodd(int num)
{
	if (num % 2 == 0 && num != 2)
	printf("YES");
	else
	printf("NO");
}

int main(void)
{
	int num;
	scanf("%d", &num);
	ft_evenodd(num);
	return (0);
}