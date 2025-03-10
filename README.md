# Arduino-RF-NRF24L01-Comm
Arduino includes RF communication applications using the NRF24L01 module. The NRF24L01 module is connected to the Arduino. These applications are: Master and Slave.

1. Master: The Master application connects to the Slave application via RF communication and listens for data coming from the Slave.

2. Slave: The Slave application sends the message 'Hello!' to the Master application at regular intervals via RF communication.

Programming Language: C/C++ Programming Language

IDE: Arduino IDE Version - 2.2.0

Arduino Used: Arduino Uno

Arduino Library: The RF24-master.zip library enables the use of the NRF24L01 module. Include this library in your Arduino IDE.

Arduino Connection Diagram: The connection between the Arduino and the NRF24L01 module is shown in the (RF-Comm.png) image.