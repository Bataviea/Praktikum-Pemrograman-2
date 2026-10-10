import math

try:
    line1 = input().split()
    if len(line1) == 2:
        r, t = float(line1[0]), float(line1[1])
    else:
        r = float(line1[0])
        t = float(input())
except EOFError:
    pass

volume = math.pi * (r**2) * t
luas = 2 * math.pi * r * (r + t)
keliling = 2 * math.pi * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")