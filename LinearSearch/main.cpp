#include <bits/stdc++.h>

using namespace std;

int LinearSearch(int inputArray[], int arraySize, int key){
    for (int i = 0; i < arraySize; i++){
        if (inputArray[i] == key)
            return i;
    }
    return -1;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int arraySize, key;
        cin >> arraySize;
        int inputArray[arraySize];
        for (int i = 0; i < arraySize; i++){
            cin >> inputArray[i];
        }
        cin >> key;
        cout << LinearSearch(inputArray, arraySize, key) << "\n";
    }
    return 0;
}
