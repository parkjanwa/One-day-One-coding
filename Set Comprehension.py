a = {'BMW' ,'FORD', 'CHEVY', 'FORD'}
b = {2019, 2020}

comb_car = {(c, y) for c in a for y in b}
print (comb_car)
// {('CHEVY', 2019), ('CHEVY', 2020), ('BMW', 2019), ('BMW', 2020), ('FORD', 2019), ('FORD', 2020)}





myset = {1,2,3,"a","b",4.0,5.0,True, False}
newset2 = {i for i in myset if type(i)==int}
print (newset2)

myset = {1,2,3,"a","b",4.0,5.0,True, False}
newset1 = {i for i in myset if type(i)==float}
print (newset1)

myset = {1,2,3,"a","b",4.0,5.0,True, False}
newset4 = {i for i in myset if type(i)==bool}
print (newset4)
//False
