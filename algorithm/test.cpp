#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> data;
    data.push_back(5);
    data.push_back(1);
    data.push_back(8);
    cout<<data[0]<<endl;
    //data[2]=data[0];
    cout<<data[2]<<endl;
}