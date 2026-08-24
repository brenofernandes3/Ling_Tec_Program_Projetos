#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c, MaiorTemporario, maior;
	
	printf("Insira os valores de A, B, C");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a>b && a>c){
		printf("%d e o maior", a);
	}
	if(a<b && a>c){
	 printf("%d e o maior /n", b);
	}  
	if(c>a && c>b){
		printf("%d e o maior /n", c);
	}
	
	return 0;
}
