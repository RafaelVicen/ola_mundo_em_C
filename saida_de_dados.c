#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Ola, tenho 6 anos e programo\n");
	
	printf("Valor inteiro: %d.\n", 10); //O percento d (%d) é o especificador de formato para numeros inteiros
	// em bases decimais
	//O que acontece é q o percento d, ele é subistituido por 10.
	
	printf("valor real: %f. \n", 3.2345989);// Aqui o percento f (%f) é pra os numeros com pontos
	//O percento f é subistituido com o valor q vem depois da virgula
	
	printf("valor real com apenas duas casas deciamis: %.2f.\n", 3.24836);// Aqui se eu quiser imprimir um numero
	// com duas casas decimais  uso o porcento ponto dois f (%.2f) ele imprim os dois numeros q vem depois do ponto
	
	printf("Dado de texto: %c.\n", 'a' ); //se eu quiser imprimri um caracter isolado eu tenho q usar o percento c (%c)
	//ele vai imprimir um caracter isolado, seja ele a, b, c, ou d, quando eu vou impirmir um unico caracter, eu tenho q
	//cercar ele com aspas simples ('')
	
	printf("Dado de texto: %s.\n", "testando");//primeiro percebe q tudo q tem aspas duplas é considerado como texto
	// o percento s (%s) ele é subistituido pela palavra testando.
}
