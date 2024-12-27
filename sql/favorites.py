import csv

with open("customer.csv","r") as file:

    reader = csv.DictReader(file)
    counts = {}

    for row in reader:

        favorite = row['Country']

        if favorite in counts:

            counts[favorite] +=1

        else:
            
            counts[favorite] = 1



for favorite in sorted(counts,key=lambda Country: counts[Country] , reverse = True):
    print(f"{favorite}:{counts[favorite]}")
