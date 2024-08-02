#include<stdio.h>
int jumble(int x, int y) //function definition
{
    x=2*x+y;
    return (x);
}
//firstly control will go to main function 
    int main() //In this line i have used "int" because return type is an int 
    {
        int x=2,y=5;
        y=jumble(y,x);
        x=jumble(y,x);
        printf("output=%d",x);
        return 0;
    }