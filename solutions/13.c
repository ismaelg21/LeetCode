#include <stdio.h>
#include <string.h>

/*
// what I originally had
int romanToInt(char *s){

    int strLength = (int) strlen(s);
    char c;
    int num = 0;

    for ( int i = 0; i < strLength; i++){
        c = s[i];

        switch (c){
            case 'I':
                if ( s[i+1] == 'V' )
                    num += 4;
                else if ( s[i+1] == 'X' )
                    num += 9;
                else
                    num += 1;
                break;
            case 'V':
                if ( s[i-1] == 'I')
                    break;
                else
                    num += 5;
                break;
            case 'X':
                if (s[i-1] == 'I')
                    break;
                else if ( s[i+1] == 'L' )
                    num += 40;
                else if ( s[i+1] == 'C' )
                    num += 90;
                else
                    num += 10;
                break;
            case 'L':
                if ( s[i-1] == 'X')
                    break;
                else
                    num += 50;
                break;
            case 'C':
                if ( s[i-1] == 'X')
                    break;
                else if ( s[i+1] == 'D' )
                    num += 400;
                else if ( s[i+1] == 'M' )
                    num += 900;
                else
                    num += 100;
                break;
            case 'D':
                if ( s[i-1] == 'C')
                    break;
                else
                    num += 500;
                break;
            case 'M':
                if ( s[i-1] == 'C')
                    break;
                else
                    num += 1000;
                break;
            default:
                break;
        }
    }

    return num;
}
*/

int value(char c)
{
    switch(c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:return 0;
    }
}

int romanToInt(char * s){

    int num = 0;

    for ( int i = 0; i < strlen(s); i++){
        if ( value(s[i]) < value(s[i+1]))
            num -= value(s[i]);
        else
            num += value(s[i]);
    }
    return num;
}

int main() {

    char str[100];
    int num;

    printf("Input a roman numeral: ");
    scanf("%s", str);

    num = romanToInt(str);
    printf("%i", num);

    return 0;
}
