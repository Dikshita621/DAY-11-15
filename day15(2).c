//Q30: Write a program to reverse a given number 
#include <stdio.h>

int main()
{
    int num, reversed = 0;
    
    // Ask user to enter a value
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int temp = num; // Save original number because num is modified in the loop
    
    while (temp != 0)
    {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    
    printf("%d\n", reversed);
    return 0;
}

