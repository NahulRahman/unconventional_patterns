#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            k=i;
        for(j=1;j<=i;j++,k++){
            printf("%d",k%2);
        }printf("\n");
    }return 0;

}
