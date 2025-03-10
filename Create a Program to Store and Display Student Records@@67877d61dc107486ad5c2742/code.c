#include <stdio.h>
#include <string.h>

struct Stu{
    int RoNum;
    char name[50];
    float marks;
};
int main(){
    struct Stu Sts[100];
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&Sts[i].RoNum);
        scanf("%c",&Sts[i].name);
        scanf("%d",&Sts[i].marks);
    }

    for (int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %c, Marks: %.2f",Sts[i].RoNum , Sts[i].name , Sts[i].marks);
    }
    return 0;
}