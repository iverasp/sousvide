#define I2C_SLAVE_ADDRESS 0x4 // Address of the slave
 
#include <TinyWireS.h>
#include <Encoder.h>

Encoder enc(3, 4);

/*
The rotary encoder should only produce values
from 10 to 99 (we are not cooling the water nor
should we let it boil).
*/
int K = 4; // Encoder produces 4 values per step
int k = K / 2; // We need half a degree precision
int min = 10; // Minimum value of 10'C
int max = 99; // Maximum value of 99'C

long state = 20;
long response = 20;

void setup()
{
    TinyWireS.begin(I2C_SLAVE_ADDRESS);
    TinyWireS.onRequest(requestEvent);
}
 
void loop()
{
    TinyWireS_stop_check();
    state = enc.read() / K;
    response = state;

  if (state < min * k) {
    response = min * k;
    enc.write(min * k * K);
  }

  if (state > max * k) {
    response = max * k;
    enc.write(max * K);
  }
}

void requestEvent()
{
  TinyWireS.send(response);
}
