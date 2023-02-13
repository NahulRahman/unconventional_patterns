#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int stars=1,spaces=n-1;
    for(i=1;i<2*n;i++){
        for(j=1;j<=spaces;j++){
            printf(" ");
        }for(j=1;j<2*stars;j++){
            printf("*");
        }if(i<n){
            stars++;
            spaces--;
        }else{
            stars--;
            spaces++;
        }printf("\n");
    }return 0;
}
