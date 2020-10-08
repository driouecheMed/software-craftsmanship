/*
* Problem link:
* https://open.kattis.com/problems/easiest
*/

#include<stdio.h>

int sum_digits(int n){
	int sum, remainder;
	sum = 0;
	while (n != 0){
		remainder = n % 10;
		sum += remainder;
		n  = n / 10;
	}
	return sum;
}

void main(void){
	
	int N;
	int t, sum, remainder, p;

	scanf("%d", &N);
	
	while(N != 0){
		p = 11;
		sum = sum_digits(N);
		while( sum != sum_digits(N*p) ){
			p++;
		}
		printf("%d\n",p);
		scanf("%d", &N);
	}
	
}

