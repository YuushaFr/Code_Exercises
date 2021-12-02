import sys

aim = 0
depth = 0
advance = 0
for line in sys.stdin:
    save = line.split(" ")
    if save[0] == "forward":
    	advance += int(save[1])
    	depth += aim*int(save[1])
    elif save[0] == "down":
    	aim += int(save[1])
    elif save[0] == "up":
    	aim -= int(save[1])
    	if depth <0 :
    		aim = 0
    		
print(advance*depth)
