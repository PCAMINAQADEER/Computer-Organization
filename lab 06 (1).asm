
#LAB 06- using load word 
.data
array: .word 2 3 4 5 6 7


.text
.globl main

main:
li $s2,2
li $s0 0x10010000         #loading a register for a memory acess for first variable acessing the fifth memory acess of array (4*5)
                          #meaning loading a byte from memory to register
lw $s1 20($s0)            #each with gap 4 to make index 20 

add $t0,$s1,$s2           # adding value= s +arr[5] ,where s=2

   