#include<iostream>
using namespace std;
void search(int arr[],int lsize,int rsize,int key){
if (arr[lsize] <=key&& arr[rsize]>=key ){
int mid =(lsize+rsize)/2;//creating an intger for using as pivot
        //if the key is found in the middle
     if (key ==arr[mid]){
          cout<<"found at"<<mid;
             }
     else{
        //key is less than middle value
        if(key<=arr[mid]){
        search(arr,lsize,mid-1,key);
         }
        else{
         //key is greater than the middle value
         search(arr,mid+1,rsize,key);
         }
         }
    }  
//if the key is not within the array
  else{
      cout<<"-1";
      }
}

int main(){
int x;
cout<<"enter no: to be searched";
cin>> x;
int a[6]={4,10,45,59,60,100};
search(a,0,5,x);
}
