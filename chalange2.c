#include<stdio.h>




int Somme(int n1,int n2){
	return n1+n2;
}


int main(){
	int n1,n2,res;
	printf("entrer n1:");
	scanf("%d",&n1);
		printf("entrer n2:");
	scanf("%d",&n2);
	
	res=Somme(n1,n2);
	printf("Somme est : %d",res);
	return 0;
}
