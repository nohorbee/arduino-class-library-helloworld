#arduino-class-library-helloworld

##About
A tiny example based on LED13, to demonstrate how to use libraries and C++ classes for Arduino programming. 

###Hands On

####1. Connections
Well known LED13 sample connections:

- Pin 13 to LED Positive.
- Led Negative to Resistor (330 Ohms for Starter's Kit's LEDs).
- Resistor to Ground.

You can easily change this connections configuration by wiring it different in your circuit and, of course, changing the code properly.

In this case:
    
    const byte LED_PIN = 13;

Replace "13" for the pin used to connect the LED's Positive.

####2. Steps
1. Clone the repository.
2. Open the ClassLibraryHelloWorld/ClassLibraryHelloWorld.ino with your Android IDE (If you have not installed it, please follow the steps indicated [here](http://arduino.cc/en/Guide/HomePage)).
3. Import the library by pointing the LED13 folder packaged with the code (if you don't know how to install a library, you need to read [this](http://arduino.cc/en/Guide/Libraries)).
4. Connect your *Arduino* circuit to the USB.
5. Deploy the program.

####3. What should you see?
The led blinking with a 3 secs interval (you can vary this by changing your code as follows)

    led.blink(3000);  // 3000 milliseconds: Change this value to modify the blink interval.

##Motivation
Even though creating classes and libraries seems to be an easy task, there are a couple of challenges to face when starting. Documenting the basic steps seems to be a good idea.