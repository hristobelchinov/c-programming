	.file	"zad2.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii "\320\235\320\260\320\271-\320\274\320\260\320\273\320\272\320\276\321\202\320\276 \320\276\320\261\321\211\320\276 \320\272\321\200\320\260\321\202\320\275\320\276 \320\265: %d\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$12, -8(%rbp)
	movl	$18, -12(%rbp)
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %eax
	cmpl	%eax, %edx
	cmovge	%edx, %eax
	movl	%eax, -4(%rbp)
.L4:
	movl	-4(%rbp), %eax
	cltd
	idivl	-8(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L2
	movl	-4(%rbp), %eax
	cltd
	idivl	-12(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L2
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	jmp	.L6
.L2:
	addl	$1, -4(%rbp)
	jmp	.L4
.L6:
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev3, Built by MSYS2 project) 13.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
