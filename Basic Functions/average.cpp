
#include <iostream>

using namespace std;
//declaring prototype/function
float average(int, int);

int main()
{
    int x, y ;
    float avg;
    //taking inout for x and y
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    //calling the function
    avg = average(x,y);
    //printing the output
    cout<<"average: "<<avg;
    return 0;
}
//definning the function
float average(int x, int y){
    float a;
    
    a = 1.0*(x+y)/2;
    
    return a; //returning the value to line 17
}










