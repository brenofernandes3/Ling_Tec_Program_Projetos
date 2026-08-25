#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,r;
	
	printf("Insira um numero A:");
	scanf("%d", &a);
	
	printf("Insira um numero B:");
	scanf("%d", &b);
	
	if (a>0 && b>0) {
		if (a%2 ==0 && b%2 ==0 ) {
			printf("Os dois numeros sao multiplos de 2!!");
		}
			
	} if (a%b == 0) {
		printf("Os dois sao multiplos entre si");
		
	} else {
		if(b%a == 0){
			printf("Sao multiplos");
		}
	}
	
	return 0;
}
