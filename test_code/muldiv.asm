lui $t0, 0x1234
lui $t1, 0x1234
lui $t2, 0xffff
lui $t3, 0xffff
ori $t2, $t2, 0xffff
ori $t3, $t3, 0xffff
ori $t0, 0x5678
ori $t1, 0x5678
mult $t0, $t1
mfhi $s0
mflo $s1
multu $t2, $t3
mfhi $s2
mflo $s3
mult $t2, $t3
mfhi $s2
mflo $s3 #不同指令对比
div $t2, $t3
mfhi $s2
mflo $s3
divu $t2, $t3
mfhi $s2
mflo $s3
mthi $t1
mfhi $t1
mtlo $t2
mflo $t2