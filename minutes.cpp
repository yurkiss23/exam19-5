time=$(date -d "$1" +"%s")
echo $time
curtime=$(date +"%s")
let "r=(time-curtime)/60"
echo $curtime
echo $r "min"
