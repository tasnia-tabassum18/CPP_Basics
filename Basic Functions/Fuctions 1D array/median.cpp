#include <iostream>

using namespace std;
int array_input(int[]);
float array_median(int [], int);//finding median
void selection_sort(int[],int);//from ascending to descending order
void array_print(int[], int);
int main()
{
    int x[10],n;
    float med;
    n = array_input(x);
    array_print(x,n);
    
    selection_sort(x, n);
    array_print(x,n);
    
    med = array_median(x,n);
    cout<<"Median: "<<med;
    
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
    cout<<endl;
    return n;
}
float array_median(int a[],int n){
    int i;
    for(i = 0 ; i < n; i = i +1){
        if(n % 2 != 0){
            return a[n/2];
        }
        else{
            return (a[(n-1)/2] + a[n/2])/2.0;
        }
    }
}
void selection_sort(int a[], int n){
    int i, j, temp, max_ind;
    for(i = 0; i < n; i = i + 1){
        max_ind = i;
        for(j = i + 1; j < n; j = j + 1){
            if( a[j] < a[max_ind]){
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