import sys

count = -1
save = 0
for line in sys.stdin:
    if (int(line)>save):
    	count+=1
    save = int(line)
    
print(count)
