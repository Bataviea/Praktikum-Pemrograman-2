import math

line = input().split()
if len(line) == 2:
    A, B = float(line[0]), float(line[1])
else:
    A = float(line[0])
    B = float(input())

tinggi = A
sisi_miring = B
alas = math.sqrt((sisi_miring**2) - (tinggi**2))

keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print(f"Alas = {round(alas)} cm")
print(f"Tinggi = {round(tinggi)} cm")
print(f"Keliling = {round(keliling)} cm")
print(f"Luas = {round(luas)} cm^2")