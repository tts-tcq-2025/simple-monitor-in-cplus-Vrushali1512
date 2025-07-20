#include <stdio.h>
#include <stdbool.h>

bool batteryIsOk(bool a,bool b, bool c)
{
    if(a && b && c)
    {
        printf("Battery condition ok");
        return 1;
    }
    else
    return 0;
}

bool temperature(int x)
{
    if(x < 0 || x > 45)
    {
        printf("Temperature out of range");
        return 0;
    }
    else
    return 1;
}

bool StateOfCharge(int x)
{
    if(x < 20 || x > 80)
    {
        printf("State of charge out of range");
        return 0;
    }
    else
    return 1;
}

bool chargeRate(float x)
{
    if(x > 0.8)
    {
        printf("Charge Rate out of range!");
        return 0;
    }
    else
    return 1;
}

int main() {
    int a,b,c;
    bool temp,soc,charge;
    temp = temperature(40);
    soc = StateOfCharge(85);
    charge = chargeRate(0);
    batteryIsOk(temp,soc,charge);
    return 0;
}
