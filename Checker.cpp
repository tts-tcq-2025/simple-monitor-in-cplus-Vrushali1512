// Online C compiler to run C program online
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
    if(a && b && c == 1)
    {
        printf("Battery condition ok\n");
        return 1;
    }
    else
    return 0;
}

int main() {
    batteryIsOk(25, 70, 0.7);
    batteryIsOk(40, 85, 0);
    return 0;
}
