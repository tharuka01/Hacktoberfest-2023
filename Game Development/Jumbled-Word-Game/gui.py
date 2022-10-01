import tkinter
from tkinter import *
import random
from tkinter import messagebox
# you can add more words as per your requirement
answers = [
    "python",
    "java",
    "apple",
    "dinner",
    "swift",
    "canada",
    "india",
    "america",
    "london",
]
words = ["nptoyh", "avja","plepa","nerndi","wfsit","cdanaa","aidin","aiearcm","odnlon"]
# I have improvised the code by using len(words)
num =  random.randrange(0, len(words), 1)

def default():
    global words,answers,num
    lbl.config(text = words[num])

def res():
    global words,answers,num
    num = random.randrange(0, len(words), 1)
    lbl.config(text = words[num])
    e1.delete(0, END)

def checkans():
    global words,answers,num
    var = e1.get()
    if var == answers[num]:
        messagebox.showinfo("Success !!! ", "This is a correct answer")
        res()
    else:
        messagebox.showerror("Error !!! ", "This is not Correct")
        e1.delete(0, END)

root = tkinter.Tk()
root.geometry("350x400+400+300")
root.title("Jumbbled Word Game")
root.configure(background = "#FF7E00")

lbl = Label(
    root,
    text = "Your here",
    font = ("Verdana", 18),
    bg = "#000000",
    fg = "#3DDC84",
)
lbl.pack(pady = 30,ipady=10,ipadx=10)

ans1 = StringVar()
e1 = Entry(
    root,
    font = ("Verdana", 16),
    textvariable = ans1,
)
e1.pack(ipady=5,ipadx=5)

btncheck = Button(
    root,
    text = "Check",
    font = ("Comic sans ms", 16),
    width = 16,
    bg = "#27346F",
    fg = "#D0FF14",
    relief = GROOVE,
    command = checkans,
)
btncheck.pack(pady = 40)

btnreset = Button(
    root,
    text = "Reset",
    font = ("Comic sans ms", 16),
    width = 16,
    bg = "#800020",
    fg = "#D0FF14",
    relief = GROOVE,
    command = res,
)
btnreset.pack()

default()
root.mainloop()