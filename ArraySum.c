#include<stdio.h>

int main(){
    int sum=0, i, n;

    printf("\nEnter the Number of Elements : ");
    scanf("%d",&n);

    int A[n];

    printf("\nEnter the Array Elements : ");
    for(i=0;i<n;i++){
        printf("\nA[%d] : ",i);
        scanf("%d",&A[i]);
        sum+=A[i];
    }

    printf("\nSum of the Array Elements : %d",sum);

    return 0;
}