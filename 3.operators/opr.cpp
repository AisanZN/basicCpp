#include <iostream>

using namespace std;

int main(){

   cout<<"######## opr ( + ) #######"<<endl;

    int a = 5;
    int b = 6;
    string strSum = "a + b = ";

    int sum = a+b;

    cout<<strSum<<sum<<endl;

    cout<<"######## opr ( - ) #######"<<endl;

    int c = 5;
    int d = 6;
    string strSub =  "a - b = " ;

    int sub = a - b ;

    cout<<strSub<<sub<<endl;

    cout<<"######## opr ( * ) #######"<<endl;
    
    int e = 5;
    int f = 6;
    string strMulti =  "a * b = " ;

    int multi = e * f ;

    cout<<strMulti<<multi<<endl;

    cout<<"######## opr ( / ) #######"<<endl;
    
    int g = 5;
    int h = 6;
    string strDiv =  "a / b = " ;

    int divInt = g / h ;
    float divFloat =(float) g / h ;
    double divDouble =(double) g / h ;
   // double divDouble =(double) g / 0 ;


    //ctrl + d
    cout<<strDiv<<divInt<<endl;
    cout<<strDiv<<"(float)"<<divFloat<<endl;
    cout<<strDiv<<"(double)"<<divDouble<<endl;


    cout<<"######## opr ( % ) #######"<<endl;

    
    int i = 8;
    int j = 2;
    string strMod =  "a % b = " ;

    int mod = i % j ;

    cout<<strMod<<mod<<endl;

    cout<<"######## opr ( ++ ) #######"<<endl;

    int x = 0;

    x = x + 1;

    x++;//output=2

    cout<<"++ :"<<x<<endl; 

    cout<<"######## opr ( -- ) #######"<<endl;

    int y = 2;

    y = y - 1;

    y--;//output=0

    cout<<"-- :"<<y<<endl; 

    cout<<"######## opr ( -= & += ) #######"<<endl;

    int z = 2;

    cout<<"z = "<<z<<endl; 

    z=z+2;

    cout<<"z + 2 = "<<z<<endl; 

    z += 2; // z = 6

    cout<<"z += 2 => "<<z<<endl; 

    cout<<" -=  => "<<endl; 

    cout<<"z = "<<z<<endl; // z = 6
    
    z=z-2;//z = 4

    cout<<"z + 2 = "<<z<<endl; 

    z -= 2; // z = 2

    cout<<"z += 2 => "<<z<<endl; 



    return 0;
}