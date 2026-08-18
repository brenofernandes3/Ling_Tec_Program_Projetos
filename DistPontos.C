int main(int argc, char *argv[]) {
	float dist, cat1, cat2, x1, y1, x2, y2;
	
	printf("Insira os valores para p1(x1)");
	scanf("%d", &x1);
	printf("Insira os valores para p1(y1)");
	scanf("%d", &y1);
	
	printf("Insira os valores para p2(x2)");
	scanf("%d", &x2);
	printf("Insira os valores para p2(y2)");
	scanf("%d", &y2);
	
	cat1: pow((x2*x1), 2);
	cat2: pow((y2*y1), 2);
	
	dist = sqrt(cat1 + cat2);
	printf ("A distancia e: %d", dist);
	
	return 0;
}
