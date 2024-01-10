#include<stdio.h>

int main(){
	int A, B, soma, subtr, multiplic, divis;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	multiplic = A * B;
	divis = A / B;
	
	printf("Resultados:\n ");
	printf("soma: %d.\n ", soma);
	printf("subtra.: %d.\n ", subtr);
	printf("multplic.: %d\n ", multiplic);
	printf("divis: %d\n", divis);
	
}
