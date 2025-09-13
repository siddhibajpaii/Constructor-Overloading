#include <iostream>
using namespace std;

class fetch
{
    int num = 3;

public:
    fetch()
    {
        
    }

    fetch(int x)
    {
        num = x;
    }

    fetch(const fetch &a)
    {
        num = a.num;
    }

    void disp()
    {
        cout << "Number is " << num << endl;
    }
};

int main()
{
    fetch f1;        
    fetch f2(5);    
    fetch f3(f1);    

    f1.disp();       
    f2.disp();       
    f3.disp();      

    return 0;
}

//Output:
//Number is 3
//Number is 5
//Number is 3
