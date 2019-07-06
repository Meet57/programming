#it requires net

import os
from gtts import gTTS

mytext = 'Welcome to geeksforgeeks!'

language = 'en'

myobj = gTTS(text=mytext, lang=language, slow=False)

myobj.save("welcome.mp3")

os.system("welcome.mp3")
