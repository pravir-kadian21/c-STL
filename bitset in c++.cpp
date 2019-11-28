#include <iostream>
#include<bitset>
using namespace std;
int main() {
    bitset<30>b;//in bitset indexing starts from left
    b[3]=b[5]=1;//in bitset each box is of 1 bit while in other it is 1 byte
    cout << b;//default elements in bitset is 0;
}
