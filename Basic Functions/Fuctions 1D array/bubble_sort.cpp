#include <iostream>

using namespace std;

int array_input(int[],int);
void bubble_sort(int[], int);
void array_print(int[], int);

int main()
{
    int x[10], n_x,n;

    n_x = array_input(x,n);
    array_print(x,n_x);

    bubble_sort(x, n_x);
    array_print(x,n_x);

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
    cout<<endl;
    return n;
}
void bubble_sort(int a[], int n){
    int i, temp;
    for(i = 0; i < n; i = i + 1){
        if( a[i] > a[i + 1]){
            temp = a[i];
            a[i] = a[i +1];
            a[i + 1] = temp; 
        }
    }
    
}
void array_print(int a[], int n){
    int i;
    for(i = 0; i < n; i = i + 1){
        cout<<"a["<<i<<"]: "<<a[i];
        cout<<endl;
    }
    cout<<endl;
}
