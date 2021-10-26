import datetime
from datetime import date
import requests




#example API KEY = "e2b47a49d350e13324ce145b3150ff64"

#creating the current weather part of the app:

def get_current_weather(city_name, key):

	URL= f"https://api.openweathermap.org/data/2.5/weather?q={city_name}&appid={key}"

	url_link = requests.get(URL)
	current_weather_data = url_link.json()

	if current_weather_data["cod"] == "404":
		return "City not found. Please re-enter the name of the city you'd wish to find the weather of."

	try:
		country = current_weather_data["sys"]["country"]
	except Exception:
		return "API Key is inserted incorrectly. Please try re-entering it."

	city = current_weather_data["name"]

	kelvin_temp = current_weather_data["main"]["temp"]
	celsius_temp = round(int(kelvin_temp) - 273.15, 1)
	fahrenheit_temp = round((int(kelvin_temp) * (9/5)) - 459.67, 2)

	feels_like_temp = current_weather_data["main"]["feels_like"]
	feels_like_C = round(int(feels_like_temp) - 273.15, 1)
	feels_like_F = round((int(feels_like_temp) * (9/5)) - 459.67)

	sky_description = current_weather_data["weather"][0]["description"]
	today = date.today()
	todays_time = datetime.time()

	result = f"The temperature in {city} ({country}) is: {celsius_temp} celsius or {feels_like_F} fahrenheit. \n " \
			f"The perceived temperature is: {feels_like_C} celsius or {feels_like_F} fahrenheit.\n" \
			f"The sky is {sky_description}"

	return str(today) + " " + str(todays_time) + "\n " + result +"\n"


#print(get_current_weather("London","e2b47a49d350e13324ce145b3150ff64"))


