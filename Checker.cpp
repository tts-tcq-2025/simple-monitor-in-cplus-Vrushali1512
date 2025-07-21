#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

bool temperature(int x)
{
    if(x < 0 || x > 45)
    {
        printf("Temperature out of range\n");
        return 0;
    }
    else
    return 1;
}

bool StateOfCharge(int x)
{
    if(x < 20 || x > 80)
    {
        printf("State of charge out of range\n");
        return 0;
    }
    else
    return 1;
}

bool chargeRate(float x)
{
    if(x > 0.8)
    {
        printf("Charge Rate out of range!\n");
        return 0;
    }
    else
    return 1;
}

bool batteryIsOk(int x, int y, float z)
{
    bool a, b, c;
    a = temperature(x);
    b = StateOfCharge(y);
    c = chargeRate(z);
    return (a && c && b);
}

int main() {
    assert(batteryIsOk(25, 70, 0.7) == true);
    assert(batteryIsOk(50, 85, 0) == false);
    return 0;
}
