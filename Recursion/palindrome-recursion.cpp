#include<bits/stdc++.h>
using namespace std;

class Solution {

  public:

  int sumofDigit(int N){

      int sum=0;

      int temp=N;

      while(temp!=0){

          int x=temp%10;

          sum+=x;

          temp=temp/10;

      }

      return sum;

  }

  int intToString(int N){

      string convertdNum=to_string(N);

      string reverseString=convertdNum;

      reverse(reverseString.begin(),reverseString.end());

      return reverseString==convertdNum ? 1 : 0;

  }

    int isDigitSumPalindrome(int N) {

        // code here

        int ans=sumofDigit(N);

        intToString(ans);

    }

};