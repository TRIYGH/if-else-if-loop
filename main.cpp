#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int testscore;

    cout << "enter a test score: ";
    cin >> testscore;

    if ( testscore >= 90 )
        cout << "you got an A";
    else if ( testscore >= 80 )
        cout << " you got a B";
    else if ( testscore >= 70 )
        cout << " you got a C";
    else if ( testscore >= 60 )
        cout << " you got a D";
    else
        cout << " you failed bitch !!!!";


    if ( testscore > 59 && testscore < 101 )
        cout << "\n\nyou passed";
    else
        cout << "\n\nyou failed";
    cout << "\n";
    return 0;
}
