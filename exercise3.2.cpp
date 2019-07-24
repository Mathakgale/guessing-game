#include <iostream>   // contains the definition of cout, endl
#include <complex>   // contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace

typedef complex<float> complexNumber ;    // defining complexNumber to be type complex<float>

int main(void)
{
    complexNumber num1 = complex<float>{2.0, 2.0};   // declaring "num1" to type complexNumber and asigning the object to values
    complexNumber num2 = complex<float>{4.0, -2.0}; 

    complexNumber answer = num1 * num2;             // type deduced for 'answer' is: complex<float>

    cout << "The answer is: " << answer << endl;

    cout << "Or in a more familiar form: " << answer.real()
    << " + " << answer.imag() << "j"
    << endl << endl;

    // answer++;
    // answer++ cannot work because the complex class does not have a member 
    //Function which is overloaded with the operator ++
    return 0;
}