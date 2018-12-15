# Algorithm from https://interactivepython.org/courselib/static/pythonds/Recursion/DynamicProgramming.html

def dpMakeChange(coinValueList,change,minCoins,coinsUsed):
   for cents in range(change+1):
      coinCount = cents
      newCoin = coinValueList[0] # changed from 1
      for j in [c for c in coinValueList if c <= cents]:
            if minCoins[cents-j] + 1 < coinCount:
               coinCount = minCoins[cents-j]+1
               newCoin = j
      minCoins[cents] = coinCount
      coinsUsed[cents] = newCoin
   return minCoins[change]

def getCoins(coinsUsed,change):
    result = []
    coin = change
    while coin > 0:
        thisCoin = coinsUsed[coin]
        result.append(thisCoin)
        coin = coin - thisCoin
    return result

def main():
    amnt = 80
    clist = [20, 50]
    coinsUsed = [0]*(amnt+1)
    coinCount = [0]*(amnt+1)

    print("Amount being dispensed: {}$".format(amnt))
    print("Available banknotes: {}".format(clist))
    print(dpMakeChange(clist,amnt,coinCount,coinsUsed),"notes")
    print("They are:")
    print(getCoins(coinsUsed, amnt))

main()
