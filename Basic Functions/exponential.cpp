#include <iostream>
using namespace std;
//declaring prototype/function

int exponential(int);
int factorial(int);
float exponential(float)
float power(float, int)
int main()
{
    float x;
     inty
    
    //taking input for x 
    cout<<"enter integer for x: ";
    cin>>x;
    
    
    //calling the function
     expo = exponential(x)
    
    //printing the output
    cout<<"e^"<<x<<": "<<expo;

    
    return 0;
}
//definning the function
float exponential(float x){
    int i, sum;
    sum = 1;
    for(i = 0 ; i <=5 ; i = i + 1){
        sum = sum + power(x,i)/factorial(i);
    }
    return sum
}
int factorial(int x){
    int f , i;
    f = 1;
    for(i = 1; i <= x; i = i + 1){
        f = f * i;
    }
    return f;
    
}
int power(float x, int y){
    int p , i;
    p = 1;
    for(i = 1; i <= y; i = i + 1){
        p = p * x;
    }
    return p;