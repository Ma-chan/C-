#include <iostream>
int main(void){
    // Your code here!
    int N,Y,x,y,z;
    scanf("%d %d",&N,&Y);
    
    if(N==x+y+z){
        if(Y==10000*x+5000*y+1000*z){
            printf("%d %d %d",x,y,z);
        }else{
            printf("%d %d %d",-1,-1,-1);
        }
    }else{
        printf("%d %d %d",-1,-1,-1);
    }
}
