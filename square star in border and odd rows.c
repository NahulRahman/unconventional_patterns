#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i%2!=0){
                printf("* ");
            }else if(j==1||j==n){
                printf("* ");
            }else{
                printf("%d ",j);
            }
        }printf("\n");
    }return 0;
}
