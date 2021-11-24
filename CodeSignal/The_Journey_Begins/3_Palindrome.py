def checkPalindrome(inputString):
    arr = list(inputString)
    lenght = len(arr)
    k = 0
    for i in range(0,lenght):
        if arr[i] != arr[lenght-i-1]:
            k += 1
    if k == 0:
        return True
    else :
        return False
