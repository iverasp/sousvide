#define I2C_SLAVE_ADDRESS 0x4 // Address of the slave
 
#include <TinyWireS.h>
#include <Encoder.h>

Encoder enc(3, 4);

int K = 4;
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

  if (state < 20) {
    response = 20;
    enc.write(20 * K);
  }

  if (state > 198) {
    response = 198;
    enc.write(198 * K);
  }
}

void requestEvent()
{
  TinyWireS.send(response);
}
