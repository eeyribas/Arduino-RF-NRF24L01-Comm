#include <SPI.h>
#include <RF24.h>
#include <nRF24L01.h>

RF24 radio(9, 8);

const byte address[6] = "00001";

void setup() 
{
  radio.begin();
  radio.openWritingPipe(address);
  radio.stopListening();
}

void loop() 
{
  const char text[] = "Hello!";
  radio.write(&text, sizeof(text));
  delay(1000);
}