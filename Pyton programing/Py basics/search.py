
def  main():

    document = ["bob","mary","manzi","jhon","sandra","bella","milla","sienna"]

    search_term = input("Search name: ")
    term = search_term.lower()
    if term in document:
        print("Found")

    else:
        print("Not found")
      

main()      