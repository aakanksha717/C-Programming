/* Problem-statement:

The hostel in which you stop for the night changes its prices according to the age of the customer and the weight of their luggage. The rules are not very clear, so you decide to write a small program that will easily allow you and your travel companions to know the price of one night.

One room costs nothing if you are 60 (the age of the innkeeper), or 5 dollars if you are less than 10 years old. For everyone else, the cost is 30 dollars plus an additional 10 dollars if you bring more than 20 pounds of luggage. Your program should read the customer's age first, then the weight of their luggage, then output the price they have to pay.

Example
Input:
22
25
Output:
40
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.

*/

//Coder:Shashi 15 Sept 2019

#include<stdio.h>

int main(){
    int customerAge, luggageWeight;
    scanf("%d%d", &customerAge, &luggageWeight);
    if (customerAge==60){
        printf("%d", 0);
    }
    if (customerAge<10){
        printf("%d", 5);
    }
    if (customerAge>10 && luggageWeight<=20){
         if(customerAge!=60){
             printf("%d", 30);
         }
    }else{
        if(customerAge>10 && luggageWeight>20){
            if(customerAge!=60){
                printf("%d", 40);
            }
        }
    }
    return 0;
}

