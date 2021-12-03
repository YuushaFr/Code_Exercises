import sys
import numpy as np

gamma = ""
epsilon = ""
values = []
for line in sys.stdin:
    values.append(line)

g_one = np.zeros(len(values[0])-1)
g_zero = np.zeros(len(values[0])-1)

for k in range(0, len(values[0])-1):
	for i in range(0, len(values)):
		if (values[i][k] == '0'):
			g_zero[k]+=1
		elif (values[i][k] == '1'):
			g_one[k]+=1
	
for j in range(0, len(g_zero)):
	if g_one[j]>g_zero[j]:
		gamma+= '1'
		epsilon+= '0'
	else:
		gamma+= '0'
		epsilon+= '1'

print(int(gamma,2)*int(epsilon,2))
