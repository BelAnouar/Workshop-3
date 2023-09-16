#include<stdio.h>




float  Permuter(float a,float b){
    
    
    float temp=a;
    a=b;
    b=temp;
    

    
}


int main(){
	float a,b,res;
	printf("entrer a:");
	scanf("%f",&a);
		printf("entrer b:");
	scanf("%f",&b);
	
	res=Permuter(a,b);
	printf("res est : %f",res);
	return 0;
}
