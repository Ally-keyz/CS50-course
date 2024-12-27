
def main():
    try:
        x = int(input("Enter Height: "))
        y = int(input("Enter Base: "))

        equation = (x + y) /2

        print(f"Hypotenus : {equation}")

    except ValueError:
        print("Not a number")    






main()