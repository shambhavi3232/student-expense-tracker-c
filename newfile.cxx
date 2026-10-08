#include<stdio.h>
int main(){
	char i;
	char *ptr;
	ptr=&i;
	for( i='a'; i <='z'; i++){
	printf("%c" ,*ptr);
	}
	return 0;
}
	