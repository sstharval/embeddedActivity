# embeddedActivity
|SFID | NAME | DISCIPLINE |
|---|---|---|
|260056|Shubham Tharval| EMBEDDED|
# Quality Badges
|Compile Linux | Code Quality (cppCheck) | Codacy |
|--------------|-------------------------|--------|
[![Compile-Linux](https://github.com/sstharval/embeddedActivity/actions/workflows/Compile.yml/badge.svg)](https://github.com/sstharval/embeddedActivity/actions/workflows/Compile.yml) | [![Cppcheck](https://github.com/sstharval/embeddedActivity/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/sstharval/embeddedActivity/actions/workflows/CodeQuality.yml) | [![Codacy Badge](https://app.codacy.com/project/badge/Grade/81bfe93001ef4384ac3ce87ccef3c3f7)](https://www.codacy.com/gh/sstharval/embeddedActivity/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=sstharval/embeddedActivity&amp;utm_campaign=Badge_Grade)

# Acitivity 1 & 2
![Activity1](https://github.com/sstharval/embeddedActivity/blob/52b4463e30e248af03e717f868a66bcd386ede33/simulation/Activity1.PNG)

## Explanation

Two Push Switches are used. (Refer the below table)
Logic - When the passenger switch is pressed, the passenger side led is turned ON. Similarly when the passenger pushes the HEATER button ON, heater is ON & heater LED Glows. From the same port the heater is powered ON and for Activity 1 and 2 the LED indication is given. Logic is implemented in such a way that the HEATER will turn ON only the passenger is seated.
|PORT|FUNCTION|
|----|--------|
|D0| Passenger Switch|
|D3| Heater ON Switch|
|C1| ADC Channel Input for TMP35|
|B0| LED Driver|
|B1|Heater Driver|

# FLAG
In ADC part of program, my SimulIDE giving me no values in the Register Block(photo_attached below). However, I have programmed for the entire project using Future Skills videos.
![No Status from ADC](https://github.com/sstharval/embeddedActivity/blob/7eb34b6a96d3cb202e7df40d62412520d041d846/simulation/Screenshot%20(137).png)

The final code is failing cppcheck since it is not linking the header files properly, problem to be solved.
