#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int Amin = 0;
    int Amax = 0;
    cin >> n;
    int Bi = -1;
    int countSame = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (Bi == -1) {
            Bi = t;
            countSame++;
            continue;
        }
        if (Bi == t) {
            countSame++;
            continue;
        }
        Amin += Bi;
        Amax += Bi * countSame;
        countSame = 1;
        Bi = t;
    }
    Amin += Bi;
    Amax += Bi * countSame;
    cout << Amax << endl;
    cout << Amin << endl;
    return 0;
}
