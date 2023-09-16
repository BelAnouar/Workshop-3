#include<stdio.h>




int Max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}


int main(){
	int a,b,res;
	printf("entrer a:");
	scanf("%d",&a);
		printf("entrer b:");
	scanf("%d",&b);
	
	res=Max(a,b);
	printf("Max est : %d",res);
	return 0;
}
