
#include <stdio.h>
int main(){
	int num;     //integer variable declaration
	char str[15];  //string 
	scanf("%d %s", &num,&str);   //read input integer from STDIN          
	if(num>=0 || num<=10){
		printf("%d\n%s", num*2,str); //print output integer and string to STDOUT
	}
	else{
	       printf("Invalid input"); //if condition not satisfied
	}
}


