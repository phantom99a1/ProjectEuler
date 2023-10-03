#include <bits/stdc++.h>
using namespace std;

#define ld long double
map<int, int> num_of_dig;

void find_digits() {
    ld phi = (1 + sqrt(5)) / 2;
    for (int i=2; i<=25000; i++) {
        ld temp = (i * log10(phi)) - (log10(5)) / 2;
        if (!num_of_dig[ceil(temp)]) 
            num_of_dig[ceil(temp)] = i;
    }
}

int main() {
    find_digits();
    int t; cin >> t;
    for (int i=0; i<t; i++) {
        int n; cin >> n;
        cout << num_of_dig[n] << "\n";
    }
}
