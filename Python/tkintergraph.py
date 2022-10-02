import tkinter
root = tkinter.Tk()
canvas = tkinter.Canvas(root, width=400, height=400)

canvas.pack()

for i in range(11):
	canvas.create_line(0, 400-i*40, i*40, 0)
for i in range(11):
	canvas.create_line(400, i*40, i*40, 0)
for i in range(11):
	canvas.create_line(0, i*40, i*40, 400)
for i in range(11):
	canvas.create_line(400, i*40, 400-i*40, 400)