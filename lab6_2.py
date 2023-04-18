#Question2

def recursive_sum(n):
    """
    Parameters: n (int): The upper limit of the summation
    Returns: None
    """
    global total_sum
    if n == 0:
        return
    else:
        current_sum = 0
        for k in range(1, n + 1):
            current_sum += ((-1) ** (k + 1)) / k
        total_sum += current_sum

        recursive_sum(n - 1)


total_sum = 0

recursive_sum(10)

print(total_sum)
