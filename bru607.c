#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int v[10];
	int i=0, j=0, qtd=0, achei=0, num=0;

	
	for(i=0;i<10;i++){
		printf("\nENTRE C/ UM NUMERO:");
		scanf("%d", &num);
		for(j=0;j<qtd;j++){
			if(v[j] == num){
				achei = 1;
				break;
			}else{
				achei = 0;
			}
			printf("%d = %d\n bool:%d", num, v[j],achei );
		}
		printf("bool %d",achei);
		if(achei == 1){
			printf("NUMERO JA EXISTENTE");
			i--;
		}else{
			printf("NOVO No <%d>\n", num);
			qtd++;
			v[i] = num;
			printf("\nqtd = %d j = %d", qtd, j);
		}
	}
	
	
	
	for(i=0;i<10;i++){
		printf("%d ", v[i]);
	}
	
}
