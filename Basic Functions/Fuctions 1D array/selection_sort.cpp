#include <iostream>

using namespace std;
int array_input(int[],int);

void selection_sort(int[],int);
void array_print(int[], int);
int main()
{
    int x[10], n_x,n;
    n_x = array_input(x,n);
    array_print(x,n_x);
    selection_sort(x, n_x);
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
void selection_sort(int a[], int n){
    int i, j, temp, max_ind;
    for(i = 0; i < n; i = i + 1){
        max_ind = i;
        for(j = i + 1; j < n; j = j + 1){
            if( a[j] > a[max_ind]){
                max_ind = j;
            }
        }
        temp = a[i];
        a[i] = a[max_ind];
        a[max_ind] = temp;
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
