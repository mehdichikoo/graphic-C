/*
         1
        121      	1
       12321		21
      1234321		321
	 123454321		4321
	12345654321   
*/
#include<stdio.h>
#include<windows.h>

int tab[100];
void dessin(int tal){
	int o,q=0,i ,j,k=1; 
	
for(i=0;i<tal+1;i++){
	
	printf("\t");
	
	for(j=0;j<=tal-(i+1);j++){
		printf(" ");
	}
	for(j=0;j<((2*i)+1)/2;j++){
	
	
		printf("%d",j+1);
	}
	
	for(o=j-1;o>=1;o--){
			printf("%d",o);
	}
	printf("\n");
	
	
}
	
}


int main()
{
	int n;
	do{
	
	printf("entrer un numero superieur\n");
	scanf("%d",&n);
	system("cls");
	
}
while(n>9||n<0);
	dessin(n);
	getch();
	
}

