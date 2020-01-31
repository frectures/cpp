tput reset
program=$1.java
if [ -z $1 ]
then
    program=$(ls *.java -1 -t | head -n1)
fi
javac $program && java ${program%.java}
