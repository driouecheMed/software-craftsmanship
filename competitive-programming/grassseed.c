/*
* Problem link:
* https://open.kattis.com/problems/grassseed
*/

#include<stdio.h>

void main(void){

	int L, i;
	double C, w, l, out;
	
	scanf("%lf",&C);
	scanf("%d",&L);
	
	out = 0.0;	

	for(i=0; i<L; i++){
		scanf("%lf %lf",&w, &l);
		out += w*l;
	}

	out *= C;

	printf("%.8lf", out);

}

