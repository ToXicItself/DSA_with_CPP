#include<iostream>
using namespace std;
int dataTypes(string str) {


    if(str=="Long" ||str== "Double")

    {

        return 8;

    }

    else if(str=="Integer" || str=="Float")

    {

        return 4;

    }

    else if(str=="Character")

    {

        return 1;

    }

}
