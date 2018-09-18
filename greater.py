n1=int(input("Enter the number1:"))
n2=int(input("Enter the number2:"))
n3=int(input("Enter the number3:"))
if(n1>n2):
  if(n2>n3):
    print(n1)
elif(n2>n3):
  print(n2)
else:
  print(n3)
