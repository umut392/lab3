n = int(input("enter a number between 3 and 9 "))
        
if 3 <= n <= 9:
            
    for i in range(1, n + 1):
            print('*' * i)
    for i in range(n - 1, 0, -1):
            print('*' * i)
else:
            print("enter a number between 3 and 9 ")
