#include<stdio.h>
int factrec(int n){
	int i;
	unsigned int fact=1;
	for(i=1;i<=n;++i){
		fact*=i;
	}
	return fact;
}
int main(){
	int num, result;
	printf("enter an integer: ");
	scanf("%d",&num);
	if(num<0){
		printf("the factorial not valid for negative integers");
	}
	else{
		result=factrec(num);
		printf("the factorial of an given integer %d is: ",result);
	}
}
