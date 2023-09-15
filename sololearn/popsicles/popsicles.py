# Made by jisumov

siblings = int(input()) # Ask the amount of siblings
popsicles = int(input()) # Ask the amount of popsicles

if popsicles % siblings == 0: # Check if the amount of popsicles can be given away equally to the siblings
    print("give away")
else:
    print("eat them yourself")