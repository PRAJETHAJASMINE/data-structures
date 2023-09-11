#include<stdio.h>
int fibrec(int n){
	if(n<=1){
		return 1;
	}
	else{
		return fibrec(n-1)+fibrec(n-2);
	}
}
int main(){
	int num,i;
	printf("enter an integer: ");
	scanf("%d",&num);
	if(num<0){
		printf("fibanacci not valid for negactive numbers"); 
	}
	else{
		for(i=0;i<num;++i){
		     printf("%d",fibrec(i));	
		}
	}
}

