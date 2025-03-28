#include <stdio.h>
#include<string.h>
#include<ctype.h>
char  caesarCipher(char message[],int shift,char encrypted[100]){
    int n=strlen(message);
    for(int i=0;i<n;i++){
        message[i]=message[i]+shift;
    }
    return message;
}

