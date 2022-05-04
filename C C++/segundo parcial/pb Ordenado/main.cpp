#include <stdio.h>
#include <windows.h>
int main() {
    int n,nu,nua=0,p;
    int c=0,d=0;
    scanf("%d", &n);
    scanf("%d", &p);
    for(int i=0; i<n-1; i++){
        scanf("%d", &nu);
        if(p <= nu) c++;
        if(p >= nu) d++;
        p=nu;
    }
    if(c == n-1){
        printf("CRECIENTE");
    }else if(d == n-1 ){
        printf("DECRECIENTE");
    }else{
        printf("NO ORDENADA");
    }
    system("pause");
return 0;
}
