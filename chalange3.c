#include<stdio.h>




int PGCD(int a,int b){
	if(a==b){
		return a;
	}else{
		return PGCD(b,a-b);
	}
}


int main(){
	int a,b,res;
	printf("entrer a:");
	scanf("%d",&a);
		printf("entrer b:");
	scanf("%d",&b);
	
	res=PGCD(a,b);
	printf("Somme est : %d",res);
	return 0;
}
