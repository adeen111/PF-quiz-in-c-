 #include <iostream>
using namespace std;

int main() {
    int N, fee, total = 0, full = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> fee;
        total += fee;
        if (fee > 600) {
            cout << "Full Day Pass\n";
            full++;
        } else {
            cout << "Half Day Pass\n";
        }
    }
    cout << total << "\n" << full;
    return 0;
}

