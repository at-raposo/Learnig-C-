#include <stdio.h>
#include <stdlib.h>

main(){
  int h, m;
  printf("Informe a quantidade de alunos:\n");
  scanf("%d", &h);
  
  printf("Informe a quantidade de alunas:\n");
  scanf("%d", &m);
  
   if(m == 0){
  	printf("Não temos alunas, ja que temos %d homens e %d mulheres", h, m);}
  	
	  else if(h == 0){
  	printf("Não temos alunos, já que temos %d homens e %d mulheres", h, m);
  }
  	else if(h>m){
  	printf("\n Nessa sala temos mais alunos , ja que temos > %d< mulheres e > %d< homens\n", m,h);
  }	
  	else if (m>h){
	printf("\n Nessa sala temos mais alunas , ja que temos >%d< mulheres e >%d< homens\n", m,h);
  }
 	 else{
  	printf("\nA quantidade de mulheres e homens são iguais ja que temos\n >%d< mulheres e >%d< homens \n", m,h);
  }

	 
	 return 0;
	
	
}
