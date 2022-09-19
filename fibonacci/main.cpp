#include <iostream>

using namespace::std;

int t1 = 0, t2 = 1, nextTerm = 0;

void fibonacci(int maxNum){
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= maxNum; i++){
        if (i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2){
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if (i < maxNum){
            cout << nextTerm << ", ";
            continue;
        }
        if (i == maxNum){
            cout << nextTerm;
        }
    }
}

int main(){
    int userInput;
    cin >> userInput;
    fibonacci(userInput);

    return 0;
}