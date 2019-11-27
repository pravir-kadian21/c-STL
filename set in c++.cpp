#include <iostream>
#include<set>
using namespace std;
int main() {
    //set stores data in sorted order
    //set stores only the unique elements
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    for(auto x:s){//short cut method for printing the elements of set
        cout << x << endl;
    }
    cout << "another way to print elements of set" << endl;
    //iterator is like pointers
    for(set<int>::iterator it=s.begin();it!=s.end();it++){//:: is used to define the scope
        cout << *it << endl;
    }
}
