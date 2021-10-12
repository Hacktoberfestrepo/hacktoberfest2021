Height=float(input("Enter your height in centimeters: "))
Weight=float(input("Enter your Weight in Kg: "))
Height = Height/100
BMI=Weight/(Height*Height)
print("your Body Mass Index is: ",BMI)
if(BMI>0):
	if(BMI<=16):
		print("you are severely underweight, you have to eat more")
	elif(BMI<=18.5):
		print("you are underweight try to eat spmemore")
	elif(BMI<=25):
		print("you are Healthyand keep it.")
	elif(BMI<=30):
		print("you are overweight and try to do excercise")
	else: print("you are severely overweight")
else:("enter valid details")
