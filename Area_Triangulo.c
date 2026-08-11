int main(int argc, char *argv[]) {
	float Base, Altura, Area;
	
	printf("Insira o valor de Base \n");
	scanf("%f", &Base);
	printf("Insira o valor para Altura \n");
	scanf("%f", &Altura);
	Area = (Base*Altura)/2;
	
	printf("A area do Triangulo e = %0.2f", Area);
	return 0;
};
