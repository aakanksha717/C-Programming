/* 

Course : Introduction to Programming in C (IIT K) NPTEL mooc through Swayam

Session : July- November 2019

Coder : Shashi kant

Week 1 , assignment 3

Problem-statement : Input : Triplet of three numbers (a,b,c)
                    Output : 1 if a>b>c ,0 otherwise  

*/

#include <stdio.h>

int main (){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if (a>b){
		if(b>c){
			printf("%d", 1);
		}
	}
	else{
		printf("%d", 0);
	}

}