#include <iostream>

using namespace std;
int array_input(int[],int);

int array_max(int[],int);
int main()
{
    int x[10], n_x,n,m;
    n_x = array_input(x,n);
    m = array_max(x, n_x);
    
    cout<<"maximum value: "<<m;
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
int array_max(int a[], int n){
    int i, maximum;
    maximum = a[0];
    for(i = 0; i < n; i = i + 1){
        if( a[i] > maximum){
            maximum = a[i];
        }
    }
    return maximum;
}
