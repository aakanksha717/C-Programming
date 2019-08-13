/* Course : Introduction to Programming in C (IIT K) NPTEL mooc through Swayam

Session : July- November 2019

Coder : Shashi kant

Week 1 , assignment 2

Problem-statement : You are given two integers, say M and N.

You must check whether M is an exact multiple of N, without using loops.
You have to output 0 if M is not a multiple of N.
You have to output M/N if M is a multiple of N.  */

#include <stdio.h>

int main(){
	int M,N;
	scanf("%d %d", &M, &N);
	if (M%N != 0){
		printf("%d", 0);
	}
	else{
		printf("%d", M/N);
	}
}