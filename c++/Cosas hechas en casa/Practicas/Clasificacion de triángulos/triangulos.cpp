#include <stdio.h>
float L1, L2, L3;

main(){
	printf("Ingrese el primer lado del triangulo: ");
	scanf("%f", & L1);
	printf("Ingrese el segundo lado del triangulo: ");
	scanf("%f", & L2);
	printf("Ingrese el tercer lado del triangulo: ");
	scanf("%f", & L3);
	
if (L1 == L2 && L1 == L3 ){
	printf("El triangulo es equilatero ya que posee todos sus lados iguales");
}
else if (L1 == L2 || L1 == L3 || L2 == L3){
	printf("El triangulo es isosceles debido a que posee dos lados iguales y uno desigual");
}

else {
	printf("El triangulo es escaleno porque posee todos los lados desiguales");
}
	
}