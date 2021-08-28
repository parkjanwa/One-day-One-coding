my_list4 = []
my_list4.append("Ford")
print(my_list4)                       //['Ford']
print(my_list4.count("Ford"))         //1 (Ford가 몇번 있는지 확인)
print(my_list4.index("Ford"))         //0 (어디에 있는지 확인)
my_list4.append("BMW")                
print(my_list4)                       //['Ford', 'BMW']

print(my_list4.pop(0))                //Ford (pop은 아이템이 보여진 후에 리스트 내에서 삭제된다)
my_list4.insert(1,"Chevrolet")
print(my_list4)                       //['BMW', 'Chevrolet']




my_list5 = []
my_list5.append("lion")
print(my_list5)                       //['lion']
my_list6 = []
my_list6.append("tiger")            
print(my_list6)                       //['tiger']
my_list5 = my_list5 + my_list6      
print(my_list5)                       //['lion', 'tiger']
my_list5.insert(1, "snake")
print(my_list5)                       //['lion', 'snake', 'tiger']



list4 = [1,2,3,4,5,6,7]
list4.insert(3, 100)
print(list4)                          //[1,2,3,100,4,5,6,7]




list5 = [3,4,5,6]
list5.pop(2)
print(list5)                          //[3,4,6]


