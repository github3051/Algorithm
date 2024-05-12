while True:
    num = int(input())
    if num == 0:
        break
    print("PREMIADO") if num % 42 == 0 else print("TENTE NOVAMENTE")