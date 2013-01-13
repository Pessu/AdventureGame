Author Miika Pakarinen 1001136

Files are precompiled for every submission so no need to compile this, comes with an exe

HOW TO COMPILE IF NEEDED:
1. Compile the .o files "g++ *.cpp -c"
4. Compile the program and link the .dll. g++ -o adventure.exe *.o -L. -lGoldlib

Module 2 changes:
- Moved all files into same folder for the repository, less trouble compiling (I use a bit more
complicated folder layout in my IDE.
- Added Load & SaveCommand classes for handling respective commands (save & load)
- Added Utilities class for common tool functions and file handling
- Added a generic "file not found" exception in globals which calls an runtime error