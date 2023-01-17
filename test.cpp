#include <iostream>
using namespace std;

int main()
{
   int a, sum=0;

   cout<<"Enter 5 numbers: " << endl;

  for(int i=0; i<5; i++)
  {
    cin >> a;

    sum = sum + a;
  }
     cout << "\nSum = " <<sum << endl;
     
     if (sum > 30)
     {
     	cout << "\nwelcome";
	 }
	 
     return 0;
}
