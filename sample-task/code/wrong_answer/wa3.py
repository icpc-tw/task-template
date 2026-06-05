mean, median = map(int, input().split())

assert (-100 <= mean <= 100)
assert (-100 <= median <= 100)

a = mean * 3 - median - 1000000
b = median
c = 1000000

print(3)
print(a, b, c)
