# "greedy cashier"
# a program that takes "change owed" as an input
# outputs the smallest amount of coins required to pay that change

from cs50 import get_float

def main():
    #validate user input
    while True:
        # always prompt user for input first
        # input is a float
        change = get_float("Change Owed: ")
        # if user input IS in range, break out of loop
        if change >= 0:
            # print("success", change)
            # convert float to int + round
            break

    # coins keeps track of the # of coins in change
    # cents is the input converted to # of pennies/cents
    coins = 0
    cents = round(change * 100)
    # print(cents)

    # cents = coins + cents // 25
    # Ex/ $1.02 = 102
    # coins = 102 // 25
    # coins = 4
    # cents remaining = 2
    coins += cents // 25
    # print("# of quarters: ", coins)
    cents %= 25
    # print("This many cents remain", cents)

    coins += cents // 10
    # print("coin count: ", coins)
    cents %= 10
    # print("This many cents remain", cents)

    coins += cents // 5
    # print("coin count: ", coins)
    cents %= 5
    # print("This many cents remain", cents)

    coins += cents
    # print("coin count: ", coins)

    print("Number of Coins: ", coins)

if __name__ == "__main__":
    main()