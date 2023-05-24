
#include <iostream>

using namespace std;

int array_input(int[]);//n = array_input(x); where n is the integer and x is an array
int array_print(int[],int);//array_print(x,n); where n is the integer and x is an array
void array_swap(int[],int[],int);//array_swap(x,y,n); where n is the integer and x, y are arrays

int main()
{
    int x[10], y[10], n_x, n_y;
    
    n_x = array_input(x);
    n_y = array_input(x);

    cout<<"********before swap********"<<endl;
    cout<<"********X********"<<endl;
    array_print(x,n_x);
    cout<<"********Y********"<<endl;
    array_print(y,n_y);
    
    array_swap(x,y,n_x);
    cout<<"********after swap********"<<endl;
    cout<<"********X********"<<endl;
    array_print(x,n_x);
    cout<<"********Y********"<<endl;
    array_print(y,n_y);

    return 0;
}
void array_swap(int a[],int b[],int n){
    int i , temp;
    for(i = 0 , i < n, i++){
        temp = a[i];
        a[i] = b[i];
        b[i]= temp;
    }
    
}
int array_input(int a[]){
    cout<<"how many elements: ";
    cin>>n;
    for(i = 0 , i < n, i++){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
void array_print(int a[],int n){
    int i;
    for(i = 0 , i < n, i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
















