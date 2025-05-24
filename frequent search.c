#include<stdio.h>
int main(){
    int a[100],i,n,j,l;
    int visited[100] = {0};
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        if(visited[i] == 1)
            continue;
        l = 1;
        for(j=i+1;j<n;j++){
            if(a[i] == a[j]){
                l++;
                visited[j] = 1;
            }
        }
        printf("Element %d occurs %d times\n", a[i], l);
    }
    return 0;
}
