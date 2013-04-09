#include "singleton.h"
//sample
class CMyClass
{
    SINGLETON( CMyClass )

public:


        void HelloWorld() { cout << "Hello World!!!" << endl; }
};

int main()
{
    SINGLETONINSTANCE( CMyClass )->HelloWorld();
    return 0;
}

