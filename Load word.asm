.data
.text
.globl main
main:

li   $s0, 0x10010000        # our base address
lw   $s1, 0($s0)            #$s0 pointing to memory location that is $S0+1
lw   $s2, 0x001($s0)        #$s0 pointing to memory location that is $S0+2
lw   $s3, 0x002($s0)        #$s0 pointing to memory location that is $S0+3
lw   $s4, 0x003($s0)        #$s0 pointing to memory location that is $S0+4