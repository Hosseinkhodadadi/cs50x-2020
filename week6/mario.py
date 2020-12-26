print("Height: ", end="")
height = int(input())


while (height > 8):
    print("Height: ", end="")
    height = int(input())

while (height < 1):
    print("Height: ", end="")
    height = int(input())


counter = 0
for h in range(height):
    counter += 1
    print(" "*int(height-counter), end="")
    print("#"*int(counter))