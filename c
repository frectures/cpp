tput reset
program=$1.cpp
if [ -z $1 ]
then
    program=$(ls *.cpp -1 -t | head -n1)
fi
echo Compile and run $program...
g++ -std=c++17 $program && ./a.out
