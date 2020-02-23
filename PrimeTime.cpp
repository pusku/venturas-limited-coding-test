#include <iostream>
#include <string>
using namespace std;

string PrimeTime(int num) {

  int half = num/2;
  for(int i=2;i<half;i++){
    if(num%i==0){
      return "false";
    }
  }
   return "true";

}

int main(void) {

  // keep this function call here
  cout << PrimeTime(gets(stdin));
  return 0;

}
