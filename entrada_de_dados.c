#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int idade = 0;//aqui eu estou a informar que estou a criar uma região de memoria
	//que vai guardar dados decimais do tipo inteiro chamada idade
	//e ela ja começa valendo zero (0).
	float peso = 0.0;//aqui estou a dizer q o meu peso começa com mais de duas casas decimais e uso o float
	
	printf("Valor inicial da idade: %d.\n", idade);//aqui eu chamei o printf pra mostrar a msg na tela
	//o percento d (%d) esta relacionado com o conteudo dentro da variavel em memoria
	// ou seja, não vai ser imprenso o percento d na tela, nem a msg idade
	//o que vai ser imprenso? vai ser zero, por que? porque eu fiz idade valer zero e logo em seguida
	//eu imprimi o conteudo da idade. 
	
	printf("Digite uma idade:");//aqui o program impreme na tela pra vc degitar uma idade
	scanf("%d", &idade);//o que acontece aqui eh q quando o usuario digitar algo no teclado, a maquina fica a espera 
	//ate o usuario digitar algo, e quando ele degitar o numero que for, na memoria o valor idade vai deixar de ser zero
	//para ser o valor q foi digitado pelo usuario
	
	printf("Digite um peso:");//é sempre ideial q eu faça o printf e o scanf separadamente
	scanf("%f", &peso);//aqui uso o percento f (%f) pra informar q o meu peso vai ter mais de duas casas deciamis
	
	printf("idade informada: %d\n", idade); //aqui vai imprimir o que foi digitado pelo usuario
	printf("peso informado: %f\n", peso);
}
