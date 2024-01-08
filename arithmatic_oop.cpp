#include <iostream>
using namespace std;

template <class T>
class Arithmatic
{
private:
    T a;
    T b;

public:
    Arithmatic(T a, T b);
    T add();
    T sub();
};
template <class T>
Arithmatic<T>::Arithmatic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template<class T>
T Arithmatic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template<class T>
T Arithmatic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}


int main()
{
    Arithmatic<float> ar(10.99, 5.55);

    cout << "Add " << ar.add() << endl;
    cout << "Subract " << ar.sub() << endl;
    return 0;
}