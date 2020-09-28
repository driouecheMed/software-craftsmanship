/*
* Problem link:
* https://open.kattis.com/problems/nastyhacks
*/

#include<stdio.h>

void main(void){

	int n, r, e, c;
	int i;

	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d %d %d",&r,&e,&c);

		if( (e-(r+c)) > 0){
			printf("advertise\n");
		}else if( (e-(r+c)) == 0){
			printf("does not matter\n");
		}else{
			printf("do not advertise\n");
		}
	}

}

