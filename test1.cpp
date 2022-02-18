
#include<iostream>
#include<cstring>
using namespace std ;
int n ;
int key ;
int binery(int array ,int n , int key){
int s = 0;
int k = n;
  int mid ;
while (s<=k)
{
    int mid = (s+k)/2 ;
    if(key==mid){


        return mid ; }
        else if(mid>key){

        k = mid - 1;
    }else{
        s=mid+1;
    }


return -1;


}
    int main(){
        
        cout<<"enter the array size "   ;   
cin>>n;
int array[n];
for (int  j = 0; j < n; j++)
{
    cin>>array[j];
}
cout<<"enter the key ";
cin>>key;


cout<<binery(array,n,key);
 return 0 ;}