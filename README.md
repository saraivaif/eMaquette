# eMaquette
Effective Mass Approximation to Quantum Electronic Transport ThEory

This repository will contain the development of a code for 3D simulation of quantum dots within multivalley effective mass theory including spin orbit coupling and time dependent potentials.

The main "philosophy" of this simulator is 
  A - always be smart about sampling in order to fully explore the power of Effective Mass Theory
  B - High level code may be written in Mathematica, Matlab, Python, etc. But core code is written in C for speed.
  C - Maintain the earlier codes -- not all problems demand the full capabilities of the final code
  
  
This code will be developed in steps

1 - Implement in C a 1D solver for a single valley Schrodinger equation
2 - Include 2 valleys and intervalley coupling
3 - Implement the possibility of a high level input (not using C)
4 - Implement 3D solving capabilities with general boundary condition in a pillbox geometry
5 - Integrate visualizers and classical simulators
6 - Create documentation and input file scheme
7 - Create a GUI for establishing input files
