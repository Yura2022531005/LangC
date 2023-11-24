#include <stdio.h>

int main(){
    for(int i=1;i<=25;i++){
        if(i%3==0){
            printf("%d\n",i);
        }
    }

    int j = 26;
    while(j<=50){
        if(j%3==0){
            printf("%d\n",j);
        }
        j++;
    }
    return 0;
}