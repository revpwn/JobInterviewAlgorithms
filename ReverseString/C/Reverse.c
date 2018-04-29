#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverseString(char []);

// main : for testing
int main(void){
    char * testStr = "Reverse my letters";
    char * result = reverseString(testStr);
    printf("%s\n", result); // => "srettel ym esreveR"
    free(result);
    return 0;
}

char * reverseString(char s[]){
    int SIZE = strlen(s);
    int i;
    int j;
    char * ans = (char*) malloc(SIZE);
    for(i = SIZE-1, j = 0; i >= 0; i--, j++){
        ans[j] = s[i];
    }
    return ans;
}