#include<stdio.h>
int main(){
    /*int a1[]={45,85,95,65,23};
    int a2[]={45,85,95,65,23};
    int a3[]={45,85,95,65,23};
    int a4[]={45,85,95,65,23}; */
    int s=0;
    int stu[4][5] = { {45,85,95,65,23}, {15,80,92,65,23}, {45,65,84,55,73}, {56,87,84,55,63}};
    for(int i=0; i<4; i++){
        for (int j=0; j<5;j++){
            s = s + stu[i][j];
            printf("%d\t",stu[i][j]);
            printf("p=%d,%d \t",i,j);
        }
       // printf("Total : %d\n",s);
        //s=0;
        printf("\n");
    }
    //printf("%d",s);
    return 0;
}
