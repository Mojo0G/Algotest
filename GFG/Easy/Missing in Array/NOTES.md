
          Missing in Array

          - Summary: The code utilizes an array to store input numbers. It leverages the bitwise XOR operator to find the missing number. First, it XORs all numbers from 1 to n (n being the expected array length including the missing number). Then, it XORs the result with all elements in the input array. The final XOR result is the missing number because XORing a number with itself results in 0, canceling out existing numbers and leaving only the missing one.

          - Time Complexity: O(n) because the code iterates through the input array once and through a range of numbers from 1 to n (where n is the length of the array plus 1) once. Both loops are linear in terms of the input size.
          - Space Complexity: O(1) because the code uses a constant amount of extra space regardless of the input array size. The variables 'n', 'xor', and 'i' occupy constant space.
          