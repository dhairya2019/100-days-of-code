#include<iostream>
using namespace std;
int main()
{
   int a[10] ={0, 0, 0, 1, 0, 5, 0, 0 ,0, 2};
   int arr[10];
   int temp=0;
   for(int i=0;i<10;i++){
       temp=a[i];
       if(temp == 0) arr[i]=0;
        int j=i;
           while(temp>0 && j>=0){
               arr[j] = 1;
               temp = temp-1;
               --j;
           }
   }
   
   for(int k=0;k<10;k++){
       cout<<arr[k]<<" ";
   }
   
  
   
   return 0;
}
