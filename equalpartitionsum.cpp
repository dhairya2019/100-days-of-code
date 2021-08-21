#include <iostream>
using namespace std;
int function(int arr[],int sum, int n){
    int t[n+1][sum+1];
    if(sum%2==0){
        sum=sum/2;
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
    if(t[n][sum]==true) return true;
    else return false;
    }
    return false;
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
  for(int j=0;j<n;j++){
     sum = sum+arr[j];
  }
  cout<<"Equal sum exists: "<<endl;
  bool result =function(arr,sum,n);
  if(result==1) cout<<"true"<<endl;
  else cout<<"false"<<endl;

    return 0;
}
