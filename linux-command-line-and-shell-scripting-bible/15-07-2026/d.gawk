{print $1,$2,$3,$4,$5}
END{print "End of file"}
BEGIN{ FIELDWIDTHS="2 4 2 2 2" ; OFS="\t" ; print "RollNo\tName\tPhysics\tMaths\tEnglish"}
