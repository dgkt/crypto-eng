file="$1"
COUNT=$(cat "$file" | tr -d "\n" | grep -o -E "GATTACA" | wc -l)
echo "$COUNT"

