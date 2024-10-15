#include <stdio.h>

int main () {
	
	int i = 1;
	int res;
	
	while (i <= 100){
		
		res = i+i;
		printf("%d + %d = %d\n",i,i,res);
		i++;
	}
	
	return 0;
}

