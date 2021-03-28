import random
import math
print("**************************************************************************")
print("                       Rules of the game                                  ")
print("**************************************************************************")
print("        You will get a maximum mumber of chances to guess a number        ")
print("      If you guess it within the maximum number of tries then you win     ")
print("  If you fail to guess within those number of tries then you lose the game")
print("**************************************************************************")
print("")
print("")

lower = int(input("Enter Lower limit:- "))
upper = int(input("Enter Upper limit:- "))
x = random.randint(lower, upper)
chance=round(math.log(upper - lower + 1, 2))
print("\n\tYou've only ", chance, " chances to guess the integer!\n")
count = 0
while count <= chance:
    count += 1
    guess = int(input("Guess a number:- "))
    if guess in range(lower,upper):
        if x == guess:
            print("Congratulations you did it in ",count, " try")
            break

        elif x > guess:

            print("You guessed too small!")
            print("")
        elif x < guess:

            print("You Guessed too high!")
            print("")

    else:
        print("your guess is out of range")

if count > chance:
    print("\nThe number is %d" % x)
    print("\tBetter Luck Next time!")
