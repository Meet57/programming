fname = "mbox-short.txt"
fh = open(fname,"r")
count = 0
for line in fh:
	line.rstrip()
	ll = line.split()
	if "From" in ll:
		print(ll[1])
		count = count + 1
print("There were",count,"lines in the file with From as the first word")
