#include "address.h"

string address::address_info()
{
    string info;

    info += address_line1 + "\n";
    if (!address_line2.empty())
    {
        info += address_line2 + "\n";
    }
    info += city + ", " + state + " " + zip;

    return info;
}
























