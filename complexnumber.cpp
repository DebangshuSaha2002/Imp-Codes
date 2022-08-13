#include<iostream>
using namespace std;
struct complex
{
  int real, img;
};

int main()
{
  int choice, x, y, z;
  struct complex a, b, c;

  while(1)
  {
    cout<<("Press 1 to add two complex numbers.\n");
    cout<<("Press 2 to subtract two complex numbers.\n");
    cout<<"Press 3 to display";
    cout<<("Press 4 to exit.\n");
    cout<<("Enter your choice\n");
    cin>>choice;

    if (choice == 4)
      exit(0);

    if (choice >= 1 && choice <= 4)
    {
      cout<<("Enter a and b where a + ib is the first complex number.");
      cout<<("\na = ");
      cin>>a.real;
      cout<<("b = ");
      cin>>a.img;
      cout<<("Enter c and d where c + id is the second complex number.");
      cout<<("\nc = ");
      cin>>b.real;
      cout<<("d = ");
      cin>>b.img;
    }
    if (choice == 1)
    {
      c.real = a.real + b.real;
      c.img = a.img + b.img;

      if (c.img >= 0)
        printf("Sum of the complex numbers = %d + %di", c.real, c.img);
      else
        printf("Sum of the complex numbers = %d %di", c.real, c.img);
    }
    else if (choice == 2)
    {
      c.real = a.real - b.real;
      c.img = a.img - b.img;

      if (c.img >= 0)
        printf("Difference of the complex numbers = %d + %di", c.real, c.img);
      else
        printf("Difference of the complex numbers = %d %di", c.real, c.img);
    }
    else if (choice == 3)
    {
        for(int i=0;i<2;i++)
        {
        cout<<a.real<<"+"<<b.img<<"i"<<endl;
        }
    }
    else
      cout<<("Invalid choice.");

    cout<<("\nPress any key to enter choice again...\n");
  }
  return 0;
}