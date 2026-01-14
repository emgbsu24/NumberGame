# Algorithm for guesser game 

***

main()

greeting to the user

ask user for their name

store name in a string variable

welcome message with userName

make an int called guess

make an int called correct, will be randomally generated 1-100

make an int called turns set to 0

make an int called keepGoing set to true

while keep going true:

  ask user to guess a number

  read and store user's guess

  increase turns by 1

    if guess is < correct:

      tell them "Too low"

    else if the guess is > correct:

      tell them "Too high"

    else:

      tell them "You got it!"

      set keepGoing to false

after the loop ends, evaluate performance

  if turns < 7:

    say "That's great"

  else if turns > 7:

    say "You can do better"

  else:

    say 'Good job"

***
 
