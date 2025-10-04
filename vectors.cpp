// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

vector<int> inputVector(vector<int> &v){
    for(int i = 0; i <= v.size() - 1; i++){
        cin>>v[i];      
    }
    return v;
}

void outputVector(vector<int> &v){
    for(int i = 0; i <= v.size() - 1; i++){
        cout<<v[i]<<" ";      
    }
}

int main() {
    vector<int> v(5);
    cout<<"Vector: ";
    inputVector(v);    // take input
    cout << "Vector elements are: ";
    outputVector(v);   // print output
    return 0;
}
