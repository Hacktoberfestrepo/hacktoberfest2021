def sieve(n):
    prime=[True for i in range(n+1)]
    p=2
    prime_no=[]
    while(p*p<=n):
        if(prime[p]==True):
            for i in range(p*p,n+1,p):
                prime[i]=False
        p+=1
    for i in range(2,n+1):
        if(prime[i]):
            prime_no.append(i)
    return prime_no
n=int(input())
print(sieve(n))



# def primeRange(a,b):
#     sieve    = [1]*(int(b**0.5)+2)  # normal sieve
#     abSieve  = [1]*(b-a+1)          # range sieve
#     p,np     = 1,2                  # prime candidate
#     while np<len(sieve):
#         p,np = np,p+2
#         if not sieve[p]: continue   # seek next prime
#         sieve[p*p::p]     = [0]*len(sieve[p*p::p])     # update normal sieve
#         first             = max(p*p-a,(p-a%p)%p)       # 1st offset in range
#         abSieve[first::p] = [0]*len(abSieve[first::p]) # update range sieve
#     return [ p for p,s in enumerate(abSieve,a) if s ] 