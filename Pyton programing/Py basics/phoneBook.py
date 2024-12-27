
persons = {
    "alpe":"0793216191",
    "manzi":"0788420807",
    "hakim":"0799933300",
    "ken":"0723456789",
}

def main():

    search_term = input("search: ")
    term = search_term.lower()

    if term in persons:
        print(f"number: {persons[term]}")
    else:
        print("Not found!!")


main()