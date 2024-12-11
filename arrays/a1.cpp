#include <iostream>

using namespace std;


int* add(int m){
    int* tot =  new int[m];

    for (int i = 0; i < m; i++){
        tot[i] = (i + 1) * 10;
    }

    return tot;
}

int main () {
    int m = 5;
    int* res =  add(m);

    for (int i = 0; i < m; i++){
        cout << res[i] << " ";
    }

    delete[] res;

    // int *a = &m;

    // *a = 90

    // cout << *a;
    return 0;
}