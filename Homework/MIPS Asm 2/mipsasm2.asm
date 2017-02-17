# Harold Agnote 
# Professor Joshua Hayter
# CECS 341 - Sec. 07
# 2/16/2017

.data
arrayb:	.byte	0, 0, 0, 0, 0, 0, 0
arrayh: .half	30, 7, 14, 5, 12
arrayw: .word	123, 222, 249, 327, 445, 971
arrayb2: .half	0, 0, 0, 0, 0, 0, 0

# Exercise 1

.text
addi $s0, $0, 4		
lw $t0, arrayw($0)
lw $t1, arrayw($s0)
addi $s0,$s0, 4
lw $t2, arrayw($s0)
addi $s0,$s0, 4
lw $t3, arrayw($s0)
addi $s0,$s0, 4
lw $t4, arrayw($s0)
addi $s0,$s0, 4
lw $t5, arrayw($s0)

addi $s0,$0, 4
sw $t5, arrayw($0)
sw $t4, arrayw($s0)
addi $s0, $s0, 4
sw $t3, arrayw($s0)
addi $s0, $s0, 4
sw $t2, arrayw($s0)
addi $s0, $s0, 4
sw $t1, arrayw($s0)
addi $s0, $s0, 4
sw $t0, arrayw($s0)

# Exercise 2

addi $t6, $0, 6				# $t6 = 6
addi $t1, $0, 0				# $t1 = i

for_loop:

beq $t0, $0, exit_loop		# If true, exit loop
slt $t0, $t1, $t6			# Check if $t0 < $t6
sll $t4, $t1, 2				# 4 * i
lw  $t2, arrayw($t4)		# $t2 = arrayw[i]
addi $t5, $t4, 4			# $t5 = i + 1
lw	$t3, arrayw($t5)		# $t3 = arrayw[i+1]
sub $s0, $t3, $t2			# $s0 = arrayw[i+1] - arrayw[i]
sb	$s0, arrayb($t1)		# arrayb[i] = $s0
addi $t1, $t1, 1			# i++
j	for_loop

exit_loop:

# Exercise 3

addi $t6, $0, 6				# $t6 = 6
addi $t1, $0, 0				# $t1 = i

dowhile:

slt $t0, $t1, $t6			# Check if $t0 < $t6
beq $t0, $0, exit_dowhile	# If true, exit loop
sll $t4, $t1, 1				# 2 * i

sll $s0, $t1, 1				# 2 * j
add $s0, $s0, 3				# 2 * j + 3

sh	$s0, arrayb2($t4)		# arrayb2[j] = 2*j + 3
addi $t1, $t1, 1			# i++
j dowhile

exit_dowhile:

# Exercise 4

addi $t1, $0, 0				# $t1 = i
addi $s0, $0, 0				# Number Consecutive = 0
addi $s1, $0, 1				# 1

while:
sll $t4, $t1, 2				# 4 * i
lw	$s5, arrayw($t4)		# $s0 = arrayw[i]
and $s2, $s5, $s1			# Check if odd
beq $s2, $0, exit_while		# If odd, exit
addi $s0, $s0, 1			# Increment number of Consecutive odds
addi $t1, $t1, 1			# i++
j	while

exit_while:

