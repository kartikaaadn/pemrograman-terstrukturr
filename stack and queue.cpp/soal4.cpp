#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

    void stack_interpreter(int N, vector<pair<string, int>>& commands) {
    stack<int> s;
    
    for (int i = 0; i < N; ++i) {
        if (commands[i].first == "push") {
            s.push(commands[i].second);
        } else if (commands[i].first == "pop") {
            if (!s.empty()) {
                s.pop();
            }
        }
        
        if (!s.empty()) {
            stack<int> temp_s = s;
            vector<int> temp_vec;
            while (!temp_s.empty()) {
                temp_vec.push_back(temp_s.top());
                temp_s.pop();
            }
            for (size_t j = 0; j < temp_vec.size(); ++j) {
                cout << temp_vec[j] << " ";
            }
            cout << endl;
        } else {
            cout << endl;
        }
    }
}

int main() {
    int N;
    cin >> N;
    
    vector<pair<string, int>> commands;
    for (int i = 0; i < N; ++i) {
        string cmd;
        cin >> cmd;
        int num = -1; 
        if (cmd == "push") {
            cin >> num; 
        }
        commands.push_back({cmd, num});
    }
    stack_interpreter(N, commands);
    
    return 0;
}