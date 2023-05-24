#include <iostream>
#include <cstdlib>
using namespace std;
void input2D_rand(int[20][20],int,int);
void print2D(int[20][20],int,int);

int min2D(int[20][20],int,int);



int main()
{
    int x[20][20],n,m,minimum;
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    input2D_rand(x, m, n);
    print2D(x,m ,n);
    minimum = min2D(x, m, n);
    cout<<"minimum: "<<minimum;
    
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
int min2D(int a[20][20], int r, int c ){
    int i,j,min; 
    min = a[0][0];
    for(i = 0 ; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            if( a[i][j] < min){
               min = a[i][j];
            }
        }
    }
    return min;
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