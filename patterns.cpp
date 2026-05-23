#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value:";
cin>>n;
bool start = 1; 
for(int i=0;i<n;i++){
    bool curr=start;
    for(int j=0;j<=i;j++){
        if(j%2==0)
        cout<<curr;
        else
        cout<<!curr;
    }
    cout<<endl;
    start=!start;
}

//  for(int i=0;i<n;i++){
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
//     }
//     for(int j=0;j<n;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//  }

for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<"  ";
    }
    int val=i+1;
    while(val>=2){
        cout<<val<<" ";
        val--;
    }
    while(val<=i+1){
        cout<<val<<" ";
        val++;
    }
    cout<<endl;
}
    return 0;
}