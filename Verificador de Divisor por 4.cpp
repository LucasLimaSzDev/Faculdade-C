	#include <stdio.h>
	int divisivel (int num){
		
		if(num % 4 == 0) return 1;
		else return 0;
		
	}
		
	int main(){
		
		int val;
	
		printf("Digite o numero para verificar se ele e divisivel por 4: ");
			scanf("%d",&val);
				if(val > 99 && val <= 999){
					if(divisivel(val)){
						printf("%d e divisivel por 4",val);
					} else {
						printf("%d nao e divisivel por 4",val);
					}
					
					
				} else {
					
					printf("Numero invalido");
					
				}
		
		
	
			return 0;
		} 

