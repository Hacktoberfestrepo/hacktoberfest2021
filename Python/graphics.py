import tkinter as tk
import tkinter.font
from tkinter import *
from main import *
from PIL import Image
from PIL import ImageTk

app = tk.Tk()
app.title("")
app.geometry("700x600")


canvas1 = tk.Canvas(app, width=700, height=400)

canvas1.pack()

#styling up the background:
image = Image.open("background.png.png")
image = image.resize((700, 600), Image.ANTIALIAS)

background_img = ImageTk.PhotoImage(image)
background = Label(app, image=background_img)
background.place(x=0, y=0)



#styling up buttons
search_button_img = PhotoImage(file="search_button.png")
search_button_img = search_button_img.subsample(5, 7) #shrinks image by a factor of 3

quit_button_img = PhotoImage(file="quit_button.png")
quit_button_img = quit_button_img.subsample(2,2)

delete_button_img = PhotoImage(file="Delete_text_button.png")
delete_button_img = delete_button_img.subsample(3,2)



#defining the text that will appear on the app and how it will be spaced
title_app = tk.Label(app, text="A Weather App",bg="#f5f5dc", bd=3, relief=RAISED, padx =100)
API_key = tk.Label(app, text="Please input your API key here:", anchor="center", bg="#f5f5dc", bd=3, relief=RAISED, padx=10)
prompt_question = tk.Label(app, text="Enter the name of the city you wish to get the weather of:",bg="#f5f5dc", bd=3, relief=RAISED, padx=10)

canvas1.create_window(350, 45, window=title_app)
canvas1.create_window(350, 125, window=API_key)
canvas1.create_window(350, 225, window=prompt_question)




#styling up text:
Title_font = tkinter.font.Font(family="Comic Sans MS", size=20, weight="bold")
title_app.configure(font=Title_font)

input_fonts = tkinter.font.Font(family="Comic Sans MS", size=16)
API_key = API_key.configure(font=input_fonts)
prompt_question = prompt_question.configure(font=input_fonts)


#prompting users for their API key
API_key = tk.Entry(app)
canvas1.create_window(350, 175, window=API_key)



#prompting users to enter the city they want to see the weather of.
city_entry = tk.Entry(app)
canvas1.create_window(350, 275, window=city_entry)



#displaying the current weather
def show_weather():
	global weather_today
	city = city_entry.get()
	key = API_key.get()
	weather_today = tk.Label(app, text=get_current_weather(city, key), bg="white", bd=2, relief=RAISED)
	weather_today.place(x=390, y=490)
	canvas1.create_window(350, 392, window=weather_today, anchor="center")


Search_button = tk.Button(app, text="Search", image=search_button_img, command=show_weather, border="0")
Search_button.place(x=300, y=490)
def clear_text():
		weather_today.destroy()



Delete_button = tk.Button(app, text="Delete Text",image=delete_button_img ,command=clear_text)
Delete_button.place(x=150, y=490)



#closing the program
quit = tk.Button(app, text="QUIT", image=quit_button_img, command=quit)
quit.place(x=450, y=497)


app.mainloop()


