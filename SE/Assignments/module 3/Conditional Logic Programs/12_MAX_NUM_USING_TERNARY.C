// PROGRAM 12 : MAX_NUMBER_USING_TERNARY_OPERATOR (START) --------------------->
#include <stdio.h>
void main()
{
	int n1, n2, n3;
	printf("Enter n1 : ");
	scanf("%d", &n1);
	printf("Enter n2 : ");
	scanf("%d", &n2);
	printf("Enter n3 : ");
	scanf("%d", &n3);

	n1 > n2 ? n1 > n3 ? printf("%d is max", n1) : n2 > n1 ? n2 > n3
														  : printf("%d is max", n2)
			: printf("%d is max", n3);
}
// PROGRAM 12 : MAX_NUMBER_USING_TERNARY_OPERATOR (END) --------------------->