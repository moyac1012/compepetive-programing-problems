import math

# xi = [158, -115, -174, 22, 2, -66, -67, -42]
xi = [151,79,68,84,-155,53,-108,-154]
# xi = [158, -115, -174, 22, 2, -66, -67, -42]
yi = [-31,26,56,-45,34,-17,-147,-86]

# visit = [5,4,6,3,2,7,8,1]
visit = [1,2,3,4,5,6,7,8]

for i in range(len(visit)):
    visit[i] -= 1

ans = 0

for i in range(len(visit)):
    ans += math.sqrt((xi[visit[i]] - xi[visit[(i+1)%len(visit)]])**2 + (yi[visit[i]] - yi[visit[(i+1)%len(visit)]])**2)

print(ans)