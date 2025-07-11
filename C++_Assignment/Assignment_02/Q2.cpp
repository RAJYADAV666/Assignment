#include<iostream>
using namespace std;

class Loop
{
    public:
        int i;

    Loop(int iNo)
    {
        i = iNo;
    }

    void Display()
    {
        int iCnt = 1;

        while(iCnt <=i )
        {
            cout<<" * ";

            iCnt ++;
        }
    }
};
int main()
{
    int iValue =0 ;

    cout<<"Enter the Number:";
    cin>>iValue;

    Loop lobj(iValue);

    lobj.Display();


}