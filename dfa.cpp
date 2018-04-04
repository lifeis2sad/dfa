#include <iostream>
 
using namespace std;
 
bool dfa()
{
  int state = 0;
  bool running = true;
 
  for (char input; cin.get(input) && running; ){
  switch (state)
  {
case 0:
      if (input == '0'){
        state = 0;
        cout << "0->0" << endl;
      }
      else if (input == '1'){
        state = 1;
        cout << "0->1" << endl;
      }
      else
        return false;
      break;
 
  case 1:
    if (input == '0'){
      state = 2;
      cout << "1->2" << endl;
    }
    else if (input == '1'){
      state = 3;
      cout << "1->3" << endl;
    }
    else
      running = false;
    break;
 
  case 2:
    if (input == '0'){
      state = 4;
      cout << "2->4" << endl;
    }
    else if (input == '1'){
      state = 0;
      cout << "2->0" << endl;
    }
    else
      running = false;
    break;
 
  case 3:
    if (input == '0'){
      state = 1;
      cout << "3->1" << endl;
    }
    else if (input == '1'){
      state = 2;
      cout << "3->2" << endl;
    }
    else
      running = false;
    break;
 
  case 4:
    if (input == '0'){
      state = 3;
      cout << "4->3" << endl;
    }
    else if (input == '1'){
      state = 4;
      cout << "4->4" << endl;
    }
    else
      running = false;
    break;
  }
 
  // Состояние 0 -- принимающее.
  return state == 0;
}
}
 
int main () {
    dfa();
    return 0;
}