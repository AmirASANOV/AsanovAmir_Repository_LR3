#include <iostream>
using namespace std;

int main() {
    int array[5] = {2,1,3,4,5};
    int max = array[0];

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        if(array[i] > max) {
            max = array[i];
        }

    };

    //first team work
    //second developer worked
    //third developer worked

    cout << max;

    return 0;
}