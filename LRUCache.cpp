
#include <bits/stdc++.h>
using namespace std;
vector<string> myvector;

string LRUCache(string strArr[]) {

  vector<string> sVector;
  vector<string> v;
  size_t ii = 0;

  while (!strArr[ii].empty())
    ++ii;

  sVector.assign(strArr, strArr+ii);

  for(int i=0;i<sVector.size();i++){
    if(count(v.begin(), v.end(), strArr[i])){
      v.erase(remove(v.begin(), v.end(), strArr[i]), v.end());
      v.push_back(strArr[i]);
    }else{
      v.push_back(strArr[i]);
    }
  }
  int ss=1,k=1;
  for (vector<string>::const_iterator i = v.begin(); i != v.end(); ++i){

    if(v.size()>=5){
      int z = v.size()-ss;
      if(z<5){

          cout << *i;
          if(k<5){
            cout <<'-';
          }

           k++;
      }
    }else{
      cout << *i;
      if(ss<v.size()){
        cout <<'-';
      }
    }
    ss++;
  }
  return "";
}

int main(void) {

  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set
     it equal to the stdin to test your code with arrays. */

  string A[] = gets(stdin);
  cout << LRUCache(A);
  return 0;

}
