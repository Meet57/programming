import pandas as pd
from numpy.random import randn
import numpy as np

def sp():
    print("\n\n")

df = pd.DataFrame(randn(5,4),['a','b','c','d','e'],['w','x','y','z'])
print(df)

sp()

print(df.head(2))

sp()

print(df['w'])

sp()

print(df[['w','z']])

sp()

df['new'] = df['w'] + df['x']
print(df)

sp()
print(df.drop('new',axis=1))
#df = df.drop('new',axis=1)  -- this line ill store the rest in original df
#1=vertical
#0=horzontal

sp()
df = df.drop('new',axis=1)
print(df.drop('b',axis=0))

sp()
print(df)

sp()
print(df.shape)

sp()
print(df.loc['a'])

sp()
print(df.iloc[1])

sp()
print(df.loc['b','x'])

sp()
print(df.iloc[0,1])

sp()
d_df = df > 0
print(d_df)

sp()
