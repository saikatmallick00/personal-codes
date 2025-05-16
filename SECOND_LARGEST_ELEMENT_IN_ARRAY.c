#include<stdio.h>
int main(){
    int a[100],n,max,i,second_largest;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter %d element: ",i);
        scanf("%d",&a[i]);
    }
    // max=a[0];
    // for (i = 0; i < n; i++)
    // {
    //     if (a[i]>max)
    //     {
    //         max=a[i];
    //     }    
    // }
    //     second_largest=a[0];
    // for (i = 0; i < n; i++)
    // {
    //     if (a[i]>second_largest && a[i]!=max)
    //     {
    //         second_largest=a[i];
    //     }    
    // }
    max=-10000000;
    second_largest=-10000000;
    for (i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            second_largest=max;
            max=a[i];
        }else if (a[i] > second_largest && a[i] != max) {
            second_largest = a[i];
        }    
    }
    if (second_largest =-10000000){
        printf("\nThere is no second largest element in array");
    }else{
        printf("\nThe second largest element in this array is: %d",second_largest);
    }
    return 0;
}        