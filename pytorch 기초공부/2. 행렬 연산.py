import torch


# 연산


# 행렬 준비
x = torch.rand(2,4)
y = torch.rand(2,4)

# 이렇게 더해도 되고
pritn(x+y)

# 이렇게 해도 되고
print(torch.add(x,y))

# 비어있는 행렬 만들어서 out으로 넣어도 되고
result = torch.empty(2,4)
torch.add(x,y, out=result)
print(result)

# 빼기 곱하기 나누기 내적 가능
print(torch.sub(x,y))
print(torch.mul(x,y))
print(torch.div(x,y))
print(torch.mm(x,y))
