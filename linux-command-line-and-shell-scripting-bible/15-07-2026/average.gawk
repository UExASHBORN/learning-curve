BEGIN{FS=":"}
{
total=0
i=3
while(i<6)
{
total += $i
i++
}
avg=total/3
print "Average=" avg
}
