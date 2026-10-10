angka = []
while len(angka) < 6:
    angka += input().split()

a, b, i, j, x, y = map(float, angka[:6])

hasil = (a - b) * i / j - (x + y)

print(f"{hasil:.3f}")