def centuryFromYear(year):
    for i in range(1,23):
        mini = (i-1)*100 +1
        maxi = i*100
        if mini <= year <= maxi :
            return i
