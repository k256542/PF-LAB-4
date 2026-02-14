#include <stdio.h>
int main(){
	float att;
	printf("please enter your attendance:");
	scanf("%f",&att);
	if (att>=75){
		printf("Selected for tournament");
		
	}
	else{
		printf("Not Selected");
		
	}
	return 0;
}

