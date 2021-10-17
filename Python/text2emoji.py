import text2emotion as te

text = "I was asked to sign a third party contract a week out from stay. If it wasn't an 8 person group that took a lot of wrangling I would have cancelled the booking straight away. Bathrooms - there are no stand alone bathrooms. Please consider this - you have to clear out the main bedroom to use that bathroom. Other option is you walk through a different bedroom to get to its en-suite. Signs all over the apartment - there are signs everywhere - some helpful - some telling you rules."
result = te.get_emotion(text)
print(result)

text2 = "I can't understand what to do now."
result2 = te.get_emotion(text2)
print(result2)
