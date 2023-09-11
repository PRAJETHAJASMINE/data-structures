#include<stdio.h>
int main(){
	int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int mat2[3][3]={{0,1,2},{1,2,3},{2,3,4}};
	int mul[3][3],i,j,k;
	printf("the matrix 1 is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",mat1[i][j]);
			if(j==3-1){
				printf("\n\n");
			}
		}
	}
	printf("the matrix 2 is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",mat2[i][j]);
			if(j==3-1){
				printf("\n\n");
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mul[i][j]=0;
			for(k=0;k<3;k++){
				mul[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	printf("the product of two matrices is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
    return 0;	
}
