#include <iostream>

using namespace std;

int array_input(int[]);
int array_average(int[], int);
int array_sum(int[],int);

int main()
{
    int x[10], n_x,average;
    n_x = array_input(x);
    
    average = array_average(x,n_x);
    cout<<"average: "<<average;
    
    
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
int array_average(int a[], int n){
    int i,average;
    for(i = 0; i < n; i = i + 1){
        average = array_sum(a,n)/n;
    }
    return average;
}
int array_sum(int a[], int n){
    int i,sum;
    sum = 0;
    for(i = 0; i < n; i = i + 1){
        sum = sum + a[i];
    }
    return sum;
}