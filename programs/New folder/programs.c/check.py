entry = 0 
sum = 0
print("Enter the numbers to find their sum irrespect of negative numbers : ")
while True:
    entry = int(input())
    if (entry < 0):
        break 
        sum += entry
        print("sum =",sum)