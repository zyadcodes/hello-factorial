/*
 * factorial definition
 *
 * @author Yusuf Pisan
 * @date 20 Jan 2020
 */

#include "factorial.h"
#include <iostream>

using namespace std;

int fact(int n) {
  if (n < 30) {
    if (n <= 1) {
      return 1;
    }  
    return n * fact(n - 1);
  }
  cout << "Too large: " << n << endl;
  return -1;
}

int memoryLeakFunction() {
  int *arr = new int[10];
  for (int i = 0; i < 10; i++) {
    arr[i] = i;
  }
  cout << "Hello World" << endl;
  cout << "Fact 5: " << fact(5) << endl;
  // memory leak if we do not delete it
  // delete(Arr);
  return 0;
}

