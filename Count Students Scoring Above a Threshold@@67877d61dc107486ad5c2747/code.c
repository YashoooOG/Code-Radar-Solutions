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
    int ma;
    for (int i=0;i<n;i++){
        scanf("%d",&Sts[i].RoNum);
        scanf("%c",&Sts[i].name);
        scanf("%d",&Sts[i].marks);
    }
    scanf("%d",&ma);
    int k=0;
    for (int i=0;i<n;i++){
        if (Sts[i].marks>ma){
            k++;
        }
    }
    printf("Count of students scoring above %.2f: %d",ma,k);
    return 0;
}