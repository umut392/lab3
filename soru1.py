
sayi = int(input("enter a number which is greater than 1 "))


if sayi <= 1:
    print("enter a number which is greater than 1")
else:
    aa = 0
    
    
    while sayi != 1:
        print(sayi, end=" → ")
        
        if sayi % 2 == 0:
            
            sayi = sayi // 2
        else:
            
            sayi = (sayi * 3) + 1
        
        aa += 1
    
    
    
    print("\nall steps" ,aa)
