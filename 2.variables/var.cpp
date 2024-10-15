// variabls == var

#include <iostream>

using namespace std;

int main(){

    //variable 
    /*
    1. char => 'A'
    1 byte = 8 bit 

    2. int => 123
    4 byte = 32 bit
    range : -2 147 438 647 - +2 147 438 648

    3. short => 123
    2 byte => 16 bit 
    range  : -32 767 - +32 768

    4. long => 123
    4 byte => 32bit
    range : -2 147 438 647 - +2 147 438 648 

    5. long long => 123
    8 byte => 64 bit
    range : 

    6. float => 1.23
    4 byte => 32 bit

    7. double => 1.23456789
    8 byte => 64 bit

    8. long double 
    12 byte or 16 byte

    9. bool => ture of false

    10. string /str => "Hello AISAN"

    11. size_t  

    */

   //######## char #######

    // char character = 'A'; 

    // char character ;
    //  //null
    // cout<<character<<endl;

    // character = 'A';
    // cout<<"char: "<<character<<endl;
    // size_t charSize = sizeof(char);
    // cout<<"charSize :"<<charSize;

   cout<<"######## int #######"<<endl;
   int zero = 0;
   cout<<"zero = "<<zero<<endl;

   size_t szero = sizeof(int);
   cout<<"intSize(byte) :"<<szero<<endl;
   cout<<"######## float #######"<<endl;
   float x = 3.14;
   cout<<"x = "<<x<<endl;
   size_t y = sizeof(float);
   cout<<"floatSize(byte)"<<y<<endl;
   cout<<"######## string #######"<<endl;
   string a = "hello";
   cout<<"a = "<<a<<endl;
   size_t h = sizeof(string);
   cout<<"stringsize(byte)"<<h<<endl;
   cout<<"######## double #######"<<endl;
   double b = 1.23456789;
   cout<<"b ="<<a<<endl;
   size_t f = sizeof(double);
   cout<<"doublesize(byte)"<<f<<endl;
   cout<<"######## bool #######"<<endl;
   bool t = true;
   cout<<"t ="<<t<<endl;
   size_t s = sizeof(bool);
   cout<<"boolsize(byte)"<<s<<endl;

    return 0;
}
