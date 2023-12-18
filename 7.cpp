#include<iostream>
using namespace std;

int main(){
    int n, a1, a2, b1, b2;
    cin >> n;
    while(n--){
        char op;
        cin >> op >> a1 >> b1 >> a2 >> b2; // scanf the \n Because the previous one was %d
        switch(op){
            case '+':
                cout << a1+a2 << ' ' << b1+b2 << '\n';
                break;
            case '-':
                cout << a1-a2 << ' ' << b1-b2 << '\n';
                break;
            case '*':
                cout << a1*a2-b1*b2 << ' ' << a1*b2+a2*b1 << '\n';
                break;
        }
    }
    return 0;
}
