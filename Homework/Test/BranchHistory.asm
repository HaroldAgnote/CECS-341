addi $2, $0, 2
addi $7, $0, 12
addi $21, $0, 0
addi $22, $0, 1
addi $11, $0, 4

L1:	addi $21, $21, 1	
	andi $10, $21, 3	
	beq $10, $0, L2	#branch 1
	addi $21, $21, 1	
L2: slt $10, $10, $2	
 	beq $10, $0, L3	#branch 2
	addi $21, $21, 1	
L3:	slt $10, $21, $7	
	beq $10, $22, L1	#branch 3
