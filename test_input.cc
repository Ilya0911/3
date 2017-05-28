#include"temp.h"
#include<sstream>
#include<iostream>


bool main (temperature input)
{
    switch (input.scale){
    case 'K':
        if (input.value >= 0)
            return 1;

    case 'F':
        if (input.value >= -169.44)
            return 1;

    case 'C':
        if (input.value >= -273.15)
            return 1;

    default:
        return 0;
    }
}
