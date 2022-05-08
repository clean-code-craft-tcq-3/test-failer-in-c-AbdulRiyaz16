#ifndef ALERTER_H
#define ALERTER_H

#include <stdio.h>
#include <assert.h>

int alertFailureCount = 0;

int networkAlertStub(float celcius);
void alertInCelcius(float farenheit);

#endif
