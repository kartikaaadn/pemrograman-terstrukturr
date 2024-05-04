#include <vector>
#include <iostream>
using namespace std;

vector<char> huruf;

int main(){
    vector<char> huruf = {'j','i','h','a','n'};
    huruf.back() = 'h';
    huruf.push_back('o');
    
    cout << huruf.back() << endl;
    cout << huruf.at(3) << endl;
    cout << huruf.size() << endl;
    cout << huruf.empty() << endl;
    
}