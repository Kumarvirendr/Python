#sequencial datatype - str(string),List,Tuple
myvar = "My name is virendra" #str(string)
print(myvar)
print(type(myvar))
#list is  collection of data
MyNum = [10, "A", 20,45]
print(MyNum)
print(type(MyNum)) #list
print(MyNum[0])
MyNum.append(200)
# append list ke ander add karta hai last se
print(MyNum)

MyNum[0] = 100
print(MyNum)
MyNum.insert(1,'virendra')#insert(possion No. , change value)
print(MyNum)

#index find karna hai 
MyNumIndex = MyNum.index('A')
print("index",MyNumIndex)


#Square bracket 
# 2. tuple 
# tuple is the more than one or bracket n ho  or round bracket use () ya without bracket use kar sakte hai 
MyTuple =( 12, 67.8,"h1")

# ya  MyTuple = 12, 67.8,"h1"
 

print(MyTuple)
print(MyTuple[0])

#list me change possible hai 
# jabki tuple me change possible nhi hai 

print(type(MyTuple))

     