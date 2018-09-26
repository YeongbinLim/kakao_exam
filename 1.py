width=int(input())
arr3=[None]*(width)
arr4=[None]*(width)
arr1= list(map(int, input("1입력").split()))
print(len(arr1))
a=len(arr1)
if width!=a:
    arr1 = list(map(int, input("오바함 다시1입력").split()))
    print(len(arr1))

arr2= list(map(int, input("2입력").split()))
print(len(arr2))
b=len(arr2)
if b!=width:
    arr2 = list(map(int, input("오바함 다시2입력").split()))


for i in range(0,width):
    arr3[i]=bin(arr1[i] | arr2[i])
    print(arr3[i])
    arr4[i]=str(arr3[i])
    arr4[i]=arr4[i].replace("0b","")
    arr4[i]=arr4[i].replace("0"," ")
    arr4[i] = arr4[i].replace("1", "#")

print(arr4)