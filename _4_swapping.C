// Swapping without using third variable 
#include<iostream>
using namespace std;
class interchange
{
    int a,b;
    public:
    void getdata()
    {
        cout << "Enter the value of a :";
        cin >> a;
        cout << "Enter the value of b :";
        cin >> b;
    }
    void swap_fun()
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    void display()
    {
        cout << "Value of a :"<<a;
        cout << "\nValue of b :"<<b;

    }
};

int main()
{
    interchange obj;
    obj.getdata();
    obj.swap_fun();
    obj.display();
    return 0;
}
