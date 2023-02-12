list=[1,3,5,6]
num=int(input("enter the number:"))

for i in range (len(list)):
    if (list[i]==num):
        print ("index of the number is :",i)
        break
if list[i]!=num:
    print("wrong")
