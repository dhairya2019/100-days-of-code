#include <iostream>
using namespace std;
int function(int wt[],int val[],int W, int n){
    int t[n+1][W+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            if(i==0 || j==0) t[i][j]=0;
        }
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
            if(wt[i-1]<=j){
                t[i][j] = max((val[i-1]+t[i-1][j-wt[i-1]]),t[i-1][j]);
            }
            else{
                t[i][j]= t[i-1][j];
            }
        }
    }
    
    return t[n][W];
    
}

int main()
{
  int n=0,W=0;
  cin>>n;
  int wt[n];
  int val[n];
  cout<<"Enter weights values"<<endl;
  for(int i=0;i<n;i++){
      cin>>wt[i];
  }
  cout<<"Enter their occurences values"<<endl;
  for(int i=0;i<n;i++){
      cin>>val[i];
  }
  cout<<"Enter total knapsack value"<<endl;
  cin>>W;
  cout<<"Total profit is "<<endl;
  cout<<function(wt,val,W,n);

    return 0;
}
