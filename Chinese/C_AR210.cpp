#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        cout << (char)(c+2) << '\n';
    }
}