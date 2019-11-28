#include <iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

bool mycompare(pair<string,int>p1,pair<string,int>p2){
    if(p1.first.length()==p2.first.length()){
        return p1.second<p2.second;
    }
    return p1.first.length()<p2.first.length();
}

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
    sort(v.begin(),v.end(),mycompare);
    for(auto x:v){
        cout << x.first << " : " << x.second << endl;
    }
}
