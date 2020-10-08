
mov 0,r0
out r0,p0
mov 0,r1
out r1,p1
mov 1E0,r2
out r2,p2
mov 1f80,r3    
out r3,p3
mov 1980,r0
out r0,p4
mov 1980,r1
out r1,p5
mov 1f80,r2
out r2,p6
mov 1E0,r3
out r3,p7


IN P0,R0
ROR 1,r0
OUT R0,P0
;
IN P1,R0
ROR 1,r0
OUT R0,P1
;
IN P2,R0
ROR 1,r0
OUT R0,P2
;
IN P3,R0
ROR 1,r0
OUT R0,P3
;
IN P4,R0
ROR 1,r0
OUT R0,P4
;
IN P5,R0
ROR 1,r0
OUT R0,P5
;
IN P6,R0
ROR 1,r0
OUT R0,P6
;
IN P7,R0
ROR 1,r0
OUT R0,P7
JMP c;

stop


