/*
* Problem link:
* https://open.kattis.com/problems/parking
*/

#include<stdio.h>

typedef struct parking_info{
	int arrival;
	int departure;
}parking_info;

int min_fct(int x, int y, int z){
	if( (x<y) && (x<z) ){
		return x;
	}else if( y<z ){
		return y;
	}else{
		return z;
	}
}

int max_fct(int x, int y, int z){
	if( (x>y) && (x>z) ){
		return x;
	}else if( y>z ){
		return y;
	}else{
		return z;
	}
}

void main(void){
	
	int A, B, C;
	parking_info truck1, truck2, truck3;
	int trucks_num, cost;
	
	int i, min, max;

	scanf("%d %d %d", &A, &B, &C);
	scanf("%d %d", &truck1.arrival, &truck1.departure);
	scanf("%d %d", &truck2.arrival, &truck2.departure);
	scanf("%d %d", &truck3.arrival, &truck3.departure);
	
	cost = 0;
	min = min_fct(truck1.arrival,truck2.arrival,truck3.arrival);
	max = max_fct(truck1.departure,truck2.departure,truck3.departure);

	for(i = min; i < max; i++){
		trucks_num = ( truck1.arrival <= i && i < truck1.departure ) + ( truck2.arrival <= i && i < truck2.departure ) + ( truck3.arrival <= i && i < truck3.departure );

		if(trucks_num == 1){
			cost += A;
		}else if(trucks_num == 2){
			cost += (2 * B);
		}else if(trucks_num == 3){
			cost += (3 * C);
		}
	}

	printf("%d", cost);

}

