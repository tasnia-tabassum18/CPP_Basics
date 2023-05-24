#include <iostream>
#include <cstdlib>
using namespace std;

void input2D_rand(int[20][20],int,int);
void print1D(int[],int);


int arrayTOvec(int[20][20],int,int,int[]);


int main()
{
    int x[20][20],y[400],n,m,w;
    cout<<"how many rows: ";
    cin >>m;
    cout<<"how many coloumbs: ";
    cin >>n;
    
    input2D_rand(x, m, n);
    
   
    
    w = arrayTOvec(x,m,n,y);
    print1D(y,w);
    
    

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
int  arrayTOvec(int a[20][20], int r, int c,int s[]){
    int i,j,k; 
    k = 0;
    for(i = 0 ; i < r; i = i + 1){
        for(j = 0; j < c; j = j + 1){
            s[k] =  a[i][j];
            k=k+1;
        }
    }
    return k;
}
void print1D(int a[],int n){
    int i;

    for(i = 0; i < n; i = i + 1){
        cout<<a[i]<<" ";
        
        
    }
   cout<<endl;
}
