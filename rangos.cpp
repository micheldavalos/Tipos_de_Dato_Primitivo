#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "min(): " << numeric_limits<int>::min() << endl;
    cout << "max(): " << numeric_limits<int>::max() << endl;

    return 0;
}