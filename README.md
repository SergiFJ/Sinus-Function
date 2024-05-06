# Sinus-Function
The representation of the sinus function given the phase and the amplitude. To run this project you only need a recent g++ version, make installed in your system and the version 5 of QT.

## How to build
To build the project you need to do the following steps:
```
qmake
make
./Exercici-3
```
Implementation
A program implemented with OpenGL and QT Designer. For this program I only need to implement a new class for the ProgressBar to implement 5 new funcions:
```
ini(): initialitzate the sinus function and the parameters.
amplitud(int a): edits the sinus function having in mind the new value for the amplitude.
fase(int f): edits the sinus function having in mind the new value for the phase.
time(): starts or stop the timer.
animar(): do the animation every time the timer arrive to the value 0.
```
