{}
{print $1,$6}
BEGIN{FS=":" ; OFS="--" ; print "Start"}
END{print "End of File"}
