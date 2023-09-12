#include <stdio.h>
int rev32bit(int num){
	int result=0,i;
	for(i=0;i<32;i++){
		result<<=1;//1*2=2
		result|=num&1;//2
		num>>=1;	
	}
	return result;
}
int main(){
	int num,i;
	printf("enter the num: ");
	scanf("%d",&num);
    int	reversed=rev32bit(num);
	printf("the reversed 32 bit num is: %d\n",reversed);
	return 0;
}
