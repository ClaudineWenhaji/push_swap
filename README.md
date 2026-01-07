
*This project has been created as part of the 42 curriculum by cwenhaj.*

# <h1 align="center">*PUSH_SWAP* project</h1>
### Description
The project is a structured algorithmic challenge with the goal of **sorting a list of integers using only two stacks (A and B) and a limited set of instructions to manipulate both stacks**. It consists on writing a C program that generates the minimal list of operations needed to sort the numbers.

The main objective is to **sort efficiently stack A while minimizing the number of operations.**

### Allowed operations
> At the beginning:
>> - The stack a contains a random number of unique negative and/or positive
integers.
>> - The stack b is empty.
>
To sort the numbers in stack A in ascending order, the following operations are posible:

- **sa (swap a)**: Swap the first 2 elements at the top of stack a.
Do nothing if there is only one element or none.
- **sb (swap b)**: Swap the first 2 elements at the top of stack b.
Do nothing if there is only one element or none.
- **ss : sa and sb at the same time**.
- **pa (push a)**: Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
- **pb (push b)**: Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
- **ra (rotate a)**: Shift up all elements of stack a by 1.
The first element becomes the last one.
- **rb (rotate b)**: Shift up all elements of stack b by 1.
The first element becomes the last one.
- **rr : ra and rb at the same time**.
- **rra (reverse rotate a)**: Shift down all elements of stack a by 1.
The last element becomes the first one.
- **rrb (reverse rotate b)**: Shift down all elements of stack b by 1.
The last element becomes the first one.
- **rrr : rra and rrb at the same time**

### Instructions

1. <u>Compilation:</u> **make**
2. <u>Execution:</u> **./push_swap [list of numbers]**. For example ./push_swap 2 4 -1. 
A **checker** is also available to verify if a sequence of operations sorts the list correctly ./push_swap 2 4 -1 | ./checker 2 3 -1 **OK** will be printed if sorting is correct otherwise **KO**
3. <u>Error Hanling:</u> **Error** will be printed if ***out of range integers, non-integers or duplicated arguments***

### Technical Choices

- **Chained lists** for dynamic memory managegement of stacks
- **Sorting algorithms**:
> 
>> 1. Small lists (of 2 to 5 integers) are sorted with sa, ra, rra, pa 
>> 2. Large lists using **Radix sort algorithm** 
>

**Radix sort** has been chosen because:
- It works efficiently wih integers and avoids complicated comparisons
- It guarantees a predictable number of operations relative to the number of bits in the numbers
- It is simple to implement using only stack operations (ra, pb, pa)
- It scales well for large inputs while keeping the total number of moves reasonable

<u>**About Radix Sort:**</u>
It's a non-comparative algorithm that sorts numbers **digit by digit**, starting from the least significant digit (LSD) to the most significant digit (MSD). It does not compare numbers directly. Instead, it distributes them into "buckets".
1. Look at the least significant bit of each number
2. Move numbers between buckets or stacks (depending whether 0 or 1, bits)
3. Repeat for the next bit (next significant digit) until all bits have been processed.

This way, numbers are sorted progressively without comparing them directly.

Radix sort is atble (meaning equal numbers keep their original relative order). It works best for integers or fixed-length strings. Less-practical for floating-point numbers or very large numbers.

For example: suppose we want to sort 170, 45, 75, 90, 802, 66

Step 1: sort by the units digit
- Units digits: 0, 5, 5, 0, 2, 6
- Place each number in a bucket corresponding to its unit (0-9)
>
>> Bucket 0: 170, 90
>> Bucket 2: 802
>> Bucket 3: 45, 75
>> Bucket 5: 66
>
- Reconstruct the first list by reading buckets in order: 170, 90, 802, 45, 75, 66

Step 2: Sort by the tens digit
- Tens digits: 7, 9, 0, 4, 7, 6
- Place each number in the corresponding bucket
>
>> Bucket 0: 802
>> Bucket 1: 45
>> Bucket 2: 66
>> Bucket 3: 170, 75
>> Bucket 5: 90
>
Reconstruct: 802, 45, 66, 170, 75, 90

Step 3: sort by the hundreds digit
- Hundreds digits: 8, 0, 0, 1, 0, 0
- Place each number in the bucket
>
>> Bucket 0: 45, 66, 75, 90
>> Bucket 4: 170
>> Bucket 5: 802
>
- Reconstruct: 45, 66, 75, 90, 170, 802 Finally sorted!

### Resources

<u>Readme Syntax:</u> [https://markdownguide.offshoot.io/basic-syntax/]
<u>Sorting Algorithms:</u>
- General: [https://42-cursus.gitbook.io/guide/2-rank-02/push_swap/algorithms]
- Radix: [https://www.meegle.com/en_us/topics/algorithm/radix-sort-algorithms]