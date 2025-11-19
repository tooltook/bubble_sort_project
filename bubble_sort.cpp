#include<stdio.h>
int main()
{
    int n;
    printf("The number of numbers:");
    scanf("%d",&n);

    int bubble[n];
    printf("Please input %d number",n);
    for(int i=0;i<n;i++){
        scanf("%d",&bubble[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(bubble[j]>bubble[j+1]){
                int temp=bubble[j+1];
                bubble[j+1]=bubble[j];
                bubble[j]=temp;
            }
        }
    }

    printf("After sorting:");
    for(int i=0;i<n;i++){
        printf("%d ",bubble[i]);
    }

    return 0;
}