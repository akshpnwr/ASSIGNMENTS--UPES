x = [0, 0, 1, 1]
y = [0, 1, 0, 1]

l = [0, 0, 0, 1]

w1 = 0.1
w2 = 0.1

learningRate = 0.01

results = []

for r in range(100):
    E = 0
    temp = 0
    prev_E = 0
    for i in range(4):
        temp = ((x[i]*w1 + y[i]*w2) - l[i])**2
        E = E + temp

    results.append({"w1": w1, "w2": w2, "Error": E})

    w1 = w1 + learningRate*E
    w2 = w2 + learningRate*E

print(results)

ans = min(results, key=lambda ele: ele["Error"])

print(ans)
