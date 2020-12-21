This project is supposed to give me a more 
understanding on Raspberry PI, SPI, Canbus
and writing drivers for actuators (a servo 360 o in this case).

This project should contain:
1x Raspberry PI 3 b+
1x Teensy 3.5
1x Servo Motor 360o
1x 2515 Canbus With SPI interface
1x Push Button
1x 1k Resistor
Wires

Requirements list:

There should be a Raspberry PI connected to the teensy through I2C/CAN.
The Raspberry Pi should be able to display the servos rotation speed after each <time_interval>.
There should be a push button connected to the teensy to <pin_number_1>.
There should be a servo motor connected to the teensy to <pin_number_2>.
The push button should increment <increment_value> the rotation speed of the servo.
The rotation speed should reset when it reaches <max_rotation_value>.

The Project should have a BSP.
The Project should have dual-targeting testing.
