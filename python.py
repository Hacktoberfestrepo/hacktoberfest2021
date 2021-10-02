h = float (input("Height (cm): "))
w = float (input("Weight (Kg): "))
h = h/100
BMI=w/(h*h)
print("your Body Mass Index is: ",BMI)
if(BMI>0):
	if(BMI<=16):
		print("Underweight")
	elif(BMI<=18.5):
		print("Slim")
	elif(BMI<=25):
		print("Healthy")
	elif(BMI<=30):
		print("Overweight")
	else: print("Obese")
else:("enter valid details")
