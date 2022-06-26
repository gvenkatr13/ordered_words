#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> names;
    vector<string> order;
    string name;
    for(int i = 0; i < 5; i++){
        cin >> name;
       names.push_back(name);
    }
    for(int base = 0; base<names.size(); base++){
        string root = names[base];
        for(int comp = base+1; comp<names.size(); comp++){
            if(names[base]>names[comp]){
                root = names[comp];
                swap(names[base], names[comp]);
            }
        }
        order.push_back(root);
    }
    for(int i = 0; i < 5; i++){
        cout << order[i] << "\n";
    }

    cout << endl;
}