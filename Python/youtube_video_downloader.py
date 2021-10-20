from pytube import YouTube
from tkinter import*
from tkinter.filedialog import askdirectory

#Initializing Tk
root = Tk()
root.withdraw()

#Taking url input
url = input("Paste your url here: \n")

#Making Class object
yt = YouTube(url)

#Getting directory to store file
file_path = askdirectory()

#Downloading Youtube video
print("Please wait your file is downloading..... ")
stream = yt.streams.first()
stream.download(output_path = file_path)
print("Your file is successfully downloaded ")

#Destroying root window
root.destroy()
root.mainloop()