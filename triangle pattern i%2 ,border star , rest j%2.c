#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%2==0) printf("* ");
            else if(j==1||j==i) printf("* ");
            else printf("%d ",j%2);
        }printf("\n");
    }return 0;
}
