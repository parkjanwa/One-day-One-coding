a = {1,2,3,4,5}
b = {5,6,7,8,9}
print(a.intersection(b))           //5
print(a.union(b))                  //{1,2,3,4,5,6,7,8,9}
print(a.different(b))              //{1,2,3,4}


a.add(6)
print(a)                           //{1,2,3,4,5,6}

a.update({7,8})                    //{1,2,3,4,5,6,7,8}
print(a)

a.remove(5)
print(a)                           //{1,2,3,4,6,7,8}
