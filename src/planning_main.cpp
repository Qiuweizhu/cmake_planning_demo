#include <iostream>
#include "./process/process.h"
#include "show_result.h"

using std::cout, std::endl;

int main()
{
    cout << "planing start" << endl;
    Process pro;
    pro.planProcess();
    cout << "planing end" << endl;

    cout << "planing end" << endl;
    ShowResult show;
    show.drawResult();

    return 0;
}
