
while True:
    n = int(input())
    if 10 <= n <= 100:
        break  
    print("please enter a number between 10 to 100.")


Fizz = 0
Buzz = 0
FizzBuzz = 0
for i in range(1, n + 1):
    if i % 7 == 0:
        print(i, " is skipped")
        continue
    if i % 3 == 0 and i % 5 == 0:
        print("FizzBuzz")
        FizzBuzz += 1
    elif i % 3 == 0:
        print("Fizz")
        Fizz += 1
    elif i % 5 == 0:
        print("Buzz")
        Buzz += 1
    else:
        print(i)


print("---------------------")
print("summary")
print("total Fizz:", Fizz)
print("total Buzz: ",Buzz)
print("total FizzBuzz: ",FizzBuzz)
