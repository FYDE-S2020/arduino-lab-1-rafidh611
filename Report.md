Name: Rafid Hasan

EID: rh37324

Team Number: F9

## Questions

1. Why does your program need a setup and a loop?

    The purpose of the setup is to tell the program what pin we are using in the Arduino and that pin is going to be an output pin. The loop keeps repeating a peice of code over and over again for us to see if the code works.

2. What is the downside to putting all your code in a loop?

    Pretty much the code will never end and it will just keep executing the same instructions over and over again without moving on past the loop function.

3. Why does your code need to be compiled?

    The code is transformed from Arduino to machine language so it can interact with the board and hardware.

4. When lowering the frequency in procedure A, step 4, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?

    When lowering the frequency, it was easier to see the lightbulb actually getting dimmer then becoming bright again. Dimmers in real life have mordern resistors that rapidly turn on and off the light circuit many times per second.The AC current is portrayed as  a sine function and the mordern dimmer chops up the function where the circuit is truend off every time the current changes direction and turns it back on when the voltage reaches the right amount.

5. Why do you need to connect the logic analyzer ground to the ESP32 ground?

    You have connect the logic analyzer ground to the board gorund becuase you have to make a complete circuit in order to analyze the circuit, and to also to make sure that there are no undefined (flating values) voltages in the system, so gorund them to make sure they are 0V.

6. What is the difference between synchronous and asynchronous communication?

    Synchronmous depends on the clock to tranfer data while asynchronomous doesn't.

7. Profile of UART: Sent X bytes in Y time 

    6 bytes in 6.149 ms

8. Profile of SPI: Sent X bytes in Y time

    5 bytes in 0.123 ms

9. Why is SPI so much faster than UART?

    SPI unlike UART implements master-slave method letting it stream data at high speeds. UART is only limited to 1 on 1 commmunication between devices.

10. list one pro and one con of UART

    Pro: It doesn't need a clock to function.
    Con: It is really slow compared to others

11. list one pro and one con of SPI

    Pro:Takes up the least amount of space on board
    Con: It is synchronomous so it depends on a clock

12. list one pro and one con of I2C

    Pro: Has low/pin signal count evne with nuemorus device connected
    Con: Requires most amount of space due to resistors on PCB

13. Why does I2C need external resistors to work?
     I2C works with two transmission lines known ad SCL and SDA.
    Both SCL and SDA lines are open drain drivers. This means is that the chip can drive its output low, but it cannot drive it       high, so for the line to be able to go high you must provide resistors to make the lines go high again for the system to work.

## Screenshots
My screenshots wouldn't paste here so i uploaded all the images on the repository. Really sorry about that.
Procedure A, step 1:
![Put path to your image here ->](img/placeholder.png)

Procedure A, step 4:
![Put path to your image here ->](img/placeholder.png)

Procedure B, UART:
![Put path to your image here ->](img/placeholder.png)

Procedure B, SPI:
![Put path to your image here ->](img/placeholder.png)
