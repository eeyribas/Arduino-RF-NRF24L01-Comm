# Arduino-RF-NRF24L01-Communication
This is an example of RF communication with Arduino Uno. There are two applications available in the repository: Master and Slave.
The Master application connects to the Slave application via RF communication and listens for data coming from the Slave. 
The Slave application sends the message "Hello!" to the Master application at regular intervals via RF communication.
The NRF24L01 module is used for RF communication. This module is connected to the Arduino Uno.

Arduino Used: Arduino Uno

Arduino IDE Version: 2.2.0

RF Arduino Library: The library is included in the RF24-master.zip file in the repository. Please include this file in your Arduino Uno IDE.

Arduino Connection Diagram: In the repository, the connection diagram is shown in the (RF-Comm.png) image.