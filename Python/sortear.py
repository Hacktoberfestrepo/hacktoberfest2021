from tkinter import *
from random import randint

def sortear():
    try:
        sortear = randint(1,int(num.get()))
        res['text'] = "Número: " + str(sortear)
    except:
        res['text'] = 'Digite um numero valido'

    
i =Tk()
i.title('Sortear')
i.geometry('200x100')


msg = Label(i,text='Sortear de 1 ate : ',font='Helverita')
msg.pack()
num = Entry(i)
num.pack()
bt = Button(i,text='Total',command=sortear,font='Cursive')
bt.pack()
res = Label(i,text='')
res.pack()


i.mainloop()
