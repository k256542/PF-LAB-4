#include <stdio.h>
int main(){
	int data;
	printf("please enter your data usage:");
	scanf("%d",&data);
	if (data<=50){
		printf("Basic user");
		
	}
	else if(data>=51 && data<=150){
		printf("standard user");
	}
	else{
		printf("Heavy user");
	}
	return 0;
}