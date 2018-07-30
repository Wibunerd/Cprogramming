#include <iostream>
using namespace std;

int func(int base, int n){
  int p, ans;
  ans = 1;


  for(p= 1; p<= n; p++)
     ans = base*ans;
     return ans;



}


int main() {
  int a = func(4,0);
  cout << a <<'\n';


  return 0;
}
