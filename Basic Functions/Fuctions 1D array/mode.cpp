//find the mode of the set

#include <iostream>

using namespace std;
int array_mode(int [], int [], int );
int array_frequency(int[],int,int);
int digits(int , int[]);
int array_max(int[], int);

int main()
{
    int x[10],y[10],a,d,mode;
    
    cout<<"Enter integer: ";
    cin>>a;
    
    d = digits(a,x);
    mode = array_mode(x,y,d);
    cout<<"Mode of the set: "<<mode;
    return 0;
}
int array_mode(int x[], int y[], int n){
    int i,f;
    for(i = 0; i < 10; i = i + 1){
        y[i] = array_frequency(x,n,i);
    }
    f = array_max(y,10);
    return f;
}
int array_frequency(int a[],int n,int b){
    int i,sum;
    sum = 0;
    for(i = 0; i < n; i = i + 1){ 
        if(a[i] == b){
            sum = sum + 1;
        }
    }
    return sum;
}
int digits(int x, int a[]){
    int i,d;
    for(i = 0; x > 0;i = i +1){
        d = x%10;
        a[i] = d;
        x=x/10;
    }
    return i;
}
int array_max(int x[], int n){
    int i, max_index;
    max_index = 0;
    for(i = 1; i < n; i = i + 1){
        if(x[i] > x[max_index]){
            max_index = i;
        }
    }
    return max_index;
}