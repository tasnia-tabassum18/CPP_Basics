
#include <iostream>

using namespace std;
int array_input(int[],int);

int array_frequency(int[],int,int);
int main()
{
    int x[10], n_x, n,b;
    n_x = array_input(x,n);
    b = 5;
    cout<<"Number of frequency: "<< array_frequency(x, n_x,b);
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
int array_frequency(int a[], int n){
    int i;
    for(i = 0; i < n; i = i + 1){
        if(a[i] == b){
            sum = sum + 1;
        }
    }
    return sum;
}
