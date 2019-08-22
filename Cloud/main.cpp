#include <iostream>
#include <string>
#include "..\classDemo.h"
#include "..\MemberInitTest.h"
#include "STLDemo.h"
#include "STL\VectorDemo.h"
using namespace std;

int main(int argc, char *argv[])
{
    VectorDemo oVectorDemo;
    oVectorDemo.demo();

    STLDemo oDemo;
    oDemo.transStringToResult("\"1,2:3,4\",\"5,6:\",\":4\"");
    string s = oDemo.transResultToString();



    initTest();

    system("pause");
    return 0;
}