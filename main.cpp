//
//  main.cpp
//  Proj6
//
//  Created by Swetha S on 5/23/22.
//

#include <iostream>

using namespace std;

bool match(const char str1[], const char str2[])
{
  while (*str1 != 0  &&  *str2 != 0)  // zero bytes at ends
  {
      if (*str1 != *str2)  // compare corresponding characters
          return false;
      str1++;            // advance to the next character
      str2++;
      
  }
    
  return *str1 == *str2;   // both ended at same time?
}

int main() {
    char a[10] = "Ding";
           char b[10] = "Ding";

           if (match(a,b))
               cout << "They're the same!\n";
}
