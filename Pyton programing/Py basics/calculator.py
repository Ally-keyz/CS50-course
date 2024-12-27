
def main():
    try:
        x = int(input("Enter number: "))
        y = int(input("Enter number: "))

        sumation = x + y

        print(f"The sum is {sumation}")

    except ValueError:
        print("no number entered!!")


main()