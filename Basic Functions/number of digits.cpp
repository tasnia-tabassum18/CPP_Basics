
#include <iostream>

using namespace std;
//declaring function / prototype
int number_digits(int);

int main()
{

    int d, x;//declaring variables
    d = number_digits(x);//calling the function
    cout<<"number of digits: "<<d;//output to the user
    
    return 0;
}
//definning function
int number_digits(int a){
    int i , x,d;
    cout<<"Enter integer: ";
    cin>>x;
    for(i = 0; x != 0; i = i + 1){
        d = x % 10;
        x = x / 10;
    }
    return i;
}
