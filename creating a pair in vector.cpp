#include <iostream>
#include<cstring>
#include<vector>
using namespace std;
int main() {
    vector <pair<string,int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string fruit;
        int price;
        cin>>fruit;
        cin>>price;
        pair<string,int> mypair(fruit,price);
        v.push_back(mypair);
    }
    for(auto x:v){
        cout << x.first << " : " << x.second << endl;
    }
}
