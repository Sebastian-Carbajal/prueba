#include <iostream>
#include <cassert>
#include <string>
using namespace std::literals;

int main () {
//  Aseveraciones con los distintos tipos de datos 

//  bool
    assert(true and not false == true);
    assert(not true or false != true);
    assert(true or false and false);
    assert(not(true or false) == not true and not false);

//  char
    assert('@' + 1 == 'A'); // (@ -> alt + 64) && (A -> alt + 65 )
    assert('@' == 94 - 30);
    assert('$' + 2 >= '#'); // (# -> alt + 35) && ($ -> alt + 36)
    assert('a' + 'c' == 196); //  (alt + 97 --> a) && (alt + 98 --> b)
 
//  unsigned
    assert(500u % 2u != 1u );
    assert(0u - 4u + 2u * 6u/2u/3u * 3u == 2u);
    assert(8u - 2u * 2u >= 0u);

//  int
    assert(500 % 2 == 72/9 - 8);
    assert(170 - 1  <= 13 * 13);
    assert(16 % 2 + 1 != 0);

//  double
    assert(1e-5 >= 0);
    assert(1.5 * 0.25 == 0.375);
    assert(1.0000000001 - 0.0000000001 == 1);
    
//  string 
    assert("Hi World"s.length() == 8u);
    assert("acido desoxirribonucleico"s.length() >= 25u);
    assert("Grupo "s + "Facha"s == "Grupo Facha"s);

}