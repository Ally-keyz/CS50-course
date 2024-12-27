import pyttsx3

engine = pyttsx3.init()



def hello():
    name = get_name()

    engine.say(f" {name} are you feeling okay today")
    engine.runAndWait()


def get_name():
    n = input("what is your name: ")
    return n 

hello()       