#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    queue<int> q;
    
    for (int i = 0; i < N; ++i) {
        string command;
        cin >> command;
        
        if (command == "push") {
            int num;
            cin >> num;
            q.push(num);
        } else if (command == "pop") {
            if (!q.empty()) {
                q.pop();
            }
        }

        queue<int> temp = q;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop(); 
        }
        cout << endl;
    }
    
    return 0;
}
