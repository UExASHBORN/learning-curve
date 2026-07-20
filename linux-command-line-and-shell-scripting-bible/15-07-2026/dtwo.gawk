END{print "End of file"}
BEGIN{ FIELDWIDTHS="2 4 2 2 2" ; OFS="\t"}
{if($1>20) print $1}
