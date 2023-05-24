#include <iostream>

using namespace std;
int array_input(int[]);
//void array_print(int[], int);
int array_sum(int[],int);
int main()
{
    int x[10], n_x,b;
    n_x = array_input(x);
    
    b = array_sum(x,n_x);
    cout<<"Sum of arrays: "<<b;
    
    //array_print(y,n_x);
    return 0;
}
int array_input(int a[]){
    int i,n;
    cout<<"how many elements: ";
    cin>>n;
    
    for(i = 0; i < n; i = i + 1){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
    return n;
}
int array_sum(int a[], int n){
    int i,sum;
    sum = 0;
    for(i = 0; i < n; i = i + 1){
        sum = sum + a[i];
    }
    return sum;
}