import requests

def NewsFormBBC():

    main_url = "https://newsapi.org/v1/articles?source=bbc-news&sorBy=top&apikey=493f619140134ce0a65b28ae95e98635"
    open_bbc_page = requests.get(main_url).json()
    article = open_bbc_page["articles"]
    results = []

    for ar in article:
        results.append(ar["title"])

    for i in range(len(results)):
        print(i+1, results[i])

        from win32com.client import Dispatch
        speak = Dispatch("SAPI.Spvoice")
        speak.Speak(results)


if __name__ == '__main__':
    NewsFormBBC()