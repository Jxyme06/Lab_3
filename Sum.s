# C code that calls this file is:
#   int total_sum = sum_numbers(total_numbers, &number_array);
#
#   total_numbers = %rdi
#   number_array = %rsi
#   return value in rax register

.section .text
.globl sum_numbers

sum_numbers:
    xorq %rax, %rax         # Clear the rax register which will hold the total sum and later be returned

sum_loop:
    addq (%rsi), %rax       # Add the value of that index in the array to the total
    addq $4, %rsi
    decq %rdi
    jz done
    jmp sum_loop

done:
    ret

.section .note.GNU-stack,"",@progbits           # Avoid executable stack warning
