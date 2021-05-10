def bubblesort(l):
    n=len(l)
    for i in range(0,n):
        for j in range(0,n-i-1):
            if l[j]>l[j+1]:
                l[j],l[j+1]=l[j+1],l[j]



l=[]
l1=[]
n = int(input())

a=input()
l=a.split()
        
for i in l:
    if i not in l1:
        l1.append(i)
l2=[]          

for i in l1:
    l2.append(int(i))

bubblesort(l2)
  
print(l2[-2])
