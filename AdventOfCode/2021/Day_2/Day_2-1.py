import sys

depth = 0
advance = 0
for line in sys.stdin:
    save = line.split(" ")
    if save[0] == "forward":
    	advance += int(save[1])
    elif save[0] == "down":
    	depth += int(save[1])
    elif save[0] == "up":
    	depth -= int(save[1])
    	if depth <0 :
    		depth = 0
    		
print(advance*depth)
