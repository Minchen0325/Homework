#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int array[10]={1,3,2,44,56,71,20,34,23,61};
	int temp;
	int i;
	int j;
	int exiting=0;
	printf("�}�C��:");
	for(i=0;i<10;i++){
		
		printf("%3d",array[i]);
	} 
	printf("\n");
	for(j=0;j<9;j++){
		for(i=0;i<9-j;i++){	
			if(array[i]>array[i+1]){
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
				exiting++;
			}
		} 
		if(exiting==0){
			printf("��%d������",i);
			break;
		}
		else{
			exiting=0;
		}
	}	
	printf("\n");
	printf("�Ƨǫ�:");
	for(i=0;i<10;i++){
		
		printf("%3d",array[i]);
	} 
	system("pause");
	return 0;
} 
