#include <stdio.h>
#include <stdbool.h>

/*
bool isPalindrome(int x)
{
    int n = x, number = 0;

    if ( x < 0 )
        return false;
    else {
        while ( n != 0 ){
            number = (number * 10 ) + n % 10;
            n /= 10;
        }
        if ( number == x )
            return true;
        else
            return false;
    }
}
*/

bool isPalindrome(int x)
{
    if ( x < 0 || ( x % 10 == 0 && x != 0))
        return false;

    int revertedNumber = 0;

    while ( x > revertedNumber ){
        revertedNumber = (revertedNumber * 10 ) + x % 10;
        x /= 10;
    }

    return x == revertedNumber || x == revertedNumber / 10;

}

int main() {

    int x;
    bool palindrome;

    printf("Enter a number: ");
    scanf("%i", &x);

    palindrome = isPalindrome(x);

    if (palindrome)
        printf("true");
    else
        printf("false");

    return 0;
}
