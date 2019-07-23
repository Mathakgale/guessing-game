#include <iostream>   // contains the definition of cout, endl
#include <complex>   // contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace

int main(void)
{
    auto num1 = complex<float>{2.0, 2.0}; // use auto for type deduction
    auto num2 = complex<float>{4.0, -2.0}; // use uniform initialisation syntax  (curly braces)

    auto answer = num1 * num2; // type deduced for 'answer' is: complex<float>

    cout << "The answer is: " << answer << endl;

    cout << "Or in a more familiar form: " << answer.real()
    << " + " << answer.imag() << "j"
    << endl << endl;

    // answer++;
    // answer++ cannot work because the complex class does not have a member 
    //Function which is overloaded with the operator ++
    return 0;
}

