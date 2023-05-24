/**************************************************************************
 
write a function for HCF
*******************************************************************************/

#include <iostream>

using namespace std;
//declaration of function

int HCF(int,int);


int main()
{
    //variable declaration
    int x,y,h,i;
    
    //input from user
    cout<<"Enter left limit (x): ";
    cin>>x;
    cout<<"Enter right limit (y): ";
    cin>>y;
    
    //output to user
    cout<<"HCF = "<<HCF(x,y);

    return 0;
}
//definning the function
int HCF(int x, int y){
    int i, h, temp;
    
    if( x > y){
        temp = y;
        y = x;
        x = temp;
    }
    
    for(i = x; i >= 1; i = i - 1){
        if((x % i  == 0) && (y % i == 0)){
            h = i;
            break;
        }
    }
    return h;
    
}
