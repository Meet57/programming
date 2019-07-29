price = float(input("Price of phone:"))
GST = float(input("GST rate:"))
pgst = price*GST/100

print("\n\n\nPhone price : ",(price-pgst),"\nGST rate : ",GST,"\nGST price : ",pgst,"\nTotal Bill :",price)
