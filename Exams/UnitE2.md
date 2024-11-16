The exam is divided into 3 sections. Each question in section-1 is of 1 mark and is compulsory. Each question in section-2 carries 5 marks, student must answer any 4 out of 6 questions given in this section. Section-3 has 2 questions of 10 marks, out of which any 1 question must be answered. **Important Instructions** - 
1. Students should make a empty text file in their respective computers and store their answer in that text file in the order of the questions.
2. To get full marks on a coding question, it is compulsory for the program to run correctly without any bugs.
3. Each bug has the mark equivalent to -1. More than 3 bugs in Section-2 and 5 bugs in Section-3 means, the answer is invalid and no marks will be awarded for the question.

## Section - 1 (1 x 10)

1) Write down all the three methods which can be used to increase the value of a variable.
2) Write a c program that contains an infinite loop.
3) What are the parts of a function that is required for the function to work properly?
4) What is floating point imprecision? How can we fix this?
5) What does 'return' keyword does in C?
6) Briefly explain the linking step in compilation of a program.
7) What is 'NUL' character and why is it used?
8) What is the size of a string datatype?
9) Write some key advantages of an array over regular variables.
10) What is a 'key' in encryption/decryption?

## Section - 2 (5 x 4)

1) Implement a program in C that recreates that pyramid, using hashes (`#`) for bricks, as in the below:

```
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
```

But prompt the user for an `int` for the pyramid’s actual height, so that the program can also output shorter pyramids like the below:

```
  #
 ##
###
```

Re-prompt the user, again and again as needed, if their input is not greater than 0 or not an `int` altogether.

Hints

- Recall that you can get an `int` from a user with `get_int`, which is declared in `cs50.h`.
- Recall that you can print a `string` with `printf`, which is declared in `stdio.h`.

2) Write a program in C that, given a number , calculates the sum from 1 to the given number. (Input : 1 ; Output : 1 , Input : 10 ; Output: 55). The program must take input only by means of command-line argument(s).
3) Write a program in C that uses a function to calculate the maximum value in a given array, The array has a fixed size of 7.
4) In a C program implement a function that calculates the size of a string.
5) In a C program implement a function that reverses a given string.
6) In a C program write a function that encrypts a string using a simple Caesar cipher. The program should prompt the user for the string and the key.

## Section -3 (10 x 1)

1) 
![](https://cs50.harvard.edu/x/2024/psets/1/cash/coins.jpg) 
## Problem to Solve

Suppose you work at a store and a customer gives you $1.00 (100 cents) for candy that costs $0.50 (50 cents). You’ll need to pay them their “change,” the amount leftover after paying for the cost of the candy. When making change, odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!). In a file called cash.c in a folder called cash, implement a program in C that prints the minimum coins needed to make the given amount of change, in cents, as in the below:

Change owed: 25
1

But prompt the user for an int greater than 0, so that the program works for any amount of change:

Change owed: 70
4

Re-prompt the user, again and again as needed, if their input is not greater than or equal to 0 (or if their input isn’t an int at all!).

## Greedy Algorithms

Fortunately, computer science has given cashiers everywhere ways to minimize numbers of coins due: greedy algorithms.

According to the National Institute of Standards and Technology (NIST), a greedy algorithm is one “that always takes the best immediate, or local, solution while finding an answer. Greedy algorithms find the overall, or globally, optimal solution for some optimization problems, but may find less-than-optimal solutions for some instances of other problems.”

What’s all that mean? Well, suppose that a cashier owes a customer some change and in that cashier’s drawer are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢). The problem to be solved is to decide which coins and how many of each to hand to the customer. Think of a “greedy” cashier as one who wants to take the biggest bite out of this problem as possible with each coin they take out of the drawer. For instance, if some customer is owed 41¢, the biggest first (i.e., best immediate, or local) bite that can be taken is 25¢. (That bite is “best” inasmuch as it gets us closer to 0¢ faster than any other coin would.) Note that a bite of this size would whittle what was a 41¢ problem down to a 16¢ problem, since 41 - 25 = 16. That is, the remainder is a similar but smaller problem. Needless to say, another 25¢ bite would be too big (assuming the cashier prefers not to lose money), and so our greedy cashier would move on to a bite of size 10¢, leaving him or her with a 6¢ problem. At that point, greed calls for one 5¢ bite followed by one 1¢ bite, at which point the problem is solved. The customer receives one quarter, one dime, one nickel, and one penny: four coins in total.

It turns out that this greedy approach (i.e., algorithm) is not only locally optimal but also globally so for America’s currency (and also the European Union’s). That is, so long as a cashier has enough of each coin, this largest-to-smallest approach will yield the fewest coins possible. How few? Well, you tell us!

## Advice
Click the below toggles to read some advice!

Write some code that you know will compile

Even though this program won’t do anything, it should at least compile with `make`!

```
#include <cs50.h>
#include <stdio.h>

int main(void)
{

}
```

Notice that you’ve now included `cs50.h` and `stdio.h`, two “header files” that will give you access to functions that might help you solve this problem.

Write some pseudocode before writing more code

If unsure how to solve the problem itself, break it down into smaller problems that you can probably solve first. For instance, this problem is really only a handful of problems:

1. Prompt the user for change owed, in cents.
2. Calculate how many _quarters_ you should give customer. Subtract the value of those quarters from cents.
3. Calculate how many _dimes_ you should give customer. Subtract the value of those dimes from remaining cents.
4. Calculate how many _nickels_ you should give customer. Subtract the value of those nickels from remaining cents.
5. Calculate how many _pennies_ you should give customer. Subtract the value of those pennies from remaining cents.
6. Sum the number of quarters, dimes, nickels, and pennies used.
7. Print that sum.

This is the greedy algorithm you can use to solve this problem, so let’s write some pseudcode as comments to remind you to do just that:

```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for change owed, in cents

    // Calculate how many quarters you should give customer
    // Subtract the value of those quarters from cents

    // Calculate how many dimes you should give customer
    // Subtract the value of those dimes from remaining cents

    // Calculate how many nickels you should give customer
    // Subtract the value of those nickels from remaining cents

    // Calculate how many pennies you should give customer
    // Subtract the value of those pennies from remaining cents

    // Sum the number of quarters, dimes, nickels, and pennies used
    // Print that sum
}
```
Convert the pseudocode to code

First, consider how you might prompt the user for the cents they are owed. Recall that a `do while` loop is helpful when you want to do something at least once, and possibly again and again, as in the below:

```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
}
```

It’s wise to stop here and `make` your program. Test to be sure your program compiles, and that it reprompts you if you enter less than 0 cents (or if you enter an input like “cat”).

Next, consider how to calculate how many quarters you should give the customer. Since we’re using a greedy algorithm, this question becomes “what’s the _greatest_ number of quarters could you give them?”. You _could_ write a solution to this problem in your `main` function. But, it might clear up your thinking to write a new function: one called `calculate_quarters`. That way you can better focus on the logic to calculate quarters. Later, you can integrate this function into your larger solution.

```
int calculate_quarters(int cents)
{
    // Calculate how many quarters you should give customer
}
```

Notice that this function is indeed named `calculate_quarters`. Per `int cents` in parentheses, it takes an `int` called `cents` as input. And, per the `int` in front of its name, it should also “return” an `int`. That is, the output of this function is an integer: the number of quarters that fit into cents. If curious about this idea, recall there are several sample programs in Week 1’s [Source Code](https://github.com/cs50/lectures/tree/2023/fall/1/src1) that illustrate how functions can return a value.

Now consider this way of implementing `calculate_quarters` by adding to the number of quarters until we’ve run out of cents to convert to quarters:

```
int calculate_quarters(int cents)
{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}
```

Granted, there is at least one simpler way to solve this `calculate_quarters` problem. But we’ll leave that up to you to figure out!

With `calculate_quarters` functioning as intended, you can integrate this function into your program. Take care to “declare” the function’s “signature” (i.e., `int calculate_quarters(int cents)`) above your `main` function, so you can indeed use `calculate_quarters` there while defining it later, below `main`.

```
#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);

    // Subtract the value of those quarters from cents
    cents = cents - (quarters * 25);
}

int calculate_quarters(int cents)
{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}
```

A few problems down, and a few more to go! Notice a pattern you could re-use here?

## How to Test

For this program, try testing your code manually. It’s good practice:

- If you input `-1`, does your program prompt you again?
- If you input `0`, does your program output `0`?
- If you input `1`, does your program output `1` (i.e., one penny)?
- If you input `4`, does your program output `4` (i.e., four pennies)?
- If you input `5`, does your program output `1` (i.e., one nickel)?
- If you input `24`, does your program output `6` (i.e., two dimes and four pennies)?
- If you input `25`, does your program output `1` (i.e., one quarter)?
- If you input `26`, does your program output `2` (i.e., one quarter and one penny)?
- If you input `99`, does your program output `9` (i.e., three quarters, two dimes, and four pennies)?

2) 
In the game of Scrabble, players create words to score points, and the number of points is the sum of the point values of each letter in the word

![img](https://i.imgur.com/cixMTt3.png)

For example, if we wanted to score the word “CODE”, we would note that the ‘C’ is worth 3 points, the ‘O’ is worth 1 point, the ‘D’ is worth 2 points, and the ‘E’ is worth 1 point. Summing these, we get that “CODE” is worth 7 points.

In a file called scrabble.c in a folder called scrabble, implement a program in C that determines the winner of a short Scrabble-like game. Your program should prompt for input twice: once for “Player 1” to input their word and once for “Player 2” to input their word. Then, depending on which player scores the most points, your program should either print “Player 1 wins!”, “Player 2 wins!”, or “Tie!” (in the event the two players score equal points). 

