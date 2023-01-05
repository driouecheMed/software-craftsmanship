/*
* Problem link:
* https://open.kattis.com/problems/trik
*/

#include<stdio.h>
#include<string.h>

void main(void){
	
	char input[50];
	int output;

	int i;
	int length;

	scanf("%s",input);
	
	//The ball is under the leftmost cup
	output = 1;

	length = strlen(input); 
	for(i = 0; i < length; i++){
		if(output == 1){
			if(input[i] == 'A'){
				output = 2;
			}else if(input[i] == 'C'){
				output = 3;
			}
		}else if(output == 2){
			if(input[i] == 'A'){
				output = 1;
			}else if(input[i] == 'B'){
				output = 3;
			}
		}else if(output == 3){
			if(input[i] == 'B'){
				output = 2;
			}else if(input[i] == 'C'){
				output = 1;
			}
		}
	}

	printf("%d",output);

}

