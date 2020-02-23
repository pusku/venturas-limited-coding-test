#include <bits/stdc++.h>
using namespace std;

string FizzBuzz(int num) {

  for(int i=1;i<=num;i++){
    if(i%3==0 && i%5==0){
      cout<<"FizzBuzz";
    }else if(i%3==0){
      cout<<"Fizz";
    }else if(i%5==0){
      cout<<"Buzz";
    }else{
      string str=to_string(i);
      cout<<str;
    }
   cout<<" ";
  }
  return "";
}

int main() {

  // keep this function call here
  cout << FizzBuzz(gets(stdin));
  return 0;

}
