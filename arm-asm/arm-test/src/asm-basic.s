	area area_tc_1,code,readonly
	EXPORT tc_1_loop
	
tc_1_loop mov r1, r0
			mov r0, #0
	
loc_loop add r0, #4
			cmp r0, r1
			blt loc_loop
			
			end
	
