import pandas as pd

url = "C:/Users/Asus/Downloads/data.csv"

df = pd.read_csv(url,header=None)

print(df.describe())
