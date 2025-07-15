/*#include<bits/stdc++.h>
// inbuilt method
using namespace std;

int main(){
    vector<int> v = {10,20,30,40,50};
    int element = 25;

    cout << "Array before insertion:\n ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    } 
    // cout << endl;
    v.insert(v.begin(),element);

    cout << endl;
    cout << "Array after insertion:\n";
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}
    */

    #include<bits/stdc++.h>
    using namespace std;
    int main(){

        vector<int> v = {10,20,30,40,50};
        int n = 4;
        int element = 25;

        cout << "Array before insertion:\n";
        // for(int val : v){
        //     cout << v[val] << " ";
        // }
        for(int i = 0; i < n; i++){
            cout << v[i] << " " ;
        }

        cout << endl;

        for(int i = n ; i >= 0;i--){
            v[i+1] = v[i];
        }

        v[0] = element;

        cout << "Array after insertion:\n";
        // for(int val : v){
        //     cout << v[val] << " ";
        // }

        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }

        return 0;
    }