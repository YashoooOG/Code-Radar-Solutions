#include <stdio.h>
#include <string.h>

struct Stu{
    int RoNum;
    char name[50];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    int a=;
    struct Stu Sts[n];
    for (int i=0;i<n;i++){
        scanf("%d",&Sts[i].RoNum);
        scanf("%c",&Sts[i].name);
        scanf("%d",&Sts[i].marks);
    }

    for (int i=0;i<n;i++){
       a+=Sts[i].marks;
    }

    printf("Average Marks: %.2f",a / n);
    return 0;
}