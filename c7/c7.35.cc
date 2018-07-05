/*
 * Exercise 7.35: Explain the following code, indicating which definition of Type or
 * initVal is used for each use of those names. Say how you would fix any errors.
 * typedef string Type;
 * Type initVal();
 * class Exercise {
 * public:
 *      typedef double Type; // error
 *      Type setVal(Type);
 *      Type initVal();
 * private:
 *      int val;
 * };
 * 
 * Type Exercise::setVal(Type parm) {
 *      val = parm + initVal();  // val of int type
 *      return val;
 * }
*/

#include <string>
using namespace std;

typedef string Type;
Type initVal(){return "1";}

class Exercise {
public:
    Type setVal(Type);
    Type initVal();
private:
    Type val;
};

Type Exercise::setVal(Type parm) {
    val = parm + ::initVal();
    return val;
}

int main(void)
{
    return 0;
}