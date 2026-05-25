#include <iostream>
using namespace std;
int main(){
   //FIND THE SMMALEST AND GREATEST NUMBER IN THE ARRAY

    // int arr[] = {5,4,3,9,2};
    // int n = sizeof(arr)/sizeof(int);
    // int max=arr[0];
    // int min=arr[0];
    // for(int i=0;i<n;i++){
    //     if(max<arr[i]){
    //         max=arr[i];
    //     }
    //     if(min>arr[i]){
    //         min=arr[i];
    //     }
        
    // }
    //     cout<<"Largest no is "<< max << endl ; 
    //     cout<<"Smallest no is "<< min << endl ;

    //LINEAR SEARCH ALGO

    // int size;
    // cout<<"Enter the size of array:";
    // cin>>size;
    // int arr[size];
    // int n=sizeof(arr)/sizeof(int);
    // int key;
    // cout<<"Enter the value you want to find:";
    // cin>> key ;
    // cout<<"Enter the values in the array";
    // for(int ind=0;ind<size;ind++){  //size = 4 --> 0,1,2,3
    //     cin>>arr[ind];
    // }
    // for(int ind=0;ind<size;ind++){
    //     cout<<arr[ind] <<endl ;
    // }
    // for (int ind=0;ind<size;ind++){
    //     if(key==arr[ind]){
    //         cout<<"key found at index:"<< ind <<endl; 
    //         break;
    //     }
    // }

    //REVERSE AN ARRAY WITH EXTRA SPACE 

    // int originalarr[] = {5,4,3,9,2}; //j
    // int n = sizeof(originalarr)/sizeof(int);
    // int  copyarr[n];
    // for (int i=0;i<n;i++){
    //     int j=n-i-1;
    //     copyarr[i]=originalarr[j];

    // }
    // for(int i=0;i<n;i++){
    //     originalarr[i]=copyarr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<originalarr[i] <<",";
    // }

    //REVERSE AN ARRAY WITHOUT EXTRA SPACE 

    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);
    int start = 0; 
    int end = n-1; 
    while(start < end){
    //  int temp = arr[start];  
     swap(arr[start],arr[end]);
    //     arr[start]=arr[end];
    //     temp=arr[end];
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}