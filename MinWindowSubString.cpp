#include <bits/stdc++.h>
using namespace std;
const int asc_max = 256;

vector<int> first_cnt(asc_max, 0);
vector<int> second_cnt(asc_max, 0);
string MinWindowSubstring(string strArr[]) {

  int count = 0,begin = 0,minb = 0,minw = numeric_limits<int>::max();

  for(const auto& c: strArr[1]){
    ++first_cnt[c];
  }

  for(int i=0;i<strArr[0].length();++i){
    if(first_cnt[strArr[0][i]]>0){
      ++second_cnt[strArr[0][i]];
      if(second_cnt[strArr[0][i]] <= first_cnt[strArr[0][i]]){
        ++count;
      }
    }
    if(count == strArr[1].size()){
      while(first_cnt[strArr[0][begin]] == 0||second_cnt[strArr[0][begin]]> first_cnt[strArr[0][begin]]){
        --second_cnt[strArr[0][begin]];
        ++begin;
      }

      if(minw > i - begin +1){
        minw = i - begin + 1;
        minb = begin;
      }
    }
  }
  if(minw == numeric_limits<int>::max()){
    return "";
  }
  return strArr[0].substr(minb,minw);

}

int main(void) {

  // keep this function call here
  /* Note: In C++ you first have to initialize an array and set
     it equal to the stdin to test your code with arrays. */

  string A[] = gets(stdin);
  cout << MinWindowSubstring(A);
  return 0;

}
