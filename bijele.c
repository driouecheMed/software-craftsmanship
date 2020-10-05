/*
* Problem link:
* https://open.kattis.com/problems/bijele
*/

#include<stdio.h>

#define KINGS 1
#define QUEENS 1
#define ROOKS 2
#define BISHOPS 2
#define KNIGHTS 2
#define PAWNS 8

void main(void){

	int kings, queens, rooks, bishops, knights, pawns;
	
	scanf("%d %d %d %d %d %d",&kings, &queens, &rooks, &bishops, &knights, &pawns);

	kings = KINGS - kings;
	queens = QUEENS - queens;
	rooks = ROOKS - rooks;
	bishops = BISHOPS - bishops;
	knights = KNIGHTS - knights;
	pawns = PAWNS - pawns;

	printf("%d %d %d %d %d %d",kings, queens, rooks, bishops, knights, pawns);

}
