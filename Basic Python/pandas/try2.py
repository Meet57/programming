
# Python program to show working
# of update() method in Dictionary

# Dictionary with three items
Dictionary1 = { 'A': 'Geeks', 'B': 'For', }
Dictionary2 = { 'B': 'Geeks' }

# Dictionary before Updation
print("Original Dictionary:")
print(Dictionary1)

# update the value of key 'B'
Dictionary1.update(Dictionary2)
print("Dictionary after updation:")
print(Dictionary1) 
