#include <iostream>

int main() {
  
  // [Datatype]
  
  
  // <number integer>
  // * int  usually 4byte
  // short 
  // long 
  // long long 
  // unsigned int

  // <number floating-point>
  // * float usually 4byte
  // * double  8byte

  // <character>
  // char name = k;
  // * char[20] name2 = "kelly";   // Java string

  // <boolean>
  // * bool

  // <void>
  // void

  // [Decleration]
  // [datatype] [variable_name] = [value];
  int a = 5;
  const double pi = 3.141592;

  // [Operator]
  a = pi;
  // * / + - %
  // += /= -= *=
  a += pi; // a = a + pi

  // a++;  a += 1;  a = a + 1
  
  // ++ --
  a = 5;
  std::cout << a << std::endl;  // 5
  std::cout << ++a << std::endl;  // 6
  // a++
  // std::cout << a << std::endl;
  std::cout << a++ << std::endl;  // 6
  std::cout << a << std::endl;  // 7

  char *name =n"minsoo";
  name = "kelly";
  return 0;
}