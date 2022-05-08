#include "alerter.h"
#define THRESHOLD 200
int networkAlertStub(float celcius) {
    int temperature=0;
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    if(celcius>THRESHOLD)
    {
        temperature=500;
    }
    else
    {        
        temperature=200;
    }
    return temperature;
}

float farenheitToCelcius(float farenheit)
{
    return ((farenheit - 32) * 5 / 9);
}

void alertInCelcius(float farenheit) {
    float celcius = farenheitToCelcius(farenheit);
    int returnCode = networkAlertStub(celcius);
    if (returnCode != 200) 
    {
        alertFailureCount += 1;
    }
}

int main() {
    alertInCelcius(32);
    alertInCelcius(-303.6);
    alertInCelcius(400.5);
    alertInCelcius(303.6);
    assert(alertFailureCount==1);
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
    return 0;
}
