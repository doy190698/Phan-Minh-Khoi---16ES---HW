#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>

using namespace std;
class Cube{
private:
            double Size=10;
public:
   Cube(double val)
         {
                  if(val>0)
                  {
                           Size = val;
                  }
         }
         void setSize(double val)
         {
                  if(val>0)
                  {
                           Size = val;
                  }
         }
         double getSize()
         {
                  return Size;
         }
         double volume()
         {
                  return Size*Size*Size;
         }
void details()
         {
         cout << "\ndetails of rectangle" << endl;
         cout << "width= " << Size << endl;
         cout << "height" << Size << endl;
         cout << "length" << Size << endl;
         cout << "volume" << volume() << endl;
         }
            };
main()
{
Cube cube1(4);
Cube cube2(3);
Cube cube3(-2);
cout << "Details of Cube:" << endl;
cube1.details();
cube2.details();
cube3.details();
getch();
}
