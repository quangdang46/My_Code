// Bài 25: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n
#include <stdio.h>
int main(){
    int n,s=0;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=1; i<n; i++){
        if(n%i==0 && i%2==0){
            s+=i;
        }
    }
    printf("Gia tri s= %d",s);
}