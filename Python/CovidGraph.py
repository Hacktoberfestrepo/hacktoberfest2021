import requests
import matplotlib.pyplot as plt
import numpy as np
from bs4 import BeautifulSoup as bf
url=requests.get('https://www.worldometers.info/coronavirus/?utm_campaign=homeAdvegas1?')
new_affected=[]
new_deaths=[]
info_link=[]
country_name=[]
soup=bf(url.content,'html.parser')
news_ul=soup.find_all('ul',class_='news_ul')
for uls in news_ul:
	ne=uls.find('li',class_='news_li')
	cases=ne.find_all('strong')
	affected=cases[0]
	death=cases[1]
	link=cases[1].find_all('a')
	for cas in affected:
		affect=cas.split(' ')[0]
		new_affected.append(int(affect.replace(',','')))
	for deat in death:
		if 'new death' in deat:
			de=(deat.split(' ')[0]).replace(',','')
			new_deaths.append(int(de))
		else:
			new_deaths.append(0)
	for lin in link:
		if 'new death' not in lin:
			ln=lin['href']
			info_link.append('https://www.worldometers.info'+ln)
		else:
			ln=cases[2].find['a']
			lk=ln['href']
			info_link.append('https://www.worldometers.info'+lk)
		
	for coun in link:
		if 'new death' not in coun:
			country_name.append(coun.text)
		else:
			country_name.append(ln)
w=0.4			
bar1=np.arange(len(country_name[:5]))
bar2=[i+w for i in bar1]

plt.bar(bar1,new_affected[:5],w,label='Deseased')
plt.bar(bar2,new_deaths[:5],w,label='Deaths')
plt.xticks(bar1+w/2,country_name[:5])
plt.xlabel('Countries',fontweight='bold')
plt.ylabel('Total Population',fontweight='bold')
plt.legend()
plt.show()
