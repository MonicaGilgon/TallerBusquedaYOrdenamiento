//Monikilla
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  string order, s;
  while(getline(cin >> ws, order)){
    getline(cin, s);
    int repetidas = 0;
    for(int i = 0; i < order.size(); i++){
      for(int j = 0; j < s.size(); j++){
        if(order.at(i) == s.at(j)){
          char aux = s.at(repetidas);
          s[repetidas] = order.at(i);
          s[j] = aux;
          repetidas++;
        }
      }
    }
    cout << s << endl;
  }
  return 0;
}  
