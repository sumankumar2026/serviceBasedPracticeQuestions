#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40,50};
    int ele = 25;
    int pos = 2;
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    v.insert(v.begin() + pos-1,ele);

    for(int i = 0 ; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}