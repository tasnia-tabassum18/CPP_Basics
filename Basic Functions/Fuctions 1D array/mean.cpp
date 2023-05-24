#include <iostream>

using namespace std;

int array_input(int[]);
float array_mean(int[], int);
int array_sum(int[],int);

int main()
{
    int x[10], n_x;
    float m;
    n_x = array_input(x);
    
    m = array_mean(x,n_x);
    cout<<"Mean: "<<m;
    
    
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
float array_mean(int a[], int n){
    int i;
    float mean;
    for(i = 0; i < n; i = i + 1){
        mean = 1.0*array_sum(a,n)/n;
    }
    return mean;
}
int array_sum(int a[], int n){
    int i,sum;
    sum = 0;
    for(i = 0; i < n; i = i + 1){
        sum = sum + a[i];
    }
    return sum;
}
