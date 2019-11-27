#include <iostream>
using namespace std;

class vector{
    int *arr;
    int cs;
    int maxsize;

public:

    vector(int defaultsize=4){
        maxsize=defaultsize;
        cs=0;
        arr=new int[maxsize];
    }
    void push_back(int data){
        if(cs==maxsize){
            int *oldarr=arr;
            arr=new int[2*maxsize];
            maxsize*=maxsize;
            for(int i=0;i<cs;i++){
                arr[i]=oldarr[i];
            }
            delete []oldarr;
        }
        arr[cs]=data;
        cs++;
    }
    int getcsize(){
        return cs;
    }
    int getmaxsize(){
        return maxsize;
    }
    bool empty(){
        if(cs==0){
            return true;
        }
    }
    void pop_back(){
        if(!empty()){
            cs--;
        }
    }

    void print(){
        for(int i=0;i<cs;i++){
            cout << arr[i] << ",";
        }
    }
};

int main() {
    vector v;
    cout << v.getmaxsize() << endl;
    for(int i=0;i<=5;i++){
        v.push_back(i*i);
    }
    v.push_back(7);
    v.print();
    cout << endl;
    
    cout << v.getmaxsize() << endl;

    vector v1(1000);
    cout << v1.getmaxsize() << endl;
    for(int i=10;i<=15;i++){
        v1.push_back(i*i);
    }
    v1.print();
    cout << endl;
    cout << v1.getmaxsize() << endl;
}
