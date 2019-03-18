.data
	HelloWorldString:
		.asciz "Hello World!"
	CallDemo:
		.asciz "Call works!"

.text
	.globl _start

	_start:
        nop
        jmp ExitProgram		
		# Write HelloWorld
        movl $4, %eax
        movl $1, %ebx
		movl $HelloWorldString, %ecx
        movl $12, %edx
        int $0x80
        
    ExitProgram:
        #Exit the program
        movl $1, %eax
        movl $10, %ebx
        int $0x80

    CallMe:
        movl $4, %eax
        movl $1, %ebx
        movl $CallDemo, %ecx
        movl $11, %edx
        int $0x80
        ret
