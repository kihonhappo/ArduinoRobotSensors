# Overview

This Project is centered on Networking in general and networking using Micro-controllers, Scensors and IOT devices. 

The software provided for this project is only an introduction and proof of concept. I have included scripts for Sound and Gas scensors as well as accelerometers. I also included some scripts that show the very basics of using an ESP32 Development Board to connect to a WiFi Network and to send and recieve data using UDP. 

I am currently building a lifesized humanoid robot. It is designated as ZomBot prototype 1. The features, scensors and capabilities for ZomBot are:
* Computer binocular vision: 2 ESP32 WiFi cameras
* 2 microphones or sound sensors that will allow the ZomBot to locate people and items by listening for which ear registers the loudest sound.
* 1 MQ2 Gas scensor: This will give the ZomBot the ability to track people by smell?
* 3 x,y,z accelerometers that will allow the ZomBot to know where it is in splace and to move and balance based on the feedback.
* 40 Medium servos and 40 micro servos + 4 16 channell servo drivers.
* Speaker for voice and sounds as well as ability to take verbal commands.
* Multiple touch sensors all around it's body.
* Arduino Mega for all of the Servos and Sensors 
* 1 ESP32 Development board to communicate between the Mega and a webapp that can control the ZomBot through WiFi and Blutooth.

Demo Video

[Sensor and simple micro controller Networking Video](http://youtube.link.goes.here)

## Network Communication

The Arduino IDE uses UART (TTL serial) to upload sketches to the arduino (port COM 5) and ESP32 (port COM 6) boards.
I used UDP in a client/server role and used port com5.
I used TCP port 88 for my ESP32 webserver not shown in video but it is in the Webserver script. 
Arduinos can use serial communication as well as I2C communication, mainly for video streaming.

* UART - Stands for Universal Asynchronous Reception and Transmission (UART)
A simple serial communication protocol that allows the host communicates with the auxiliary device. UART supports bi-directional, asynchronous and serial data transmission.
It has two data lines, one to transmit (TX) and another to receive (RX), which are used to communicate through digital pin 0, digital pin 1.
TX and RX are connected between two devices. (eg. USB and computer)
UART can also handle synchronization management issues between computers and external serial devices.

* The main difference between TCP (transmission control protocol) and UDP (user datagram protocol) is that TCP is a connection-based protocol and UDP is connectionless. While TCP is more reliable, it transfers data more slowly. UDP is less reliable but works more quickly. 

## Development Environment

* Arduino IDE
* Notpad++
* Arduino C++

The Arduino programming language is used to program microcontroller boards such as the Arduino Uno to interact with sensors, actuators, and other devices connected to the board. In fact, the language is based on C++, and it is designed to be easy to use for beginners and non-programmers. Additionally, it is commonly used in projects involving robotics, home automation, and Internet of Things (IoT) applications.

## Libraries
* WiFi 
* WiFi Link
* NTPClient
* WiFi UDP

## Boards
* Arduino UNO
* Arduino Mega 2560
* ESP32

## Useful Websites

Helpful Websites
* [Arduino](https://www.arduino.cc/)
* [Arduino IDE](https://www.arduino.cc/en/software)
* [UART vs I2C vs SPI](https://www.seeedstudio.com/blog/2019/09/25/uart-vs-i2c-vs-spi-communication-protocols-and-uses/)
* [TCP vs UDP](https://www.avast.com/c-tcp-vs-udp-difference#:~:text=The%20main%20difference%20between%20TCP,reliable%20but%20works%20more%20quickly.)
* [Text Fixer](https://www.textfixer.com/html/compress-html-compression.php)
* [Elegoo Arduino Mega 2560](https://www.elegoo.com/products/elegoo-mega-2560-r3-board)
* [ESP32](https://randomnerdtutorials.com/getting-started-with-esp32/)

## Future Work

* Add web app to control and monitor ZomBot
* Add bluetooth to ZomBot
* Network the Arduino Mega with the ESP32
* Add 2 WiFi Cameras and use them to perform binocular vision for depth perception
* Add Tensorflow to create A.I. type decision and recognition abilities