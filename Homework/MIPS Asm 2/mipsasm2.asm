# Harold Agnote 
# Professor Joshua Hayter
# CECS 341 - Sec. 07
# 2/14/2017

# Exercise 1

.data
arrayb:	.byte	0, 0, 0, 0, 0, 0, 0
arrayh: .half	30, 7, 14, 5, 12
arrayw: .word	123, 222, 249, 327, 445, 971
arrayb2: .half	0, 0, 0, 0, 0, 0, 0

.text
addi $s0, $0, 4
lw $t0, arrayw()