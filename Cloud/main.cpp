#include <iostream>
#include <string>
#include "..\classDemo.h"
#include "..\MemberInitTest.h"
#include "STLDemo.h"
using namespace std;

int main(int argc, char *argv[])
{
    STLDemo oDemo;
    oDemo.transStringToResult("\"1,2:3,4\",\"5,6:\",\":4\"");
    string s = oDemo.transResultToString();


    initTest();

    system("pause");
    return 0;
}