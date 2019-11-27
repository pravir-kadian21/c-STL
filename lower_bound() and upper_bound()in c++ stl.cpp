#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int a[]={1,2,2,2,2,2,2,3,4};
    int n=sizeof(a)/sizeof(int);
    auto firstoccurence = lower_bound(a,a+n,2)-a;
    auto lastoccurence = upper_bound(a,a+n,2)-a-1;
    cout << firstoccurence << endl;
    cout << lastoccurence << endl;
}
