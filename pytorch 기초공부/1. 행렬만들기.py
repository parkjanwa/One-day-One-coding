import torch


# 행렬 만들기


# 비어있는 4X2크기의 행렬 만들기
a = torch.empty(4,2)

# 0과 1 사이에서 숫자 균등생성
b = torch.rand(4,2)

# 평균이 0이고 표준편차가 1인 가우시안 정규분표 이용헤 생성
c = torch.zeros(4,2, dtype = torch.long)

# 직접 행렬 커스텀
d = torch.tensor([3, 2, 3])

# 1로 행렬값 설정
e = d.new_ones(2,4,dtype=double)

# e행렬의 모양을(2x4) 그대로 따와서 random값 넣고 타입수정 
f = torch.randn_like(e, dtype=torch.float)
