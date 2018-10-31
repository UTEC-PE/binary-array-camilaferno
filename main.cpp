#include <iostream>
#include "binary.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;

    boolean arr(12);
    arr.bitOn(11);

    for(int i=0; i<arr.GetSize(); i++){
      cout << arr[i] << " ";
    }

    return EXIT_SUCCESS;
}
