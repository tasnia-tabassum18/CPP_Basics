
#include <iostream>

using namespace std;
//declaring prototype/function
int perfect(int);

int main()
{
    int x, num;
    
    //taking input for x 
    cout<<"enter integer for x: ";
    cin>>x;
    //cout<<"enter integer for y: ";
    //cin>>y;
    
    //calling the function
    num = perfect(x);
    
    //printing the output
    if(num == x){
        cout<<"Perfect";
    }
    else{
        cout<<"not perfect";
    }
    
    return 0;
}
//definning the function
int perfect(int x){
    int i,sum;
    sum = 0;
    for(i = 1; i < x; i = i + 1){
        if(x%i==0){
            sum = sum + i;
        }
    }
    
    return sum; //returning the value to line 19
}










