#include<stdio.h>
int factrec(int n){
	if (n==0||n==1){
		return 1;
	}
	else{
		return n*factrec(n-1);
	}
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
