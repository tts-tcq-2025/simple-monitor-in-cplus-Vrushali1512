#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

bool temperature(int temp)
{
    if(temp < 0 || temp > 45)
    {
        printf("Temperature out of range!\n");
        return 0;
    }
    else
    return 1;
}

bool StateOfCharge(int soc)
{
    if(soc < 20 || soc > 80)
    {
        printf("State of charge out of range!\n");
        return 0;
    }
    else
    return 1;
}

bool chargeRate(float cRate)
{
    if(cRate > 0.8)
    {
        printf("Charge Rate out of range!\n");
        return 0;
    }
    else
    return 1;
}

bool batteryIsOk(int temp, int soc, float cRate)
{
    bool temp_return, soc_return, cRate_return;
    temp_return = temperature(temp);
    soc_return = StateOfCharge(soc);
    cRate_return = chargeRate(cRate);
    return (temp_return && soc_return && cRate_return);
}

int main() {
    assert(batteryIsOk(25, 70, 0.7) == true);
    assert(batteryIsOk(50, 85, 0) == false);
    return 0;
}
