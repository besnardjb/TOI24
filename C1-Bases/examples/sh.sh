foo()
{
	echo "toto: $1"
}

for i in $(seq 1 1 4)
do
	if test $i -eq 4; then
		foo $i
	fi
done



