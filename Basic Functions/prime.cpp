
#include <iostream>

using namespace std;
//declaring prototype/function
float average(int, int);
int prime(int);
int main()
{
    int x, p;
    
    //calling the function
    p = prime(x);
    
    //printing the output
    if(p == 1){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}
//definning the function
int prime(int x){
    int iprime, i;
    //taking input for x 
    cout<<"enter integer: ";
    cin>>x;
    
    iprime = 1;
    for(i = 2; i < x;i = i + 1){
        if(x% i == 0){
            iprime = 0;
            break;
        }
    }
    
    return iprime; //returning the value to line 13
}










