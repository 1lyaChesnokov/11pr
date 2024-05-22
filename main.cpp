/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

template <typename T, size_t N>
T sumArrayElements(T (&arr)[N]) {
    T sum = 0;
    for (size_t i = 0; i < N; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << sumArrayElements(intArray)<<endl;
    std::cout <<  sumArrayElements(doubleArray);

    return 0;
}


// 2 

#include <iostream>
#include <vector>
#include <utility>

template <typename KeyType, typename ValueType>
class KeyValuePairs {
private:
    vector<std::pair<KeyType, ValueType>> pairs;

public:
    void addPair(const KeyType& key, const ValueType& value) {
        pairs.push_back(std::make_pair(key, value));
    }

    void printPairs() {
        for (const auto& pair : pairs) {
            cout << "[" << pair.first << ", " << pair.second << "]" << std::endl;
        }
    }
};

int main() {
    KeyValuePairs<std::string, int> stringIntPairs;
    stringIntPairs.addPair("One", 1);
    stringIntPairs.addPair("Two", 2);
    stringIntPairs.addPair("Three", 3);

    KeyValuePairs<char, double> charDoublePairs;
    charDoublePairs.addPair('A', 3.14);
    charDoublePairs.addPair('B', 2.71);
    charDoublePairs.addPair('C', 1.618);

    std::cout << "Pairs of string-int types:" <<endl;
    stringIntPairs.printPairs();

    std::cout << "\nPairs of char-double types:" ;
    charDoublePairs.printPairs();

    return 0;
}