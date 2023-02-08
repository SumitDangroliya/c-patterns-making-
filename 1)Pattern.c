#include<stdio.h>

void patern_making_function(int n);
void patern_making_function_(int n);
int main(){
	int n;
	printf("Enter the value for lines in pattern: ");
	scanf("%d",&n);
	pattern_making_function_(n);
	pattern_making_function(n);
	pattern_making_function_(n);
	pattern_making_function(n);
	return 0;
}


void pattern_making_function_(int n){
	if(n==1){
		printf("*\n");
		return;
	}
	pattern_making_function_(n-1);
	for(int i=0;i<n;i++){
		printf("*");
	}
	printf("\n");
}


void pattern_making_function(int n){


 for(int i=n-1;i>=1;i--){  
   for(int j=1;j<=i;j++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }  
}