#Find the Highest Integer in the Array Using Recursion 25
def highestint(a,n):
    if n==1:
        return a[0]
   
    return max(a[n-1],highestint(a,n-1))

n=int(input())
arr=list(int(i) for i in input().strip().split(' '))
ans= highestint(arr,n)
print(ans)

