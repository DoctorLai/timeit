/*
    https://helloacm.com
*/
#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main(int argc, char** argv) {
    // get tick before running command
    DWORD tick = GetTickCount();
    int rtn = 0;
    if (argc > 1) {
        // run the command sync
        rtn = system(argv[1]);
    }
    // output the difference
    cout << GetTickCount() - tick << endl;
    return rtn;
}
