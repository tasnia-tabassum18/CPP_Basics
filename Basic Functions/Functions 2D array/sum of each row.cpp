#include <iostream>
#include <cstdlib>
using namespace std;

void input2D_rand(int[20][20],int,int);
void print1D(int[],int);
void print2D(int [20][20], int , int);

int sum_of_rows(int[20][20],int,int,int[]);


int main()
{
    int x[20][20],y[10],n,m,n_s;
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    input2D_rand(x, m, n);
    
    print2D(x, m , n);
    
    n_s = sum_of_rows(x,m,n,y);
    
    print1D(y,n_s);
    

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
int sum_of_rows(int a[20][20], int r, int c,int p[]){
    int i,j,y;
    
  
    y = 0;
    for(i = 0 ; i < r; i = i + 1){
        
        for(j = 0; j < c; j = j + 1){
                y = y + a[i][j];
            
        }
        p[i] = y;
        y = 0;
    }
    
    return i;
}

void print2D(int a[20][20], int r, int c){
    int i,j;

    for(i = 0; i < r; i = i + 1){
        for(j = 0; j < c; j = j +1){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   
}
void print1D(int a[], int n){
    int i,j;

    for(i = 0; i < n; i = i + 1){
        
            cout<<a[i]<<" ";
            cout<<endl;
    }
   
}