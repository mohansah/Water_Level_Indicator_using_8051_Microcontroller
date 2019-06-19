# Water_Level_Indicator_using_8051_Microcontroller

This was a group project where I mainly worked with hardware like making the circuit using the components required and finally we developed a water level indicator which indicate the water level (Vacant, Low, Half and Full) in a tank. We used C programming language, MikroC PRO and Progisp Software (for burning code) for the implementation.

# Introduction

1. Water Level Indicator using 8051 Microcontroller project will help in automatically indicating the water level by sensing the water level in a tank.
2. Here, different water level of the tank(like low,half,full) is indicated on LCD (Liquid crystal Display). Using this system, we can avoid the overflow of the water.
3. In this system, water sensing can be done by using a set of 3 wires, which are placed at different levels in tank. DC supply probe is placed at the base of the tank. 

# Principle

1. This system mainly works on a principle that “water conducts electricity”.
2. Four wires which are dipped into the tank where three will indicate the different water levels and one for Vcc. Based on the outputs of these wires, microcontroller displays water level on LCD.
3. Initially when the tank is empty, LCD will display the message EMPTY. When  some water added in tank then LCD display LOW and when water level reaches to half level, now LCD displays HALF.
4. When the tank is full, LCD displays FULL.

# Components required

1. AT89S52 Microcontroller (or any 8051 based Microcontroller)
2. 8051 Programmer (Programming Board)
3. 11.0592 MHz Quartz Crystal
4. 2 x 33pF Capacitor
5. 2 x 10KΩ Resistor (1/4 Watt)
6. 10µF Capacitor
7. Push Button
8. 1KΩ x 8 Resistor Pack (for Pull – up)
9. 16 x 2 LCD Display
10. 3 x 2N2222 (NPN) Transistors
11. 10KΩ Potentiometer
12. Programming cable
13. Connecting wires
14. Power Supply
15. MikroC  PRO for 8051 IDE
16. Progisp Software (for burning code)

Go through the ppt(which I uploaded) for more detalis

Reference: 
          1. https://www.electronicshub.org/water-level-controller-using-8051-microcontroller/
          2. mikroC PRO for 8051.



