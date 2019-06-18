t=int(input())
while t>-0:
    n=int(input())
    a=list(map(int,input().split()))
    dp=[0]*n
    xp=sum(a)
    dp[0]=a[0]
    ans1=dp[0]
    for i in range(1,n):
        dp[i]=max(a[i],dp[i-1]+a[i])
        ans1=max(ans1,dp[i])
    b=a
    
    for i in range(n):
        b[i]=-b[i]
    dp2=[0]*n
    dp2[0]=b[0]
    ans2=dp2[0]
    for i in range(1,n):
        dp2[i]=max(b[i],dp2[i-1]+b[i])
        ans2=max(ans2,dp2[i])
    if(xp+ans2==0):
        print(ans1)
    else:
        print(max(ans1,xp+ans2))
    
    t-=1
