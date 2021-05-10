#include <stdio.h>
#include <string.h>

int main(){
    char ch;
    scanf("%c",&ch);
    ch=tolower(ch);
    switch(ch){
        case 'a':
            printf("Vowel");
            break;
        case 'e':
            printf("Vowel");
            break;
        case 'i':
            printf("Vowel");
            break;
        case 'o':
            printf("Vowel");
            break;
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
            break;



    }
}