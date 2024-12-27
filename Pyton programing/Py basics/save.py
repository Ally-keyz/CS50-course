import csv



file = open("phoneBook.csv","a")

name = input("Enter name: ")
number = input("Enter number: ")
    
if name in file:
    print("Already exists!!")
else:
    writer = csv.writer(file)
    writer.writerow([name,number])


    