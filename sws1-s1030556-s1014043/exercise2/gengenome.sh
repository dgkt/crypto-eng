GENS=("A" "C" "T" "G")
outer="0" 
inner="0"

RANDOM=$$$(date +%s)
while [ $outer -lt 500 ]
do
output=""
	while [ $inner -lt 100 ]
	do

		randomGen=${GENS[$RANDOM % ${#GENS[@]}]}
		output="$output$randomGen"
		inner=$[$inner+1]
	done
	echo $output
	inner="0"
	outer=$[$outer+1]
done
