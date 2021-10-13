def adjacentElementsProduct(inputArray):
    prod = inputArray[0]*inputArray[1]
    for i in range(len(inputArray)-1):
        new = inputArray[i]*inputArray[i+1]
        if (new > prod):
            prod = new
    return prod
