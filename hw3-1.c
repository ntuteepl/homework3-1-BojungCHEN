#include <stdio.h>
#include <stdbool.h>
main(){
    int n,i;
    bool st=true;
    scanf("%d",&n);
    for(i=2;(i*i)<=n;i++){
        if((n%i)==0){
           st=0;
        }
    }
    if(st==0){
        printf("NO");
    }
    else{
        printf("YES");
    }
}

