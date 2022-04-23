# C++ All in one for dummies, 4th ed. - optimized and uppdated source code with comments

The main purpose with this project for me, is to learn more about C++ and the coding environment VS Code and it's extensions. 

The book I have used: <em>C++ All in one for dummies, 4th ed, 2021,ISBN: 978-1-119-60174-6</em>

You will find the original source code belonging to this book here:
https://media.wiley.com/product_ancillary/46/11196017/DOWNLOAD/CPP_AIO4.zip

I kept a local copy zip-formatted in this project as well: <em>CPP_AIO4.zip</em> 
Boken C++ All in one for dummies, 4th ed, 2021 

Happy coding!

Borlänge, 2022
Niklas Engvall

## How to Compile under Linux

First of all I recommend you to search with Google or YouTube on how to install and configure the C/C++, Git, make and cmake packages. 
Also you will need to download and configure VS Code software. Then take some timee to learn the fundamentals of VS Code plus Git and I also strongly suggest you to add some C/C++ VS Code extensions, look at my ToDo.md

# BASH (terminal) commands in Linux

Compile without debug information:   g++ [source_cpp_file.cpp] -O3 -Wall -std=c++20 -o [source_cpp_file]_R.o
Run command:                         ./SayHello_R.o

<em>Example:</em>
Compile without debug information:   g++ SayHello.cpp -O3 -Wall -std=c++20 -o SayHello_R.o
Run command:                         ./SayHello_R.o


Compile with debug information:      g++ [source_cpp_file.cpp] -g -Og -Wall -std=c++20 -o [source_cpp_file]_D.o
Run command:                         ./SayHello_D.o

<em>Example:</em>
Compile with debug information:      g++ SayHello.cpp -g -Og -Wall -std=c++20 -o SayHello_D.o
Run command:                         ./SayHello_D.o

Yo can also use MAKE:  <-- No support for extra parameters at the moment
MAKE [source_cpp_file_without_extension]
