#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    long elapsedSeconds = time(0); // from 1 Jan 1970
    srand(elapsedSeconds);
    int number = rand() % 10; // modulus for upper limit
    cout << number << endl;

    return 0;
}
