import csv

def main():
    
    with open("customer.csv",'r') as file:
        search_term = prompt_user()
        reader = csv.DictReader(file)
        counts = {}

        for row in reader:
            favorite = row['Country']

            if favorite in counts:
                counts[favorite] += 1

            else:
                counts[favorite] = 1

    if search_term in counts:
        print(f"{search_term}:{counts[search_term]}")  
    else:
        print("user not found")          
                

def prompt_user():

    search_term = input("Look number of people of your prefered country: ").title()

    return search_term

main()


    



