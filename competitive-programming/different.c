/*
* Problem link:
* https://open.kattis.com/problems/different
*/

#include<stdio.h>

void main(void){

	unsigned long a,b,diff;

	while(scanf("%lu %lu",&a,&b) != EOF){	
		if(a > b){
			diff =  a - b;
		}else{
			diff =  b - a;
		}
		printf("%lu\n", diff);
	};

}

