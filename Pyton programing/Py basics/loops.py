
def main():
    number = get_number()

    make_triangle(number)



def get_number():
    try:
        num = int(input("Enter number: "))
        return num

    except ValueError:
        print("You did not enter an integer")


def make_triangle(num):

     for i in range(num):
            for j in range(num):
                print("$", end="")
            print("")                
       


main()

    