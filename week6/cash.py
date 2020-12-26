from cs50 import get_float

# get value from user
while True:
    try:
        input = get_float("Change Owed: ")
        if input > 0:
            break
    except:
        print("", end="")

coins = 0

change = input * 100

# counting 25 cents
while change >= 25:
    change = change - 25
    coins = coins + 1
# counting 10 cents
while change >= 10:
    change = change - 10
    coins = coins + 1
# counting 5 cents
while change >= 5:
    change = change - 5
    coins = coins + 1
# counting 1 cents
while change >= 1:
    change = change - 1
    coins = coins + 1

print(coins)