// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

bool Min_Max(int x,int min,int max)
{
    if (x>min && x<max)
    return 1;
    else
    return 0;
}

bool battery_Check(bool x, bool y, bool z)
{
    if(x && y && z)
    {
        printf("Battery is Ok\n");
        return 1;
    }
    else
    {
        printf("Battery is not ok\n");
        return 0;
    }
}

bool batteryIsOk(int temp,int soc,int chargeRate)
{
    bool x,y,z;
    x = Min_Max(temp,0,45);
    y = Min_Max(soc,20,80);
    if(chargeRate<0.8)
    z = 1;
    else
    z =0;
    battery_Check(x,y,z);
}

int main() {
    batteryIsOk(25, 70, 0.7);
    batteryIsOk(40, 85, 0);
    return 0;
}
