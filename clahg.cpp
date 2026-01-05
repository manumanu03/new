#include <iostream>
using namespace std;

// Union with struct and bit-fields (real-world style)
union Data
{
    int intValue;
    float floatValue;

    struct
    {
        unsigned int flag1 : 1;
        unsigned int flag2 : 1;
        unsigned int flag3 : 1;
    } flags;
};

int main()
{
    Data d;

    cout << "Size of union Data: " << sizeof(d) << " bytes\n\n";

    // Store integer
    d.intValue = 10;
    cout << "Integer value: " << d.intValue << endl;

    // Store float (overwrites int)
    d.floatValue = 5.5f;
    cout << "Float value: " << d.floatValue << endl;

    // Store bit-fields
    d.flags.flag1 = 1;
    d.flags.flag2 = 0;
    d.flags.flag3 = 1;

    cout << "\nBit Flags:" << endl;
    cout << "Flag1: " << d.flags.flag1 << endl;
    cout << "Flag2: " << d.flags.flag2 << endl;
    cout << "Flag3: " << d.flags.flag3 << endl;

    return 0;
}
