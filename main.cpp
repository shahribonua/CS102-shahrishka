#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int intNumber = 25;

   float floatNumber = 3.14f;

   double doubleNumber = 45.1234;

   bool boolean = true;

   char charName = 'A';

   cout << "intNumber = " << intNumber
        << ", Size = " << sizeof(intNumber) << " bytes" << endl;

   cout << "floatNumber = " << floatNumber
        << ", Size = " << sizeof(floatNumber) << " bytes" << endl;

   cout << "doubleNumber = " << doubleNumber
        << ", Size = " << sizeof(doubleNumber) << " bytes" << endl;

   cout << "boolean = " << boolean
        << ", Size = " << sizeof(boolean) << " bytes" << endl;

   cout << "charName = " << charName
        << ", Size = " << sizeof(charName) << " byte" << endl;

   cout<< "problem 2" << right << setw(10) << endl;
     cout << "“I’m standing” on the edge of some crazy cliff." << endl;
     cout << "What I have to do, I have to catch everybody\\" << endl;
     cout << "if they start to go over the cliff—I mean\\" << endl;
     cout << "\\if they’re running and they don’t look" << endl;
     cout << "where they’re going I have to come out" << endl;
     cout << "from somewhere and catch them." << endl;

     cout<< "problem 3" << right << setw(10) << endl;
     int a = 189;
     char b = 'B';
     float c = a/3;
     char d = (a+b)/5;
     float e = a/10 - 1;
     cout << char(int(b)+e) << endl;


     cout<< "problem 4" << right << setw(10) << endl;
     int value1, value2, result;
     cout <<"num 1 ";
     cin>> value1;
     cout <<"num 2 ";
     cin>> value2;
     result = value1 + value2;

     cout << "result "<<result << endl;


     cout<< "problem 5" << right << setw(10) << endl;
     int N;

     cin >> N;

     cout << N % 100 << endl;

     cout<< "problem 6" << right << setw(10) << endl;
     double x, y, z;
     cin >> x >> y;
     z = (3 * (x * x + 3)) / (y / 4.0) + 3;
     cout << "t = " << z << endl;

     cout<< "problem 7" << right << setw(10) << endl;
     const double PI = 3.14159265358979323846;
     double diameter;
     cin>> diameter;
     double area = PI * diameter * diameter;
     cout << " Area of the sphere : " << area << endl;

     cout<< "problem 8" << right << setw(10) << endl;
     double v0, v1, t;
     cin >> v0 >> v1 >> t;
     double a1 = (v1-v0)/t;
     cout << a1 << endl;










   return 0;
}







