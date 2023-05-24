#include <iostream>
#include <cstdlib>
using namespace std;

void input2D_rand(int[20][20],int,int);
void print2D(int[],int);


int sum_of_coloumbs(int[20][20],int,int,int[]);


int main()
{
    int x[20][20],y[20],n,m,n_y;
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    input2D_rand(x, m, n);
    
   // print2D(x, m , n);
    
    n_y = sum_of_coloumbs(x,m,n,y);
    print2D(y,n_y);
    
    

    return 0;
}
void input2D_rand(int a[20][20],int r ,int c){
    int i,j;

    for(i = 0; i < r; i = i + 1){
        for(j = 0 ; j < c; j = j + 1){
            a[i][j]= rand()%10;
        }
        cout<<endl;
    }
    cout<<endl;
}
int sum_of_coloumbs(int a[20][20], int r, int c,int y[20]){
    int i,j,sum; 
    sum = 0;
    for(i = 0 ; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            sum = sum + a[i][j];
        }
        y[i] = sum;
        sum = 0;
    }
    return i;
}
void print2D(int a[] , int n){
    int i;

    for(i = 0; i < n; i = i + 1){
        //for(j = 0 ; j < c; j = j + 1){
            cout<<a[i]<<" ";
        
        cout<<endl;
    }
}