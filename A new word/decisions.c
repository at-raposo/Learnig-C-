#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //para conseguirmos usar a função toupper
// é uma biblioteca dedicada para a manipulação de caracteres

main (){
	
	char c; //declarando uma variavel do tipo caracter
	printf("\nDigite um caracter em letra minúscula:\n"); //pedindo para uma mensagem ser impressa
	scanf("%c", &c); // pedindo para digitar um valor e logo dps mante-lo guardado na memoria
//&c significa que ele vai armazenar o que ele lê, pra isso que serve o & 
	
	if (c >='a'){ // aqui ele verifica se a variavel digitada pelo usuario é maior ou igual a C
		
		printf("\nSegue a letra que voce digitou em maiuscula: > %c <\n ",toupper(c)); //se for maior do que a letra 'a' //usamos essa função para colocar a letra em formato maisculo
	}
	
	
	return 0;
}
