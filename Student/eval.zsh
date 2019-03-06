#!/usr/bin/zsh

DATA="Data/"

nbr=0
mkdir -p "ANSWER"

for i in $DATA/histoire*.txt
do
  for line in "${(@f)"$(<$DATA/date.txt)"}"
  do
    echo "TEST $nbr : $i:t $line "
   ((nbr+=1))
    ./create_story $i Thib $line > ANSWER/$nbr.sol 2> ANSWER/$nbr.err 
    cmp --silent $DATA/ANSWER/$nbr.sol ANSWER/$nbr.sol || echo "\tstandard output are different"
    cmp --silent $DATA/ANSWER/$nbr.err ANSWER/$nbr.err || echo "\terror output are different"

  done
done

rm -r ANSWER
