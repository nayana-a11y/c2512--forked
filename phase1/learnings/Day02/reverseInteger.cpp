/*
Objective: To reverse a given input integer
Ex 1: 
     Input = 987
     Output = 789
Ex 2: 
     Input = 100
     Output = 1

Pseudocode:

1. Input number from user and initialize result = 0
2. While number is not equal to zero
   2.1 Get the last digit of number using % operator and store it in reminder
   2.2 Update result = result * 10 + reminder
   2.3 Remove the last digit from number using / operator
3. Return result

*/


//Code:
#include <iostream>
using namespace std;

int reverseInteger(int number) //author/owner 
{
    int originalNum, remainder, result = 0;
    originalNum = number;
    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        result = (result*10)+remainder;
        // removing last digit from the original number
        originalNum /= 10;
    }
    return result;
}

void reverseIntegerTest() //user
{
    int number;
    cout << "Enter a integer: ";
    cin >> number;
    int reverse = reverseInteger(number);  
    cout << reverse;
}

int main() {
    reverseIntegerTest();
    return 0;
}
