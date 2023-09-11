#include<stdio.h>
int displayarray(int arr[], int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
int insertarr(int arr[],int *size,int capacity,int element, int position){
	int i;
	if(*size>=capacity){
		printf("insertion invalid");
		return 0;
	}
	if(position<0||position>*size){
		printf("insertion invalid");
		return 0;
	}
	for(i=*size;i<position;i--){
		arr[i]=arr[i-1];
	}
	arr[position]=element;
	(*size)++;
	printf("the element %d  inserted successfully at positio %d :",element,position);
}
int deletion(int arr[],int *size, int position){
	int i;
	if(*size<=0){
		printf("the deletion failed");
		return 0;
	}
	if(position<0||position>*size){
		printf("deletion failed");
		return 0;
	}
	printf("the deletion of element %d is done successfully at position %d",arr[position],position);
	for(i=*size;i<position;i++){
		arr[i]=arr[i+1];
	}
	(*size)--;
	return 1;
}
int main(){
	int arr[100];
	int size=5;
	int capacity=sizeof(arr)/sizeof(arr[0]);
	int choice,element,position;
	do{
		printf("\n array operation\n");
		printf("1.insert element\n");
		printf("2.delete element\n");
		printf("3.display element\n");
		printf("4.quit\n");
		printf("enter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter element to insert: ");
				scanf("%d",&element);
				printf("enter position for insertion: ");
				scanf("%d",&position);
				insertarr(arr,&size,capacity,element,position);
				break;
				case 2:
					printf("enter position to display: ");
					scanf("%d",&position);
					deletion(arr,&size,position);
					break;
					case 3:
						displayarray(arr,size);
						break;
						case 4:
							printf("exit the program\n");
							break;
							default:
								printf("re-enter the choise\n");
								break;
		}
	}
	while(choice!=4);
	return 0;
}
