#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
class F
    {
        private:
            int n, m[100], ele, freq;
        public:
            void getdata();
            void findfreq();
            void display();
};
void F::getdata()
{
 cout << "Enter the size of the array: ";
 cin >> n;
 cout << "Enter " << n << " elements into the array: " << endl;
 for (int i = 0; i<n ; i++)
     cin >> m[i];
     cout << "Enter the search element: ";
     cin >> ele;
}
void F::findfreq()
{
     freq = 0;
     for (int i = 0; i<n; i++)
         if(ele == m[i])   
             freq++;
}
void F::display()
{
    if (freq > 0)
            cout << "frequency of " << ele << " is " << freq;
     else
         cout << "does not exisit";
}
    
int main()
{
    F i1;
    i1.getdata();
    i1.findfreq();
    i1.display();
    getch();
}