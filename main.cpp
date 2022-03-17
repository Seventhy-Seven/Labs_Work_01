#include <iostream>
using namespace std;

int main(void) {

 setlocale(LC_ALL, "Russian");

 int a = 2, b = 5;

 void obmen1(int, int);
 void obmen2(int*, int*);
 void obmen3(int&, int&);

 cout << "Before exchange: a = " << a << ", b = " << b << endl; //до обмена

 obmen1(a, b);
 cout << "After exchange 1 : a = " << a << ", b = " << b << endl; //после обмена 1

 int* ptr = &a;
 int* ptr2 = &b;

 obmen2(ptr , ptr2);
 cout << "After exchange 2 : a = " << a << ", b = " << b << endl;

 int &ptr3 = a;
 int &ptr4 = b;

 obmen3(ptr3, ptr4);

 cout << "After exchange 3 : a = " << a << ", b = " << b << endl;

}

void obmen1(int x, int y) {
 int a = x, b = y;
 a = a + b;
 b = a - b;
 a = a - b;


}
void obmen2(int* x, int* y) {
 int buff;
 buff = *x;
 *x = *y;
 *y = buff;
}
void obmen3(int& x, int& y) {
 int bff;
 bff = x;
 x = y;
 y = bff;
}
