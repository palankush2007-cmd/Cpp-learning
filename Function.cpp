#include <iostream>
using namespace std;
bool isPalindrome (int num ){
    int original = num;
    int reverse = 0;
    while (num > 0){
        int digit = num % 10;
        reverse = reverse *10+digit;
        num= num/10;
    }
    return original == reverse;
}

// int sumfodigit(int number){
//     int result=0;
//     while(number!=0){
//        result= result+number%10
//         number=number/10;
//     }
//      return result;
// }

// void largestnumber(int a, int b,int c){
//     if(a>b && a>c){
//     cout<<"A is the largest number.";
//     }else if(b>c){
//         cout<<"B is the largest number.";
//     }else {
//         cout<<"C is the lagest number.";
//     }
// }

// void formula (int a, int b){
//     int ans ;
//     ans = pow(a,2)+pow(b,2)+2*a*b;
//     cout<< ans <<endl;
// }

// char  alphabet(char ch){
//     if(ch =='z'){
//         return 'a' ;
//     }else{
//          return ch + 1 ;
//     }
// }


int main(){
   int number;
   cout<<"Enter a number:";
   cin>>number;
     if (isPalindrome(number))
        cout << number << " is a Palindrome number." <<endl ;
    else
        cout << number << " is not a Palindrome number." <<endl ;

    // largestnumber(3,4,5);
    // formula (2,2);
    // cout << alphabet('b') <<endl;
    //    cout << sumfodigit(12345);
    return 0;
}