score=input()
arr1=[None]*(len(score))
arr2=[None]*(len(score))
j=0
s=0
k=len(score)
for i in range(0,len(score)):
    try:
        if score[i] == '0':
            print("hey")
            arr1[i-1]=10
            k=k-1
        else:
            arr1[j]=int(score[i])
            j += 1
    except ValueError:
        arr1[j]=score[i]
        j+=1
#arr1.pop(k)
print(arr1)
result=0
for i in range(0,len(arr1)):

        if arr1[i] == 'S':
            arr2.append(arr1[i - 1])
            s+=1
        elif arr1[i] == 'D':
            arr2.append(pow(arr1[i - 1],2) )
            s += 1
        elif arr1[i] == 'T':
            arr2.append(pow(arr1[i - 1],3))
            s += 1
        elif arr1[i] == '*':
            if s >1:
                arr2[-1]*=2
                arr2[-2]*=2
            else:
                arr2[-1]*=2

        elif arr1[i] == '#':
            arr2[-1] = -arr2[-1]
print(arr2)
for i in arr2:
    try:
        result+=i
    except TypeError:
        continue

print(result)