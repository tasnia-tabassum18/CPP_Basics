/**************************************************************************
 
write a function for power
*******************************************************************************/

#include <iostream>

using namespace std;
//declaration of function

int power(float,int);


int main()
{
    int p , y ;
    float x;
    
    cout<<"Enter value for x: ";
    cin>>x;
    cout<<"Enter value for y: ";
    cin>>y;
    
    cout<<"power: "<<power(x,y);

    return 0;
}
//definning the function
int power(float x, int y){
    int p , i;
    p = 1;
    for(i = 1; i <= y; i = i + 1){
        p = p * x;
    }
    return p;
    
}
