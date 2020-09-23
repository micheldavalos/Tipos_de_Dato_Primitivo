#include <iostream>
#include <limits>
#include "tabulate/table.hpp"

using namespace tabulate;
using namespace std;

template<typename T>
void add_row(Table &tabla, const string &type) {
    tabla.add_row({type, 
                    to_string(sizeof(T)), 
                    to_string(numeric_limits<T>::min()), 
                    to_string(numeric_limits<T>::max())});
}

int main() {
    Table tabla;
    tabla.add_row({"Data Type", "Bytes", "Min", "Max"});
    add_row<char>(tabla, "char");
    add_row<unsigned char>(tabla, "unsigned char");
    add_row<int>(tabla, "int");
    add_row<unsigned int>(tabla, "unsigned int");
    add_row<float>(tabla, "float");
    add_row<long>(tabla, "long");
    // add_row<double>(tabla, "double");

    cout << tabla << endl;
    
    return 0;
}