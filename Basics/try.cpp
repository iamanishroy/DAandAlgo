#include <iostream> // Preprocessor Directive - Used to include file
// iostream is a header file used for taking input and printing output
using namespace std;

int main() // The execution of code begings from main function (Mandetory for any program)
{

    cout << "size of int " << sizeof(6) << endl;
    cout << "size of char " << sizeof('a') << endl;
    cout << "size of float " << sizeof(6.5f) << endl;
    cout << "size of double " << sizeof(6.62) << endl;

    short int si;
    long long int li; // long int li;

    cout << "size of short-int " << sizeof(si) << endl;
    cout << "size of long-int " << sizeof(li) << endl;

    return 0; // Nothing will execute after this line
}