/*
* Problem link:
* https://open.kattis.com/problems/cold
*/

#include<stdio.h>

void main(void){
	
	int n,t, out;

	out = 0;

	scanf("%d", &n);
	
	while( n > 0 ){
		scanf("%d", &t);
		if( t < 0){
			out++;
		}
		n--;
	}

	printf("%d", out);
}

