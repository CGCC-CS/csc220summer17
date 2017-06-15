	.file	"multifile2.c"
	.section	.rodata
.LC0:
	.string	"SIZE=%d\n"
.LC1:
	.string	"MULTIPLE=%d\n"
.LC2:
	.string	"myNum = %d, a=%d\n"
.LC3:
	.string	"10! = %d\n"
.LC4:
	.string	"MAX(A,B) = %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	movl	$10, 24(%esp)
	movl	$20, 28(%esp)
	movl	$10, 4(%esp)
	movl	$.LC0, (%esp)
	call	printf
	movl	$7, 4(%esp)
	movl	$.LC1, (%esp)
	call	printf
	movl	24(%esp), %edx
	movl	myNum, %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$.LC2, (%esp)
	call	printf
	call	init
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	addone
	movl	24(%esp), %edx
	movl	myNum, %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$.LC2, (%esp)
	call	printf
	leal	24(%esp), %eax
	movl	%eax, (%esp)
	call	doubleIt
	movl	24(%esp), %edx
	movl	myNum, %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$.LC2, (%esp)
	call	printf
	movl	$10, (%esp)
	call	factorial
	movl	%eax, 4(%esp)
	movl	$.LC3, (%esp)
	call	printf
	movl	24(%esp), %edx
	movl	myNum, %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$.LC2, (%esp)
	call	printf
	movl	24(%esp), %edx
	movl	myNum, %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$.LC2, (%esp)
	call	printf
	movl	24(%esp), %eax
	cmpl	%eax, 28(%esp)
	cmovge	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC4, (%esp)
	call	printf
	movl	$30, 24(%esp)
	movl	24(%esp), %eax
	cmpl	%eax, 28(%esp)
	cmovge	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC4, (%esp)
	call	printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
