#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int *a = new int[10];
    a[5] = 0;
    if (a[argc]) {
        cout << "wow" << endl;
    }
    return 0;
}