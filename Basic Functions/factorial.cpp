/**************************************************************************
 
write a function for factorial
*******************************************************************************/

#include <iostream>

using namespace std;
//declaration of function

int factorial(int);


int main()
{
    int x;
    
    cout<<"Enter value for x: ";
    cin>>x;
    
    cout<<x<<"! = "<<factorial(x);

    return 0;
}
//definning the function
int factorial(int x){
    int f , i;
    f = 1;
    for(i = 1; i <= x; i = i + 1){
        f = f * i;
    }
    return f;
    
}
