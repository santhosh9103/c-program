#include<stdio.h>
void santhos(void);
int santhosh =100;//it is global scoop this one is for overall for the code
int main(){
    //int sathosh=100000; this is local scoop
    printf("santhhosh has ----%d-----",santhosh);
    santhos();
}
void santhos(){
    printf("santhosh has is goodboy  %d",santhosh);
    }