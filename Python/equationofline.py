print("*"*45)
print("Welcome to my equation-of-line finding program!")
print("*"*45)

print()
print("INSTRUCTIONS")
print("------------")

print("1. Enter the slope and y-intercept of any line")
print("2. The program will then tell you the equation of the line in y = mx + b format")

print()

m = int(input("Enter the slope: "))
b = int(input("Enter the y-intercept: "))

#Want to print y = mx + b
if m == 0:
	mOutput = ""
	bOutput = str(b)

elif m == 1:
	mOutput = "x"
	
	if b > 0:
		bOutput = "+" + str(b)

	elif b == 0:
		bOutput = ""

	else:
		bOutput = str(b)

elif m == -1:
	mOutput = "-x"
	
	if b > 0:
		bOutput = "+" + str(b)

	elif b == 0:
		bOutput = ""

	else:
		bOutput = str(b)

else:  #For example, y = 3x + 8
	mOutput = str(m) + "x"

	if b > 0:
		bOutput = "+" + str(b)

	elif b == 0:
		bOutput = ""

	else:
		bOutput = str(b)

print()
print("The equation of the line with slope", m, "and y-intercept", b, "is")
print("y =", mOutput + bOutput)