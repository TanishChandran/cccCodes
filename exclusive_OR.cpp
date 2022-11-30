// Find the XOR of two numbers and print it.

// Hint : Input the numbers as strings.

// Input Format

// First line contains first number X and second line contains second number Y.
// The numbers will be given to you in binary form.

// Constraints

// 0 <= X <= 2^1000
// 0 <= Y <= 2^1000

// Output Format

// Output one number in binary format, the XOR of two numbers.

// Sample Input 0

// 11011
// 10101
// Sample Output 0

// 01110
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int greater(int a,int b){
    if(a>=b)
        return 1;
    return 0;
}

int main() {
    
    
    char one[10000];
    char two[10000];
    
    scanf("%[^\n]%*c",one);
    scanf("%[^\n]%*c",two);
    
    int lenone=strlen(one);
    int lentwo=strlen(two);
    
    int result=greater(lenone,lentwo);
    
    if(result==1){
        int i;
        for(i=0;i<lenone-lentwo;i++){
            printf("%c",one[i]);
        }
                      int j=0;
        for(i=0+(lenone-lentwo);i<lenone;i++){
            if(one[i]==two[j])
                printf("0");
            else
                printf("1");
            j++;
        }
    }
    else{
        int i;
        for(i=0;i<lentwo-lenone;i++){
            printf("%c",two[i]);
        }
                      int j=0;
        for(i=0+(lentwo-lenone);i<lentwo;i++){
            if(two[i]==one[j])
                printf("0");
            else
                printf("1");
            j++;
        }
    }
    return 0;
}