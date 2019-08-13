/* Course : Introduction to Programming in C (IIT K) NPTEL mooc through Swayam

Session : July- November 2019

Coder : Shashi kant

Week 1 , assignment 1

Problem-statement : You will be given 3 integers as input. The inputs may or may not be
 different from each other. 

You have to output 1 if all three inputs are different from each other, and 0 if any input is repeated more
 than once. */

#include <stdio.h>

int main(){
	int num1, num2, num3; // input three integers
	scanf("%d %d %d", &num1, &num2, &num3); // read three integers
	if (num1 != num2){
		if (num2 != num3){
			if (num3 != num1){
				printf("%d", 1);
			}
		}
	}
	else{
		printf("%d", 0);
	}
}