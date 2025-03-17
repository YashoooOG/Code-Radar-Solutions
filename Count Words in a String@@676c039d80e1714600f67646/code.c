// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int count = 0;
    scanf("%[^\n]", &str);
    char *token = strtok(str," ");

    while (token != NULL){
        count++;
        token = strtok(NULL," ");    
    }
    printf("%d", count);
    return 0; 
}