#include <iostream>

using namespace std;
int array_input(int[],int);
void array_print(int[], int);
void array_copy(int[],int[],int);
int main()
{
    int x[10], n_x,y[10],n_y, n,b;
    n_x = array_input(x,n);
    
    array_copy(y,x,n_x);
    array_print(y,n_x);
    return 0;
}
int array_input(int a[],int n){
    int i;
    cout<<"how many elements: ";
    cin>>n;
    
    for(i = 0; i < n; i = i + 1){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
    return n;
}
void array_copy(int b[],int a[], int n){
    int i;
    for(i = 0; i < n; i = i + 1){
        b[i] = a[i];
    }
}
void array_print(int a[],int n){
    int i;
    for(i = 0; i < n;i = i + 1){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
    