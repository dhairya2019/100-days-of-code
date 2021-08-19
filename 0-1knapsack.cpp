#include <iostream>
using namespace std;
int knapsack(int wt[],int val[],int W, int n){
    if(n==0 || W==0) return 0;
    
    if(wt[n-1]<=W){
        return max((val[n-1]+knapsack(wt,val,W-wt[n-1],n-1)),knapsack(wt,val,W,n-1));
    }
    
    else if(wt[n-1]>W){
        return knapsack(wt,val,W,n-1);
    }
    
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
  cout<<knapsack(wt,val,W,n);

    return 0;
}
