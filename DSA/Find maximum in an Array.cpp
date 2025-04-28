#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        int array[N];
        
        for (int i = 0; i < N; i++) {
            cin >> array[i];
        }
        
        int max = array[0];
        for (int i = 1; i < N; i++) {
            if (max < array[i]) {
                max = array[i];
            }
        }
        
        cout << max << endl;
    }
    
    return 0;
}