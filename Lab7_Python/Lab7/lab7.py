import math
func_1 = lambda n,x : (n**x)/math.factorial(x)

print("Please enter a value for n")
value_n=int(input())
print("Please enter a value for x")
value_x=int(input())

x=[]
total=0
for a in range(value_x):
    x.append(func_1(value_n,a))

for a in x:
    total+=a

print(total)
#end of question 1

total_func_2=0
def func_2 (temp_n):
    global total_func_2
    if (temp_n < 1):
        print(total_func_2)
    else:
        total_func_2+=(-1) ** (temp_n + 1) / temp_n
        func_2(temp_n-1)

func_2(5)