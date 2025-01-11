myvarList =[10,"A",20.45]

myvarList.append(200)
# append(function) list me value ko add karta hai last se
print(myvarList) 
myvarList.insert(1,'virndr')
print(myvarList) 

myvarIndex = myvarList.index("A")
print(myvarIndex)

myvarList.insert(myvarIndex,"hello")
print(myvarList)



myvarList.pop()
# last se data delete hoga 
print(myvarList)


myvarList.pop(2)
print(myvarList)



# Tuple =  me data fixed hota hai example (pan card no. , aadar card no. )  kewal use kar sakte hai  ,




