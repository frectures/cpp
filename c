tput reset
program=$1.cpp
if [ -z $1 ]
then
    program=$(ls *.cpp -1 -t | head -n1)
fi
g++ -std=c++14 -fno-elide-constructors $program && ./a.out
