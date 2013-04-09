// ----------------------------------------------------------------------------

#include <iostream>
using std::cout;
using std::endl;

template <class T> 
class TSingleton
{
public:

    static T * Instance()
    {
        static T obj;
        return &obj;
    }

private:
    TSingleton() {}
    ~TSingleton() {}
    TSingleton(const TSingleton &old);
    const TSingleton &operator=(const TSingleton &old);

};

#define SINGLETON(T) protected:friend class TSingleton< T >;T(){};  
#define SINGLETONINSTANCE(T) TSingleton< T >::Instance()
