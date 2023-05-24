#include <iostream>

using namespace std;
//declaring prototype/function

int LCM(int, int);
int main()
{
    int x, y, num;
    
    //taking input for x 
    cout<<"enter integer for x: ";
    cin>>x;
    cout<<"enter integer for y: ";
    cin>>y;
    
    //calling the function
    num = LCM(x,y);
    
    //printing the output
    cout<<"LCM of "<<x<<","<<y<<": "<<num;
    
    return 0;
}
//definning the function
int LCM(int x,int y){
    int i,swap;
    if(y < x){
        swap = x;
        x = y;
        y = swap;
    }
    for(i = x; i < x*y;i = i + 1){
        if((i% x == 0)&&(i % y == 0)) {
            
            break;
        }
    }
    
    return i; //returning the value 
}








