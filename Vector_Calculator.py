import time

def cross_product(x, y):
    return [
        x[1] * y[2] - y[1] * x[2],
        x[0] * y[2] - y[0] * x[2],
        x[0] * y[1] - x[1] * y[0]
    ]

def dot_product(x, y):
    return x[0] * y[0] + x[1] * y[1] + x[2] * y[2]

def main():
    start_time = time.time()

    Vector_1 = [0, 0, 0]
    Vector_2 = [0, 0, 0]

    # Input for Vector 1
    Vector_1[0] = int(input("Vector 1: Enter element 1: "))
    Vector_1[1] = int(input("Vector 1: Enter element 2: "))
    Vector_1[2] = int(input("Vector 1: Enter element 3: "))

    # Input for Vector 2
    Vector_2[0] = int(input("Vector 2: Enter element 1: "))
    Vector_2[1] = int(input("Vector 2: Enter element 2: "))
    Vector_2[2] = int(input("Vector 2: Enter element 3: "))

    # Calculate cross product
    cross_product_solution = cross_product(Vector_1, Vector_2)
    print(f"The cross product is: [{cross_product_solution[0]}, {cross_product_solution[1]}, {cross_product_solution[2]}]")

    # Calculate dot product
    dot_product_solution = dot_product(Vector_1, Vector_2)
    print(f"The dot product is: {dot_product_solution}")

    end_time = time.time()
    time_taken = end_time - start_time
    print(f"Total time taken by program: {time_taken} seconds")

if __name__ == "__main__":
    main()

