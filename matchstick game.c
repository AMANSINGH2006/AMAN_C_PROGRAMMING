#include<stdio.h>
void main(){
    int m=21,p,c;
    while(1){
       // printf("\n number of matchstick %d",m);
        printf("\n pick the matchstick 1,2,3 or 4");
        scanf("%d",&p);
        if(p>4||p<1){
            continue;}
            m=m-p;
        printf("\n number of matchstick left %d",m);
        c=5-p;
        printf("\n number of matchstick choosen by computer %d",c);
        m=m-c;
        printf("\n number of matchstick left %d",m);
        if(m<=1){
        printf("\n you loses the game ");
        break;}}}