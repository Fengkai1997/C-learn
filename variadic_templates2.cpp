#include <iostream>
using namespace std;

template<typename T>
T sum(T t)
{
    return t;
}

template<typename T, typename ... Types>
T sum (T first, Types ... rest)
{
    return first + sum<T>(rest...);
}


int main(){
    auto a = sum(1,2,3,4,5.55);
    cout<< "sum is ....."<< a << endl;
}
