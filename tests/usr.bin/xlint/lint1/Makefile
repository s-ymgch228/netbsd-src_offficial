# $NetBSD: Makefile,v 1.128 2022/06/17 20:31:56 rillig Exp $

NOMAN=		# defined
MAX_MESSAGE=	349		# see lint1/err.c

.include <bsd.own.mk>

ARCHSUBDIR!=	cd ${NETBSDSRCDIR}/usr.bin/xlint/lint1 && ${MAKE} -v ARCHSUBDIR

TESTSDIR=	${TESTSBASE}/usr.bin/xlint/lint1

TESTS_SH=	t_integration
TESTS_SH_SRC_t_integration=	archsubdir.sh t_integration.sh
CLEANFILES+=	archsubdir.sh
CLEANFILES+=	*.exp

archsubdir.sh:
	@echo archsubdir=${ARCHSUBDIR} >${.TARGET}

FILESDIR=	${TESTSDIR}
FILES+=		c11_generic_expression.c
FILES+=		c90.c
FILES+=		c99_bool_strict_suppressed.c
FILES+=		c99_init_array.c
FILES+=		c99_init_designator.c
FILES+=		d_alignof.c
FILES+=		d_bltinoffsetof.c
FILES+=		d_c99_anon_struct.c
FILES+=		d_c99_anon_union.c
FILES+=		d_c99_bool.c
FILES+=		d_c99_bool_strict.c
FILES+=		d_c99_bool_strict_syshdr.c
FILES+=		d_c99_complex_num.c
FILES+=		d_c99_complex_split.c
FILES+=		d_c99_compound_literal_comma.c
FILES+=		d_c99_decls_after_stmt.c
FILES+=		d_c99_decls_after_stmt2.c
FILES+=		d_c99_decls_after_stmt3.c
FILES+=		d_c99_flex_array_packed.c
FILES+=		d_c99_for_loops.c
FILES+=		d_c99_func.c
FILES+=		d_c99_init.c
FILES+=		d_c99_nested_struct.c
FILES+=		d_c99_recursive_init.c
FILES+=		d_c99_struct_init.c
FILES+=		d_c99_union_cast.c
FILES+=		d_c99_union_init1.c
FILES+=		d_c99_union_init2.c
FILES+=		d_c99_union_init3.c
FILES+=		d_c99_union_init4.c
FILES+=		d_c99_union_init5.c
FILES+=		d_c9x_array_init.c
FILES+=		d_c9x_recursive_init.c
FILES+=		d_cast_fun_array_param.c
FILES+=		d_cast_init.c
FILES+=		d_cast_init2.c
FILES+=		d_cast_lhs.c
FILES+=		d_cast_typeof.c
FILES+=		d_compound_literals1.c
FILES+=		d_compound_literals2.c
FILES+=		d_constant_conv1.c
FILES+=		d_constant_conv2.c
FILES+=		d_cvt_constant.c
FILES+=		d_cvt_in_ternary.c
FILES+=		d_decl_old_style_arguments.c
FILES+=		d_ellipsis_in_switch.c
FILES+=		d_fold_test.c
FILES+=		d_gcc_compound_statements1.c
FILES+=		d_gcc_compound_statements2.c
FILES+=		d_gcc_compound_statements3.c
FILES+=		d_gcc_extension.c
FILES+=		d_gcc_func.c
FILES+=		d_gcc_variable_array_init.c
FILES+=		d_incorrect_array_size.c
FILES+=		d_init_array_using_string.c
FILES+=		d_init_pop_member.c
FILES+=		d_lint_assert.c
FILES+=		d_long_double_int.c
FILES+=		d_nested_structs.c
FILES+=		d_nolimit_init.c
FILES+=		d_packed_structs.c
FILES+=		d_pr_22119.c
FILES+=		d_return_type.c
FILES+=		d_shift_to_narrower_type.c
FILES+=		d_struct_init_nested.c
FILES+=		d_type_conv1.c
FILES+=		d_type_conv2.c
FILES+=		d_type_conv3.c
FILES+=		d_type_question_colon.c
FILES+=		d_typefun.c
FILES+=		d_typename_as_var.c
FILES+=		d_zero_sized_arrays.c
FILES+=		decl.c
FILES+=		decl_arg.c
FILES+=		decl_direct_abstract.c
FILES+=		decl_enum.c
FILES+=		decl_enum_c90.c
FILES+=		decl_struct_c90.c
FILES+=		decl_struct_member.c
FILES+=		emit.c
FILES+=		emit.exp-ln
FILES+=		emit_lp64.c
FILES+=		emit_lp64.exp-ln
FILES+=		expr_binary.c
FILES+=		expr_binary_trad.c
FILES+=		expr_cast.c
FILES+=		expr_fold.c
FILES+=		expr_fold_strict_bool.c
FILES+=		expr_precedence.c
FILES+=		expr_promote.c
FILES+=		expr_promote.exp-ln
FILES+=		expr_promote_trad.c
FILES+=		expr_promote_trad.exp-ln
FILES+=		expr_range.c
FILES+=		feat_stacktrace.c
FILES+=		gcc_attribute.c
FILES+=		gcc_attribute_aligned.c
FILES+=		gcc_attribute_enum.c
FILES+=		gcc_attribute_func.c
FILES+=		gcc_attribute_label.c
FILES+=		gcc_attribute_stmt.c
FILES+=		gcc_attribute_type.c
FILES+=		gcc_attribute_var.c
FILES+=		gcc_bit_field_types.c
FILES+=		gcc_builtin_alloca.c
FILES+=		gcc_builtin_overflow.c
FILES+=		gcc_cast_union.c
FILES+=		gcc_init_compound_literal.c
FILES+=		gcc_stmt_asm.c
FILES+=		gcc_typeof.c
FILES+=		gcc_typeof_after_statement.c
FILES+=		init.c
FILES+=		init_braces.c
FILES+=		init_c90.c
FILES+=		lex_char.c
FILES+=		lex_char_uchar.c
FILES+=		lex_comment.c
FILES+=		lex_floating.c
FILES+=		lex_integer.c
FILES+=		lex_integer_binary.c
FILES+=		lex_integer_ilp32.c
FILES+=		lex_string.c
FILES+=		lex_whitespace.c
FILES+=		lex_wide_char.c
FILES+=		lex_wide_string.c
FILES+=		${MSG_FILES}
FILES+=		msg_000_c90.c
FILES+=		msg_001_c90.c
FILES+=		msg_132_ilp32.c
FILES+=		msg_132_lp64.c
FILES+=		msg_230_uchar.c
FILES+=		msg_259_c90.c
FILES+=		msg_259_ilp32.c
FILES+=		msg_272_c90.c
FILES+=		op_colon.c
FILES+=		op_shl_lp64.c
FILES+=		parse_init_declarator.c
FILES+=		parse_stmt_error.c
FILES+=		parse_stmt_iter_error.c
FILES+=		parse_type_name.c
FILES+=		platform_ilp32.c
FILES+=		platform_int.c
FILES+=		platform_ldbl128.c
FILES+=		platform_ldbl64.c
FILES+=		platform_ldbl96.c
FILES+=		platform_long.c
FILES+=		platform_lp64.c
FILES+=		platform_schar.c
FILES+=		platform_uchar.c
FILES+=		stmt_for.c
FILES+=		stmt_goto.c
FILES+=		stmt_if.c

FILES+=		check-expect.lua

MSG_IDS=	${:U0 ${:U:${:Urange=${MAX_MESSAGE}}}:C,^.$,0&,:C,^..$,0&,}
MSG_FILES=	${MSG_IDS:%=msg_%.c}

# Note: only works for adding tests.
# To remove a test, the $$mi file must be edited manually.
sync-mi: .PHONY
	@set -eu;							\
	cd "${MAKEFILE:tA:H}/../../../..";				\
	mi="distrib/sets/lists/tests/mi";				\
	cvs update "$$mi";						\
	fmt="./usr/tests/usr.bin/xlint/lint1/%s\ttests-usr.bin-tests\tcompattestfile,atf\n"; \
	cat "$$mi" > "$$mi.tmp";					\
	printf "$$fmt" ${FILES} >> "$$mi.tmp";				\
	distrib/sets/fmt-list "$$mi.tmp";				\
	mv "$$mi.tmp" "$$mi";						\
	cvs diff "$$mi" || true

accept: .PHONY
	@archsubdir=${ARCHSUBDIR:Q} sh ./accept.sh ''

.include <bsd.test.mk>
