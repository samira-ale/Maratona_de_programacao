#include <iostream>
using namespace std;

int main() {
  int N, seg, min, h;

  cin >> N;
  
  seg = N;
  min = seg/60;
  h = min/60;

  if (seg>60){
    seg = seg%60;
  }
  
  if (min>60){
    min = min%60;
  }

  cout << h << ":" << min << ":" << seg << endl;
  
return 0;
}
