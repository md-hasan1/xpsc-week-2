#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    list<string> chatList;
map<string, list<string>::iterator> position;

    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;
// cout<<position.count(name)<<endl;
       
        if (position.count(name)) {
            chatList.erase(position[name]);
        }

   
        chatList.push_front(name);
        position[name] = chatList.begin();
    }

    for (auto name : chatList) {
        cout << name << '\n';
    }

    return 0;
}