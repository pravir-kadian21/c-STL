#include <iostream>
#include<cstring>
using namespace std;

pair<string,int> myfunc(){
    pair<string,int> p;
    p.first="mango";
    p.second=100;
    return p;
}
pair<string,int> myfunc2(string s,int p){
    pair<string,int>p1;
    p1.first=s;
    p1.second=p;
    return p1;
}
int main(){
    pair<string,int>p=myfunc();
    cout << p.first << " :: " << p.second << endl;

    pair<string,int>p1=myfunc2("pineapple",200);
    cout << p1.first << " ::: " << p1.second << endl;
}
