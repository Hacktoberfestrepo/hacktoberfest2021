import random
import string
random.randint(10,20)
letters = string.ascii_lowercase
digits = string.digits
options = letters+digits
# RUN THIS ONLY ONCE.
URLS_DB = {}
def get_short_url(url):
    # Convert a long url to short url and save in a Data.

    l = random.randint(4,6)

    short_url = "cm.in/"
    for i in range(l):
        short_url += random.choice(options)

    if URLS_DB.get(short_url) is not None:
        # invalid short url
        return get_short_url(url)
    else:
        URLS_DB[short_url] = url

    return short_url


def get_long_url(short_url):
    # converts a short url to a long url.
    if URLS_DB.get(short_url) is None:
        return "Short Link doesn't exists"
    else:
        return URLS_DB[short_url]
my_url = "https://codingminutes.com/python-data-science.html"
print(get_short_url(my_url))
print(get_long_url('cm.in/76iyd'))
