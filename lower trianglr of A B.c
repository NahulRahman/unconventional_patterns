#include<stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        k=1;
        for(j=i;j<=n;j++,k++){
            if(k%2==0){
                printf("B ");
            }else{
                printf("A ");
            }
        }printf("\n");
    }return 0;
}
