.data
     message1  : .asciiz "if (i==j) f = g+h; else f = g-h;- Prove if Branch are equal"
                    # f=18
     message2  :  .asciiz "if (i==j) f = g+h; else f = g-h;- :Prove if Branch not equal"
        
.text
   
 main:
     addi $t0,$zero, 12         # g=12
     addi $t1,$zero , 6         # h=6
    
     beq $t0, $t1,addition
     bne $t0,$t1, subtraction
    # syscall to end a program
    j terminate
    
    addition:
    add  $t3, $t0,$t1
    li $v0,4
    la $a0, message1
    j terminate
   
    subtraction:
    sub  $t4,$t0,$t1
    li $v0,4
    la $a0, message2
    j terminate
   
   
    terminate:
    li $v0,10
    syscall
  
    


     