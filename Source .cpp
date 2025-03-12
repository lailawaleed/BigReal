#include <iostream>
#include "BigReal.h"
using namespace std;
int main() {

    /*try {
        BigReal ob1("+75194.5389112"), ob2("20.923891");
        BigReal ob3("623782.209101"), ob4("-2356.3789235");
        BigReal ob5("-32.69102567"), ob6("20.32106567");
        BigReal ob7("+794.5321694"), ob8("320.923891");
        BigReal ob9("-0.492232164152"), ob10("-0.520650018");
        //BigReal ob11("+923.sd02391235");  //not valid will cout message and end program
        BigReal t1=ob1-ob2;
        BigReal t2=ob1+ob2;
        BigReal t3=ob3+ob4;
        BigReal t4=ob3-ob4;
        BigReal t5=(ob3<ob4); // t5 will equal 1 or 0 according to if ob3<ob4 true or not
        BigReal t6=(ob5>ob6);
        BigReal t7=ob9+ob10;
        BigReal t8=ob9-ob10;
        BigReal t9=(ob8<ob10);
        BigReal t10=ob4+ob10;
        BigReal t11=ob9-ob4;
        BigReal t12=(ob5>ob9);
        cout << " answer : " << t1<<endl;
        cout << " answer : " << t2<<endl;
        cout << " answer : " << t3<<endl;
        cout << " answer : " << t4<<endl;
        cout << " answer : " << t5<<endl;
        cout << " answer : " << t6<<endl;
        cout << " answer : " << t7<<endl;
        cout << " answer : " << t8<<endl;
        cout << " answer : " << t9<<endl;
        cout << " answer : " << t10<<endl;
        cout << " answer : " << t11<<endl;
        cout << " answer : " << t12<<endl;
    }
    catch (const char* error) {
        cout << error << endl;
    }*/
    try
    {
        BigReal ob1("1.0000000000"), ob2("1");
        cout<<(ob2==ob1);
    }
    catch (const char *error) {
        cout << error << endl;
    }

    return 0;
}