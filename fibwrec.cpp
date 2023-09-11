#include<stdio.h>
int fibwrec(int num){
	int i,a=0,b=1,c;
	for(i=0;i<=num;++i){
		if(i<=1){
			c=i;
		}
		else{
		    c=a+b;
			a=b;
			b=c;	
		}
		printf("%d",c);
	}
	printf(" \n ");
}

int main(){
	int num;
	printf("enter an integer: ");
	scanf("%d",&num);
	if(num<0){
		printf("fibanacci not valid for negactive numbers"); 
	}
	else{
	    return fibwrec( num);
	}
}

