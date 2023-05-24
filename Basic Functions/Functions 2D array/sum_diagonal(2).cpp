#include <iostream>

using namespace std;
void input2D(int[20][20],int,int);
void print2D(int[20][20],int,int);
void array_print(int [], int);
int sum_diagonal_2D(int [20][20], int ,int, int[]);

int main()
{
    int x[20][20],y[20],z[20],n,m,k;
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    input2D(x, m, n);
    
    print2D(x, m , n);
    cout<<endl;
    
    k = sum_diagonal_2D(x,m,n,z);
    cout<<k;
    
    
    
    
    

    return 0;
}
void input2D(int a[20][20],int r ,int c){
    int i,j;

    for(i = 0; i < r; i = i + 1){
        for(j = 0 ; j < c; j = j + 1){
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
        cout<<endl;
    }
}
int sum_diagonal_2D(int a[20][20], int r, int c , int h[]){
    int i,j, sum,s;
    
    s = 0 ;
    
    for(i = 0 ; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            if(i == c-j-1){
                s= s + a[i][j];
            }
            
            
        }
        
    }
    return s;
    

    
}
void print2D(int a[20][20],int r ,int c){
    int i,j;

    for(i = 0; i < r; i = i + 1){
        for(j = 0 ; j < c; j = j + 1){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   cout<<endl;
}
void array_print(int a[],int n){
    int i;
    for(i = 0; i < n; i = i + 1){
        cout<<a[i]<<endl;
    }
}
 