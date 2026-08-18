
int main(int argc, char *argv[]) {
	
	int n, antecessor, sucessor;
	printf("Insira o valor de N");
	scanf("%d", &n);
	sucessor = n+1;
	antecessor = n-1;
	
	printf("O numero N: %d, seu antecessor e %d e seu sucessor e %d ", n, antecessor, sucessor);
	return 0;
}
