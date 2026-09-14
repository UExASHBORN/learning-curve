n = 88
a = [1,13,16,20,20,20,20,20,20,20,21,26,66,77,88,99]
l  = 0
r = len(a) -1
while  l<= r:
    m = (l+r)//2
    print(m)
    if a[m] == n:
        print(f"value {n} found at index{m}")
        break
    elif a[m] > n:
        r = m -1
    else:
        l = m +1
