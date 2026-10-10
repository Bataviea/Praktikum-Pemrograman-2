nilai1 = float(input("Masukkan Nilai Pertama : "))
nilai2 = float(input("Masukkan Nilai Kedua : "))

hasil = nilai1 + nilai2

n1_str = f"{int(nilai1)}" if nilai1.is_integer() else f"{nilai1}"
n2_str = f"{int(nilai2)}" if nilai2.is_integer() else f"{nilai2}"

print(f'Hasil dari penjumlahan nilai pertama "{n1_str}" dan nilai kedua "{n2_str}" adalah "{hasil:.2f}"')