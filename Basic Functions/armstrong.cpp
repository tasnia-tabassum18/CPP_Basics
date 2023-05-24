
#include <iostream>

using namespace std;
//declaring prototype/function
int armstrong(int);

int main()
{
    int x, num;
    
    //taking input for x 
    cout<<"enter integer for x: ";
    cin>>x;
    //cout<<"enter integer for y: ";
    //cin>>y;
    
    //calling the function
    num = armstrong(x);
    
    //printing the output
    if(num == x){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    
    return 0;
}
//definning the function
int armstrong(int x){
    int i,sum, temp,d;
     sum = 0;
    temp = x;
    for(i = 0; x != 0; i = i + 1){
        if(x != 0){
            d = x % 10;
            sum = sum + (d*d*d);
            x = x/10;
        }
    }
    
    return sum; //returning the value 
}