//@author   Bastidas Verdin Miguel Antonio
//@Date     03/12/2021

fibo : cmp r0, # 2 @ if n<2
	movlo r0, # 1 @ return 1
	bxlo lr @ salgo de la funci 

	push { lr } @ salvaguarda lr
	sub sp, # length @ hago espacio para v.locales
	sub r0, # 1 @ r0= n-1
	str r0, [ sp, # local1 ] @ salvo n-1 en [sp]
	bl fibo @ fibonacci (n-1)
	str r0, [ sp, # local2 ] @ salvo salida de fib. (n-1)
	ldr r0, [ sp, # local1 ] @ recupero de la pila n-1
	sub r0, # 1 @ calculo n-2
	bl fibo @ fibonacci (n-2)
	ldr r1, [ sp, # local2 ] @ recupero salida de fib (n-1)
	add r0, r1 @ lo sumo a fib. (n-1)

	add sp, # length @ libero espacio de v.locales
	pop { lr } @ recupero registros, sólo lr
	bx lr @ salgo de la funci ón
