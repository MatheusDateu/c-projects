#include <stdio.h>
#include <stdlib.h>
main (){
	int num[10]={1,6,4,2,4,3,5,3,1,3};
	int i,q=4,t=3,countq=0,countt=0;
	
	for(i=0;i<10;i++){
		if(q==num[i]){
			countq=countq+1;
		}else if(t==num[i]){
			countt=countt+1;
		}
	}
	printf("O numero 3 se repete= %d\n", countt);
	printf("O numero 4 se repete= %d\n", countq);
	
	system("PAUSE");
	return 0;
	getch();
}
