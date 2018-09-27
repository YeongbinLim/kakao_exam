a=input()
a=a.split()
cacheSize=int(input())
cache=[None]*(cacheSize)
cache_order=[2]*(cacheSize)
print(a)
cache_Hit=0
cache_Miss=0
i_counter=-1
j_counter=-1
for i in a:
    i_counter+=1
    for j in cache:
        j_counter+=1
        if i == j:
            cache_Hit+=1
            print("hit")
            print(j_counter)
            cache_order[j_counter]=1
            j_counter=-1
            print(cache)
            print(cache_order)
            break
        elif j==cache[-1]:
            cache_Miss+=1
            print("Miss")
            j_counter = -1
            print(j_counter)
            cache[cache_order.index(max(cache_order))]=i
            for k in range(0,len(cache_order)):
                cache_order[k]+=1

            cache_order[cache_order.index(max(cache_order))]=1
            print(cache)
            print(cache_order)
            break
result=0
result=1*cache_Hit+5*cache_Miss
print(result)