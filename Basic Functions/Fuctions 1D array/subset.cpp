#include <iostream>

using namespace std;
int array_input(int []);
int array_equal(int[],int[], int,int);

int main()
{
    int x[10], y[10], n_x,n_y,n_z,z[10],i;
   n_x = array_input(x);
   n_y = array_input(y);
   
   n_z = array_equal(x,y,n_x,n_y);
   
        if(n_z== 1){
            cout<<"subset";
        }
        else{
            cout<<"not subset";
        }
    
    
    
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


int array_equal(int a[], int b[], int n,int m){
    int j,k,i,s;
    
    s = 0;
    for(j = 0; j < m; j = j + 1){
        for(i = 0;  i< n; i = i + 1){
            if(a[i] == b[j]){
                s = s + 1;
            }
        }
    }
    if (s == m){
        return 1;
    }
    else{
        return 0;
    }
}

    



