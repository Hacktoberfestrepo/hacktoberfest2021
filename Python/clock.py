# importing whole module tkinter
from tkinter import *
from tkinter.ttk import *
from time import strftime 

# creating tkinter window for code
root = Tk() 
root.title('Clock') 

# This function is used to display time on the label 
def time(): 
	string = strftime('%H:%M:%S %p') 
	lbl.config(text = string) 
	lbl.after(1000, time) 

# Making clock window attractive
lbl = Label(root, font = ('calibri', 50, 'bold'), 
			background = 'black', 
			foreground = 'yellow') 

# Aligning clock window at centre
lbl.pack(anchor = 'center') 
time() 

mainloop() 
