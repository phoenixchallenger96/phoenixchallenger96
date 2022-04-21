#include<iostream>
using namespace std;
int main(){
    int i = 65;
    char c = i; // typecasting of int to char (implicit typecast)
    cout << c << endl;

    // int *p = &i;
    // char * pc = p; // It gives error because we are trying to typecast int * to char * which compiler doesn't want.

    // Explicit typecast of pointers
    int *p = &i;
    char *pc = (char*)p; // this is valid

    cout << p << endl;//prints address
    cout << pc << endl;//  prints value stored upto null character.

    cout << *p << endl;// This gives value stored at p i.e 65
    cout << *pc << endl;// Here 1st byte of int gets 65 because of Little Endian system.(where least significant byte is stored first).
    cout << *(pc+1) << endl;//these all print 0 which is null character
    cout << *(pc+2) << endl;//these all print 0 which is null character
    cout << *(pc+3) << endl;//these all print 0 which is null character
}