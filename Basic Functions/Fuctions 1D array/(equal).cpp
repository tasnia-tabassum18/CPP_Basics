

#include <iostream>

using namespace std;

int array_input(int[]);//n = array_input(x); where n is the integer and x is an array
void array_print(int);//array_print(x,n); where n is the integer and x is an array
void array_swap(int[],int[],int);//array_swap(x,y,n); where n is the integer and x, y are arrays
int array_equal(int[],int[], int);
int main()
{
   int x[10], y[10], n_x, n_y, n_e;
   
   n_x = array_input(x);
   n_y = array_input(y);
   
   n_e = array_equal(x,y,n_x);
   array_print(n_e);
   
   
   
   return 0;
}
int array_input(int a[]){
    int i, n;
    cout<<"how many elements: ";
    cin>>n;
    for(i = 0 ; i < n; i = i + 1){
        cout<<"["<<i<<"]: ";
        cin>>a[i];
    }
}
int array_equal(int a[], int b[], int n){
    int isEqual;
    isEqual = 1;
    for(i = 0; i < n; i = i + 1){
        if(a[i] != b[i]){
            isEqual = 0;
            break;
        }
    }
    return isEqual;
}
void array_print(int n ){
    if(n == 1){
        cout<<"Equal";
    }
    else{
        cout<<"not equal";
    }
}







