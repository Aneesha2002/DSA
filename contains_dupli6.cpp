/*You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. 
There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.*/
#include<iostream>
using namespace std;
int main(){
   int n,i;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
    cin>>a[i];
   for(i=0;i<n;i++)
    a[a[i]%n]=a[a[i]%n]+n; 
    cout<<"The duplicate element is:";
   for(i=0;i<n;i++){ 
if((a[i]/n)>1)
cout<<i<<endl;}
}
