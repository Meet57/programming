import urllib.request
from inscriptis import get_text

for i in range(1001, 1002):
    url = "http://xenesis2020.ldrp.ac.in/mobile_app/testing.php?receipt=" + str(i)
    html = urllib.request.urlopen(url).read().decode('utf-8')

    text = get_text(html)

    rep = 'No:' + str(i)
    text = text.replace("No:", rep)

    print(text)
    print('************************************************')
