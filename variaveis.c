#include<stdio.h>

#define  texto "Entrada de dados"


int main(){
    printf("%s\n", texto);
	//Regras de Nomeclatura das variaveis
	/*
	1�-> As variaveis n�o podem come�ar com um numero na primeira posi��o
	2� -> As variaveis nao podem conter caracter especiais
	3� -> As variaveis nao podem ter espa�os
	*/
        int idade= 0 ;//quando a linha 14 for executada a minha variavel idade estara valendo zero
        
        float altura= 0.0 ;//quando essa linha for executada, a minha variavel vai imprimir dados com casas deciamis
        
        char Nome [50]= "" ;// criei aqui uma variavel nome, que eh do tipo char, que vai armazenar texto,e ela vai come�ando valer nada
		//por isso coloquei entre aspas duplas, um detalhe eh q a variavel idade e altura nao tem um numero entre cochetes a frente
		//por que? porque elas nao sao vectores, elas sao apenas uma regiao da memoria especifica, pra guardar um dado especifico.
		  
        	printf("Digite a idade:  ");//aqui eu pedi pra o usuario digitar a sua idade
        		scanf("%d", &idade);//idade eh do tipo inteiro entao usei o porcento d (%d) 
        
        	printf("Digite a altura:  ");//aqui pedi pra digitar altura, porque altura eh percento f (%f) dado com duas casas deciamis
        		scanf("%f", &altura);//altura eh do tipo float, entao usei o percento f (%f)

       		 printf("Digite o Nome:  ");//aqui pedi pra digitar o nome, porque o nome eh do tipo char
        		scanf("%s", Nome);//aqui usei o porcento s (%s) porque eh todo um conjunto de varios caracter de alfa numericos

	//aqui informo tudo o que o usuario digitou.
        printf("Dados informados:\n");
        printf("Idade: %d anos\n", idade);
        printf("Altura: %.2f.cm\n", altura);
        printf("Nome: %s\n", Nome);
}
