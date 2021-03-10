#include <stdio.h>

void main(){


	int a,b, SomaGeral;


	printf("===========================");
	printf("   C a l c u l a d o r a   ");
	printf("===========================");
	printf("Digite um numero:");
	scanf("%d", &a);
	printf("Digite outro numero:");
	scanf("%d", &b);

	SomaGeral = a + b;

	printf("%d + %d = %d", a, b ,SomaGeral);


	return;
}