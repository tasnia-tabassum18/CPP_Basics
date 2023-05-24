#include <iostream>
#include <cstdlib>
using namespace std;
void input2D_rand(int[20][20],int,int);
void print2D(int[20][20],int,int);

void range_frequency_2D(int[20][20],int,int,int[]);
void print1D(int[],int);


int main()
{
    int x[20][20],n,m,y[400];
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    input2D_rand(x, m, n);
    print2D(x,m ,n);
    range_frequency_2D(x, m, n, y);
    print1D(y,10);
    
    return 0;
}
void input2D_rand(int a[20][20],int r ,int c){
    int i,j;

    for(i = 0; i < r; i = i + 1){
        for(j = 0 ; j < c; j = j + 1){
            a[i][j]= rand()%10;
        }
        
    }
}
void range_frequency_2D(int a[20][20], int r, int c, int f[]){
    int i,j,p; 
    for( p = 0; p < 10; p = p +1){
        f[p] = 0;
        for(i = 0 ; i < r; i = i + 1){
            for(j = 0; j < c; j = j + 1){
                if( a[i][j] == p){
                    f[p] = f[p] + 1;
                }
            }
        }
    }
}
void print2D(int a[20][20],int r ,int c){
    int i,j;

    for(i = 0; i < r; i = i + 1){
        for(j = 0 ; j < c; j = j + 1){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   
}
void print1D(int a[],int n){
    int i;

    for(i = 0; i < n; i = i + 1){
        cout<<"Frequency of integer "<<i<<" is "<<a[i]<<endl;
    }
}