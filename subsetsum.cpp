#include <iostream>
using namespace std;
int function(int arr[],int sum, int n){
    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0) t[i][j] = false;
            if(j==0) t[i][j] = true;
        }
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j] = (t[i-1][j-arr[i-1]] || t[i-1][j]);
            }
            else{
                t[i][j]= t[i-1][j];
            }
        }
    }
    
    return t[n][sum];
    
}

int main()
{
  int n=0,sum=0;
  cin>>n;
  int arr[n];
  cout<<"Enter weights values"<<endl;
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  cout<<"Enter total knapsack value"<<endl;
  cin>>sum;
  cout<<"Subset exists: "<<endl;
  bool result =function(arr,sum,n);
  if(result==1) cout<<"true"<<endl;
  else cout<<"false"<<endl;

    return 0;
}
