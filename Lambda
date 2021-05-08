
sample1 = lambda x,y,z: x+y+z
print (sample1(1,2,3))

sample2 = lambda x,y,z: x*y*z
print (sample2(1,2,3))

z = (lambda x,y: x+y) (10,20) 
print (z)





y = lambda x: x**3
print (y(7))

z = (lambda x,y: x**3+y**3) (3,4) 
print (z)

z = (lambda x,y: x**3+y**3) 
print (z(3,4))






# 앞 과에서 썼던 방법
for num in range(1, 3):
    if num % 2 == 0:
        print (num)
        continue
for num in range(1, 3):
    if num % 2 == 1:
        print (num)
        continue

# 람다 (두 가지 방법)
print ((lambda x, y: x if x % 2 == 0 else y)(1,2))
print ((lambda x, y: x if x % 2 == 1 else y)(1,2))

mylist = list(range(1, 3))
print (list(filter(lambda n:n % 2 == 0 , mylist)))
print (list(filter(lambda n:n % 2 == 1 , mylist)))
