#include <iostream>
#include <cstdlib>
using namespace std;
void input2D_rand(int[20][20],int,int);
void print2D(int[20][20],int,int);

int max2D(int[20][20],int,int);



int main()
{
    int x[20][20],n,m,maximum;
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    input2D_rand(x, m, n);
    print2D(x,m ,n);
    maximum = max2D(x, m, n);
    cout<<"maximum: "<<maximum;
    
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
int max2D(int a[20][20], int r, int c ){
    int i,j,max; 
    max = a[0][0];
    for(i = 0 ; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            if( a[i][j] > max){
               max = a[i][j];
            }
        }
    }
    return max;
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