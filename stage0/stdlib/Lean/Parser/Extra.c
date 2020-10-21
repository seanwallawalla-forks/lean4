// Lean compiler output
// Module: Lean.Parser.Extra
// Imports: Init Lean.Parser.Basic Lean.PrettyPrinter.Parenthesizer Lean.PrettyPrinter.Formatter
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_PrettyPrinter_Formatter_strLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__2;
lean_object* l_Lean_PrettyPrinter_Formatter_indent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_ppIndent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1Indent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_ppSpace_parenthesizer(lean_object*);
extern lean_object* l_Lean_Parser_manyAux___main___closed__1;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__2;
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___rarg(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__5;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_strLit_formatter(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__4;
lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__1;
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_Parser_notFollowedByFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_identKind___closed__1;
lean_object* l_Lean_Parser_ppSpace_parenthesizer___rarg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_many_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_identNoAntiquot_parenthesizer___boxed(lean_object*);
lean_object* l_Lean_Parser_many1Indent_parenthesizer___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__3;
lean_object* l_Lean_Parser_ppGroup___boxed(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__19;
extern lean_object* l_Lean_Parser_numLit___elambda__1___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_indent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_formatter___closed__1;
lean_object* l_Lean_Parser_group_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_ident_parenthesizer(lean_object*);
extern lean_object* l_Prod_HasRepr___rarg___closed__1;
lean_object* l___regBuiltin_Lean_Parser_strLit_parenthesizer___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_group(lean_object*);
extern lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__1;
lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__14;
lean_object* l___regBuiltin_Lean_Parser_ppHardSpace_parenthesizer___closed__1;
lean_object* l_Lean_Parser_many1Indent___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_numLit_formatter(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_pushLine(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__15;
lean_object* l_Lean_Parser_strLit_formatter___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__18;
lean_object* l___regBuiltin_Lean_Parser_ppSpace_parenthesizer___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__8;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_nameLitNoAntiquot_parenthesizer___boxed(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Parser_ppIndent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_charLitKind___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__25;
extern lean_object* l_Std_Range___kind_term____x40_Init_Data_Range___hyg_111____closed__17;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__9;
lean_object* l_Lean_PrettyPrinter_Formatter_charLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_formatter___closed__2;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_toggleInsideQuot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_charLit___elambda__1___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_try_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_ppSpace_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_numLitNoAntiquot_parenthesizer___boxed(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__5;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5;
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_group_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3;
extern lean_object* l_Lean_mkAppStx___closed__4;
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1;
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer___boxed(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__4;
lean_object* l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppLine;
lean_object* l_Lean_Parser_leadingNode_formatter___closed__1;
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__3;
extern lean_object* l___private_Lean_Data_Format_10__pushNewline___closed__1;
extern lean_object* l_Lean_Parser_mkAntiquot___closed__3;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__6;
lean_object* l_Lean_PrettyPrinter_Formatter_optional_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_nameLit_formatter(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkColGe_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_setExpected_parenthesizer___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_termParser_formatter___boxed(lean_object*);
extern lean_object* l_ULift_HasRepr___rarg___closed__2;
lean_object* l___regBuiltin_Lean_Parser_charLit_formatter___closed__1;
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__21;
lean_object* l_Lean_Parser_ppSpace_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__3;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_charLit_formatter(lean_object*);
lean_object* l_Lean_Parser_charLit_formatter___closed__2;
lean_object* l_Lean_PrettyPrinter_Formatter_setExpected_formatter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_parenthesizer___closed__2;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__23;
lean_object* l_Lean_Parser_nodeInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_charLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__2;
lean_object* l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__13;
lean_object* l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__2;
lean_object* l___regBuiltin_Lean_Parser_ppHardSpace_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_noFirstTokenInfo(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__22;
lean_object* l_Lean_Parser_strLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_nameLit_formatter___closed__2;
lean_object* l___regBuiltin_Lean_Parser_ident_parenthesizer___closed__1;
lean_object* l_Lean_Parser_nodeWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_object*);
extern lean_object* l_Lean_Parser_skip___closed__1;
lean_object* l_Lean_Parser_manyIndent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_formatter___closed__1;
lean_object* l_Lean_Parser_notSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_antiquotExpr_formatter(lean_object*);
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__20;
extern lean_object* l_Lean_strLitKind___closed__1;
lean_object* l___regBuiltin_Lean_Parser_nameLit_parenthesizer___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_toggleInsideQuot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_node_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1Indent_formatter___closed__1;
lean_object* l___regBuiltin_Lean_Parser_strLit_parenthesizer(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__3;
lean_object* l___regBuiltin_Lean_Parser_ident_formatter___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__6;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__16;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_charLitNoAntiquot_parenthesizer___boxed(lean_object*);
lean_object* l_Lean_Parser_manyIndent(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppSpace;
lean_object* l_Lean_Parser_ppHardSpace;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_termParser_formatter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppIndent(lean_object*);
lean_object* l_Lean_Parser_commandParser_formatter___boxed(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_ident_formatter___closed__2;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Parser_manyIndent___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_nonReservedSymbol_parenthesizer___boxed(lean_object*);
lean_object* l_Lean_Parser_strLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppDedent(lean_object*);
extern lean_object* l_Lean_Parser_strLit___elambda__1___closed__1;
lean_object* l_Lean_Parser_many1Indent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_charLit_formatter___closed__2;
lean_object* l___regBuiltin_Lean_Parser_nameLit_formatter___closed__1;
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Parser_ppLine_parenthesizer___rarg(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_numLit_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__10;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__7;
lean_object* l_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__24;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_symbol_parenthesizer___boxed(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_pushNone_parenthesizer___boxed(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter(lean_object*);
lean_object* l_Lean_Parser_numLit_parenthesizer___closed__2;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__2;
lean_object* l_Lean_Parser_ppIndent___boxed(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__3;
lean_object* l___regBuiltin_Lean_Parser_strLit_formatter___closed__1;
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__11;
lean_object* l_Lean_Parser_ParserState_restore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_commandParser_formatter(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__5;
lean_object* l___regBuiltin_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
lean_object* l_Lean_Parser_numLit_parenthesizer___closed__1;
extern lean_object* l_Array_iterateMAux___main___at_Lean_ppGoal___spec__6___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_ppGroup_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__6;
lean_object* l_Lean_PrettyPrinter_Formatter_ppSpace_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_nameLit___elambda__1___closed__1;
lean_object* l_Lean_Parser_notSymbol(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__2;
lean_object* lean_int_neg(lean_object*);
lean_object* l_Lean_Parser_termParser_formatter(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_identNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*);
lean_object* l_Lean_Parser_ppLine_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__10;
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_manyIndent___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_ident___elambda__1___closed__1;
lean_object* l_Lean_Parser_commandParser_formatter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_charLit_formatter___closed__1;
lean_object* l_Lean_Parser_ppDedent___boxed(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__11;
lean_object* l_Lean_PrettyPrinter_Formatter_push(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__3;
lean_object* l___regBuiltin_Lean_Parser_numLit_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkNoWsBefore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_nameLit_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_ppGroup_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_commandParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3127____closed__4;
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__12;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__7;
lean_object* l___regBuiltin_Lean_Parser_ppLine_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_nameLit_parenthesizer___closed__2;
lean_object* l___regBuiltin_Lean_Parser_numLit_formatter___closed__2;
lean_object* l_Lean_PrettyPrinter_Formatter_ppDedent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_charLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit_parenthesizer___closed__2;
extern lean_object* l___private_Init_Util_1__mkPanicMessage___closed__2;
lean_object* l_Lean_Parser_notSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Format_getIndent(lean_object*);
lean_object* l_Lean_Parser_many1Indent(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkNoImmediateColon_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushNone_formatter___boxed(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_charLit_parenthesizer(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_ppLine_parenthesizer___closed__1;
lean_object* l_Lean_Parser_notSymbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_mkAntiquot___closed__19;
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1___closed__1;
lean_object* l_Lean_Parser_leadingNode_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_formatter___closed__1;
lean_object* l_Lean_Parser_antiquotExpr_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkNoImmediateColon_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_formatter___closed__2;
lean_object* l_Lean_Parser_numLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__2;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__3;
lean_object* l_Lean_PrettyPrinter_Formatter_numLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_trim(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_antiquotExpr_parenthesizer(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_optional_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_formatter___closed__2;
lean_object* l_Lean_Parser_ppGroup(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4;
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__4;
lean_object* l_Lean_Parser_ident_parenthesizer___closed__1;
lean_object* l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_strLitNoAntiquot_parenthesizer___boxed(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_ident_formatter(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1;
lean_object* l___regBuiltin_Lean_Parser_strLit_formatter___closed__2;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_ppLine_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__12;
extern lean_object* l_Lean_Parser_mkAntiquot___closed__8;
lean_object* l_Lean_PrettyPrinter_Formatter_nameLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__2;
lean_object* l_Lean_Parser_notSymbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotExpr_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_charLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_numLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__9;
lean_object* l_Lean_Parser_ident_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_many_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Parser_inhabited___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_group(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Parser_notSymbol_parenthesizer___rarg(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__17;
lean_object* l___regBuiltin_Lean_Parser_numLit_parenthesizer___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_ppLine_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__8;
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_nonReservedSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
lean_object* l_Lean_Parser_ppDedent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notSymbol_formatter___rarg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_try_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotExpr_formatter___closed__1;
lean_object* l_Lean_Parser_termParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nameLitKind___closed__1;
lean_object* l_Lean_Parser_manyIndent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppLine_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_mkAntiquot___closed__1;
static lean_object* _init_l_Lean_Parser_leadingNode_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 4, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_leadingNode_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
x_10 = l_Lean_Parser_leadingNode_formatter___closed__1;
x_11 = l_Lean_PrettyPrinter_Formatter_andthen_formatter(x_10, x_9, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Parser_leadingNode_formatter(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Parser_termParser_formatter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Std_Range___kind_term____x40_Init_Data_Range___hyg_111____closed__17;
x_7 = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_termParser_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_termParser_formatter___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_termParser_formatter___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_termParser_formatter(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_termParser_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Std_Range___kind_term____x40_Init_Data_Range___hyg_111____closed__17;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_commandParser_formatter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3127____closed__4;
x_7 = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_commandParser_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_commandParser_formatter___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_commandParser_formatter___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_commandParser_formatter(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_commandParser_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3127____closed__4;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Prod_HasRepr___rarg___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbol_formatter___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_termParser_formatter___rarg), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_toggleInsideQuot_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_ULift_HasRepr___rarg___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbol_formatter___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__3;
x_2 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__1;
x_2 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
x_7 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__6;
x_8 = l_Lean_PrettyPrinter_Formatter_node_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__1;
x_4 = l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_termParser_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_toggleInsideQuot_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbol_parenthesizer___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2;
x_2 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3;
x_2 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
x_7 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__1;
x_4 = l___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_identNoAntiquot_formatter___boxed), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_antiquotExpr_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_antiquotExpr_formatter___closed__1;
x_7 = l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__2;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("antiquotExpr");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotExpr_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_antiquotExpr_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__2;
x_4 = l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_identNoAntiquot_parenthesizer___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_antiquotExpr_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
x_7 = l___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_antiquotExpr_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotExpr_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_antiquotExpr_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__2;
x_4 = l___regBuiltin_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__8;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbol_formatter___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_setExpected_formatter___rarg), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkNoWsBefore_formatter___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__3;
x_2 = l_Lean_Parser_mkAntiquot_formatter___closed__1;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__4;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_many_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__19;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbol_formatter___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__3;
x_2 = l_Lean_Parser_mkAntiquot_formatter___closed__6;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__7;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_optional_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Util_1__mkPanicMessage___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbol_formatter___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkNoImmediateColon_formatter___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_pushNone_formatter___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__10;
x_2 = l_Lean_Parser_mkAntiquot_formatter___closed__11;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_mkAntiquot_formatter(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_51; 
x_51 = lean_box(0);
x_9 = x_51;
goto block_50;
}
else
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_2, 0);
lean_inc(x_52);
lean_dec(x_2);
x_9 = x_52;
goto block_50;
}
block_50:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Parser_mkAntiquot___closed__1;
x_11 = l_Lean_Name_append___main(x_9, x_10);
lean_dec(x_9);
if (x_3 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_12 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_nonReservedSymbol_formatter___boxed), 6, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = l_Lean_Parser_mkAntiquot_formatter___closed__9;
x_14 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_12);
x_15 = l_Lean_Parser_mkAntiquot_formatter___closed__3;
x_16 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_14);
x_17 = l_Lean_Parser_mkAntiquot___closed__3;
x_18 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_18, 0, x_17);
lean_closure_set(x_18, 1, x_16);
x_19 = l_Lean_Parser_mkAntiquot_formatter___closed__8;
x_20 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_20, 0, x_18);
lean_closure_set(x_20, 1, x_19);
x_21 = l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__3;
x_22 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_22, 0, x_21);
lean_closure_set(x_22, 1, x_20);
x_23 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_23, 0, x_15);
lean_closure_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_mkAntiquot_formatter___closed__5;
x_25 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_25, 0, x_24);
lean_closure_set(x_25, 1, x_23);
x_26 = l_Lean_Parser_mkAntiquot_formatter___closed__2;
x_27 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_27, 0, x_26);
lean_closure_set(x_27, 1, x_25);
x_28 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_try_formatter), 6, 1);
lean_closure_set(x_28, 0, x_27);
x_29 = l_Lean_PrettyPrinter_Formatter_node_formatter(x_11, x_28, x_4, x_5, x_6, x_7, x_8);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_30 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_nonReservedSymbol_formatter___boxed), 6, 1);
lean_closure_set(x_30, 0, x_1);
x_31 = l_Lean_Parser_mkAntiquot_formatter___closed__9;
x_32 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_32, 0, x_31);
lean_closure_set(x_32, 1, x_30);
x_33 = l_Lean_Parser_mkAntiquot_formatter___closed__3;
x_34 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_34, 0, x_33);
lean_closure_set(x_34, 1, x_32);
x_35 = l_Lean_Parser_mkAntiquot___closed__3;
x_36 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_36, 0, x_35);
lean_closure_set(x_36, 1, x_34);
x_37 = l_Lean_Parser_mkAntiquot_formatter___closed__12;
x_38 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter), 7, 2);
lean_closure_set(x_38, 0, x_36);
lean_closure_set(x_38, 1, x_37);
x_39 = l_Lean_Parser_mkAntiquot_formatter___closed__8;
x_40 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_40, 0, x_38);
lean_closure_set(x_40, 1, x_39);
x_41 = l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__3;
x_42 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_42, 0, x_41);
lean_closure_set(x_42, 1, x_40);
x_43 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_43, 0, x_33);
lean_closure_set(x_43, 1, x_42);
x_44 = l_Lean_Parser_mkAntiquot_formatter___closed__5;
x_45 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_45, 0, x_44);
lean_closure_set(x_45, 1, x_43);
x_46 = l_Lean_Parser_mkAntiquot_formatter___closed__2;
x_47 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_47, 0, x_46);
lean_closure_set(x_47, 1, x_45);
x_48 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_try_formatter), 6, 1);
lean_closure_set(x_48, 0, x_47);
x_49 = l_Lean_PrettyPrinter_Formatter_node_formatter(x_11, x_48, x_4, x_5, x_6, x_7, x_8);
return x_49;
}
}
}
}
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Parser_mkAntiquot_formatter(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_setExpected_parenthesizer___rarg), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__2;
x_2 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_many_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_optional_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_nonReservedSymbol_parenthesizer___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__6;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__2;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__7;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot___closed__3;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__8;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__9;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__10;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__2;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__11;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__4;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__12;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__1;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__13;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__14;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_try_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoImmediateColon_parenthesizer___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_pushNone_parenthesizer___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__16;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__17;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__9;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__18;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__19;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__20;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__2;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__21;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__4;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__22;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__1;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__23;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__24;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_try_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_16; 
x_16 = lean_box(0);
x_8 = x_16;
goto block_15;
}
else
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_8 = x_17;
goto block_15;
}
block_15:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Parser_mkAntiquot___closed__1;
x_10 = l_Lean_Name_append___main(x_8, x_9);
lean_dec(x_8);
if (x_2 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__15;
x_12 = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(x_10, x_11, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__25;
x_14 = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(x_10, x_13, x_3, x_4, x_5, x_6, x_7);
return x_14;
}
}
}
}
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_Parser_mkAntiquot_parenthesizer___rarg(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_2);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_2);
x_10 = 0;
x_11 = lean_box(x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_9);
lean_closure_set(x_12, 2, x_11);
x_13 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_3);
x_14 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_12, x_13, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_1);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_1);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___boxed), 7, 2);
lean_closure_set(x_11, 0, x_8);
lean_closure_set(x_11, 1, x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer), 7, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
x_13 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_11, x_12, x_3, x_4, x_5, x_6, x_7);
return x_13;
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_nodeWithAntiquot_parenthesizer___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_nodeWithAntiquot_parenthesizer(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_ident_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_identKind___closed__1;
x_2 = l_Lean_Parser_ident___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_ident_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_ident_formatter___closed__1;
x_7 = l_Lean_Parser_antiquotExpr_formatter___closed__1;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_ident_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l_Lean_identKind___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_ident_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_ident_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_ident_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_Parser_ident_formatter___closed__1;
x_4 = l___regBuiltin_Lean_Parser_ident_formatter___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_ident_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_ident___elambda__1___closed__1;
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_ident_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_ident_parenthesizer___closed__1;
x_7 = l_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_ident_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_ident_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_ident_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_Parser_ident_formatter___closed__1;
x_4 = l___regBuiltin_Lean_Parser_ident_parenthesizer___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_numLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_numLitKind___closed__1;
x_2 = l_Lean_Parser_numLit___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_numLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_numLitNoAntiquot_formatter___boxed), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_numLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_numLit_formatter___closed__1;
x_7 = l_Lean_Parser_numLit_formatter___closed__2;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_numLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l_Lean_numLitKind___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_numLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_numLit_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_numLit_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_Parser_numLit_formatter___closed__1;
x_4 = l___regBuiltin_Lean_Parser_numLit_formatter___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_numLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_numLit___elambda__1___closed__1;
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_numLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_numLitNoAntiquot_parenthesizer___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_numLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_numLit_parenthesizer___closed__1;
x_7 = l_Lean_Parser_numLit_parenthesizer___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_numLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_numLit_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_numLit_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_Parser_numLit_formatter___closed__1;
x_4 = l___regBuiltin_Lean_Parser_numLit_parenthesizer___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_charLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_charLitKind___closed__1;
x_2 = l_Lean_Parser_charLit___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_charLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_charLitNoAntiquot_formatter___boxed), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_charLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_charLit_formatter___closed__1;
x_7 = l_Lean_Parser_charLit_formatter___closed__2;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_charLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l_Lean_charLitKind___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_charLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_charLit_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_charLit_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_Parser_charLit_formatter___closed__1;
x_4 = l___regBuiltin_Lean_Parser_charLit_formatter___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_charLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_charLit___elambda__1___closed__1;
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_charLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_charLitNoAntiquot_parenthesizer___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_charLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_charLit_parenthesizer___closed__1;
x_7 = l_Lean_Parser_charLit_parenthesizer___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_charLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_charLit_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_charLit_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_Parser_charLit_formatter___closed__1;
x_4 = l___regBuiltin_Lean_Parser_charLit_parenthesizer___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_strLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_strLitKind___closed__1;
x_2 = l_Lean_Parser_strLit___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_strLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_strLitNoAntiquot_formatter___boxed), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_strLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_strLit_formatter___closed__1;
x_7 = l_Lean_Parser_strLit_formatter___closed__2;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_strLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l_Lean_strLitKind___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_strLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_strLit_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_strLit_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_Parser_strLit_formatter___closed__1;
x_4 = l___regBuiltin_Lean_Parser_strLit_formatter___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_strLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_strLit___elambda__1___closed__1;
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_strLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_strLitNoAntiquot_parenthesizer___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_strLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_strLit_parenthesizer___closed__1;
x_7 = l_Lean_Parser_strLit_parenthesizer___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_strLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_strLit_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_strLit_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_Parser_strLit_formatter___closed__1;
x_4 = l___regBuiltin_Lean_Parser_strLit_parenthesizer___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_nameLitKind___closed__1;
x_2 = l_Lean_Parser_nameLit___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_nameLitNoAntiquot_formatter___boxed), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_nameLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_nameLit_formatter___closed__1;
x_7 = l_Lean_Parser_nameLit_formatter___closed__2;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_nameLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l_Lean_nameLitKind___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_nameLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_nameLit_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_nameLit_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_Parser_nameLit_formatter___closed__1;
x_4 = l___regBuiltin_Lean_Parser_nameLit_formatter___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_nameLit___elambda__1___closed__1;
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_nameLitNoAntiquot_parenthesizer___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_nameLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_nameLit_parenthesizer___closed__1;
x_7 = l_Lean_Parser_nameLit_parenthesizer___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_nameLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_nameLit_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_nameLit_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_Parser_nameLit_formatter___closed__1;
x_4 = l___regBuiltin_Lean_Parser_nameLit_parenthesizer___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_group_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_nullKind;
x_8 = l_Lean_PrettyPrinter_Formatter_node_formatter(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_group_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_nullKind;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_group(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_nullKind;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_many1Indent_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkColGe_formatter___boxed), 4, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_many1Indent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_Parser_many1Indent_formatter___closed__1;
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_PrettyPrinter_Formatter_many_formatter(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
static lean_object* _init_l_Lean_Parser_many1Indent_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed), 4, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_many1Indent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_Parser_many1Indent_parenthesizer___closed__1;
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_PrettyPrinter_Parenthesizer_many_parenthesizer(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
static lean_object* _init_l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("irrelevant");
return x_1;
}
}
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_24; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
x_24 = lean_ctor_get(x_2, 4);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
x_8 = x_3;
goto block_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 2);
lean_inc(x_27);
lean_dec(x_26);
lean_inc(x_7);
x_28 = l_Lean_FileMap_toPosition(x_27, x_7);
lean_dec(x_27);
x_29 = lean_ctor_get(x_25, 1);
lean_inc(x_29);
lean_dec(x_25);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_nat_dec_le(x_29, x_30);
lean_dec(x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1___closed__1;
x_33 = l_Lean_Parser_ParserState_mkError(x_3, x_32);
x_8 = x_33;
goto block_23;
}
else
{
x_8 = x_3;
goto block_23;
}
}
block_23:
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 3);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_10 = lean_apply_2(x_4, x_2, x_8);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
lean_dec(x_6);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
x_13 = lean_nat_dec_eq(x_7, x_12);
lean_dec(x_12);
lean_dec(x_7);
if (x_13 == 0)
{
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_2);
lean_dec(x_1);
x_15 = l_Lean_Parser_manyAux___main___closed__1;
x_16 = l_Lean_Parser_ParserState_mkUnexpectedError(x_10, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
x_18 = lean_nat_dec_eq(x_7, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
return x_10;
}
else
{
lean_object* x_19; 
x_19 = l_Lean_Parser_ParserState_restore(x_10, x_6, x_7);
lean_dec(x_6);
return x_19;
}
}
}
else
{
lean_object* x_20; uint8_t x_21; 
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_20 = lean_ctor_get(x_8, 1);
lean_inc(x_20);
x_21 = lean_nat_dec_eq(x_7, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
else
{
lean_object* x_22; 
x_22 = l_Lean_Parser_ParserState_restore(x_8, x_6, x_7);
lean_dec(x_6);
return x_22;
}
}
}
}
}
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_24; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
x_24 = lean_ctor_get(x_2, 4);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
x_8 = x_3;
goto block_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 2);
lean_inc(x_27);
lean_dec(x_26);
lean_inc(x_7);
x_28 = l_Lean_FileMap_toPosition(x_27, x_7);
lean_dec(x_27);
x_29 = lean_ctor_get(x_25, 1);
lean_inc(x_29);
lean_dec(x_25);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_nat_dec_le(x_29, x_30);
lean_dec(x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1___closed__1;
x_33 = l_Lean_Parser_ParserState_mkError(x_3, x_32);
x_8 = x_33;
goto block_23;
}
else
{
x_8 = x_3;
goto block_23;
}
}
block_23:
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 3);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_10 = lean_apply_2(x_4, x_2, x_8);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
lean_dec(x_6);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
x_13 = lean_nat_dec_eq(x_7, x_12);
lean_dec(x_12);
lean_dec(x_7);
if (x_13 == 0)
{
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_2);
lean_dec(x_1);
x_15 = l_Lean_Parser_manyAux___main___closed__1;
x_16 = l_Lean_Parser_ParserState_mkUnexpectedError(x_10, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
x_18 = lean_nat_dec_eq(x_7, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
return x_10;
}
else
{
lean_object* x_19; 
x_19 = l_Lean_Parser_ParserState_restore(x_10, x_6, x_7);
lean_dec(x_6);
return x_19;
}
}
}
else
{
lean_object* x_20; uint8_t x_21; 
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_20 = lean_ctor_get(x_8, 1);
lean_inc(x_20);
x_21 = lean_nat_dec_eq(x_7, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
else
{
lean_object* x_22; 
x_22 = l_Lean_Parser_ParserState_restore(x_8, x_6, x_7);
lean_dec(x_6);
return x_22;
}
}
}
}
}
lean_object* l_Lean_Parser_many1Indent___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 4);
lean_dec(x_7);
x_8 = lean_ctor_get(x_6, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
x_10 = l_Lean_FileMap_toPosition(x_8, x_9);
lean_dec(x_8);
lean_inc(x_10);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_3, 4, x_11);
x_12 = lean_ctor_get(x_4, 0);
lean_inc(x_12);
x_13 = lean_array_get_size(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_nat_dec_le(x_14, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1___closed__1;
x_17 = l_Lean_Parser_ParserState_mkError(x_4, x_16);
x_18 = l_Lean_nullKind;
x_19 = l_Lean_Parser_ParserState_mkNode(x_17, x_18, x_13);
return x_19;
}
else
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_4, 3);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_inc(x_3);
x_21 = lean_apply_2(x_1, x_3, x_4);
x_22 = lean_ctor_get(x_21, 3);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__2(x_2, x_3, x_21);
x_24 = l_Lean_nullKind;
x_25 = l_Lean_Parser_ParserState_mkNode(x_23, x_24, x_13);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_22);
lean_dec(x_3);
lean_dec(x_2);
x_26 = l_Lean_nullKind;
x_27 = l_Lean_Parser_ParserState_mkNode(x_21, x_26, x_13);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_20);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = l_Lean_nullKind;
x_29 = l_Lean_Parser_ParserState_mkNode(x_4, x_28, x_13);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_30 = lean_ctor_get(x_3, 0);
x_31 = lean_ctor_get(x_3, 1);
x_32 = lean_ctor_get(x_3, 2);
x_33 = lean_ctor_get(x_3, 3);
x_34 = lean_ctor_get_uint8(x_3, sizeof(void*)*6);
x_35 = lean_ctor_get(x_3, 5);
lean_inc(x_35);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_3);
x_36 = lean_ctor_get(x_30, 2);
lean_inc(x_36);
x_37 = lean_ctor_get(x_4, 1);
lean_inc(x_37);
x_38 = l_Lean_FileMap_toPosition(x_36, x_37);
lean_dec(x_36);
lean_inc(x_38);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_40, 0, x_30);
lean_ctor_set(x_40, 1, x_31);
lean_ctor_set(x_40, 2, x_32);
lean_ctor_set(x_40, 3, x_33);
lean_ctor_set(x_40, 4, x_39);
lean_ctor_set(x_40, 5, x_35);
lean_ctor_set_uint8(x_40, sizeof(void*)*6, x_34);
x_41 = lean_ctor_get(x_4, 0);
lean_inc(x_41);
x_42 = lean_array_get_size(x_41);
lean_dec(x_41);
x_43 = lean_ctor_get(x_38, 1);
lean_inc(x_43);
lean_dec(x_38);
x_44 = lean_nat_dec_le(x_43, x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_40);
lean_dec(x_2);
lean_dec(x_1);
x_45 = l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1___closed__1;
x_46 = l_Lean_Parser_ParserState_mkError(x_4, x_45);
x_47 = l_Lean_nullKind;
x_48 = l_Lean_Parser_ParserState_mkNode(x_46, x_47, x_42);
return x_48;
}
else
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_4, 3);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; 
lean_inc(x_40);
x_50 = lean_apply_2(x_1, x_40, x_4);
x_51 = lean_ctor_get(x_50, 3);
lean_inc(x_51);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__2(x_2, x_40, x_50);
x_53 = l_Lean_nullKind;
x_54 = l_Lean_Parser_ParserState_mkNode(x_52, x_53, x_42);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_51);
lean_dec(x_40);
lean_dec(x_2);
x_55 = l_Lean_nullKind;
x_56 = l_Lean_Parser_ParserState_mkNode(x_50, x_55, x_42);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_49);
lean_dec(x_40);
lean_dec(x_2);
lean_dec(x_1);
x_57 = l_Lean_nullKind;
x_58 = l_Lean_Parser_ParserState_mkNode(x_4, x_57, x_42);
return x_58;
}
}
}
}
}
lean_object* l_Lean_Parser_many1Indent(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Parser_inhabited___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_many1Indent___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_manyIndent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_Parser_many1Indent_formatter___closed__1;
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_PrettyPrinter_Formatter_many_formatter(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
lean_object* l_Lean_Parser_manyIndent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_Parser_many1Indent_parenthesizer___closed__1;
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_PrettyPrinter_Parenthesizer_many_parenthesizer(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_manyIndent___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_24; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
x_24 = lean_ctor_get(x_2, 4);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
x_8 = x_3;
goto block_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 2);
lean_inc(x_27);
lean_dec(x_26);
lean_inc(x_7);
x_28 = l_Lean_FileMap_toPosition(x_27, x_7);
lean_dec(x_27);
x_29 = lean_ctor_get(x_25, 1);
lean_inc(x_29);
lean_dec(x_25);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_nat_dec_le(x_29, x_30);
lean_dec(x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1___closed__1;
x_33 = l_Lean_Parser_ParserState_mkError(x_3, x_32);
x_8 = x_33;
goto block_23;
}
else
{
x_8 = x_3;
goto block_23;
}
}
block_23:
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 3);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_10 = lean_apply_2(x_4, x_2, x_8);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
lean_dec(x_6);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
x_13 = lean_nat_dec_eq(x_7, x_12);
lean_dec(x_12);
lean_dec(x_7);
if (x_13 == 0)
{
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_2);
lean_dec(x_1);
x_15 = l_Lean_Parser_manyAux___main___closed__1;
x_16 = l_Lean_Parser_ParserState_mkUnexpectedError(x_10, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
x_18 = lean_nat_dec_eq(x_7, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
return x_10;
}
else
{
lean_object* x_19; 
x_19 = l_Lean_Parser_ParserState_restore(x_10, x_6, x_7);
lean_dec(x_6);
return x_19;
}
}
}
else
{
lean_object* x_20; uint8_t x_21; 
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_20 = lean_ctor_get(x_8, 1);
lean_inc(x_20);
x_21 = lean_nat_dec_eq(x_7, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
else
{
lean_object* x_22; 
x_22 = l_Lean_Parser_ParserState_restore(x_8, x_6, x_7);
lean_dec(x_6);
return x_22;
}
}
}
}
}
lean_object* l_Lean_Parser_manyIndent___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 4);
lean_dec(x_6);
x_7 = lean_ctor_get(x_5, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = l_Lean_FileMap_toPosition(x_7, x_8);
lean_dec(x_7);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_2, 4, x_10);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = lean_array_get_size(x_11);
lean_dec(x_11);
x_13 = l_Lean_Parser_manyAux___main___at_Lean_Parser_manyIndent___spec__1(x_1, x_2, x_3);
x_14 = l_Lean_nullKind;
x_15 = l_Lean_Parser_ParserState_mkNode(x_13, x_14, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_16 = lean_ctor_get(x_2, 0);
x_17 = lean_ctor_get(x_2, 1);
x_18 = lean_ctor_get(x_2, 2);
x_19 = lean_ctor_get(x_2, 3);
x_20 = lean_ctor_get_uint8(x_2, sizeof(void*)*6);
x_21 = lean_ctor_get(x_2, 5);
lean_inc(x_21);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_2);
x_22 = lean_ctor_get(x_16, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_3, 1);
lean_inc(x_23);
x_24 = l_Lean_FileMap_toPosition(x_22, x_23);
lean_dec(x_22);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_26, 0, x_16);
lean_ctor_set(x_26, 1, x_17);
lean_ctor_set(x_26, 2, x_18);
lean_ctor_set(x_26, 3, x_19);
lean_ctor_set(x_26, 4, x_25);
lean_ctor_set(x_26, 5, x_21);
lean_ctor_set_uint8(x_26, sizeof(void*)*6, x_20);
x_27 = lean_ctor_get(x_3, 0);
lean_inc(x_27);
x_28 = lean_array_get_size(x_27);
lean_dec(x_27);
x_29 = l_Lean_Parser_manyAux___main___at_Lean_Parser_manyIndent___spec__1(x_1, x_26, x_3);
x_30 = l_Lean_nullKind;
x_31 = l_Lean_Parser_ParserState_mkNode(x_29, x_30, x_28);
return x_31;
}
}
}
lean_object* l_Lean_Parser_manyIndent(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Parser_inhabited___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
x_5 = l_Lean_Parser_noFirstTokenInfo(x_4);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_manyIndent___lambda__1), 3, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_notSymbol_formatter___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_notSymbol_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_notSymbol_formatter___rarg), 1, 0);
return x_6;
}
}
lean_object* l_Lean_Parser_notSymbol_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_notSymbol_formatter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_notSymbol_parenthesizer___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_notSymbol_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_notSymbol_parenthesizer___rarg), 1, 0);
return x_6;
}
}
lean_object* l_Lean_Parser_notSymbol_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_notSymbol_parenthesizer(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_notSymbol(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_String_trim(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByFn___boxed), 4, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
x_5 = l_Lean_Parser_Parser_inhabited___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_ppHardSpace() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_skip___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_ppSpace() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_skip___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_ppLine() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_skip___closed__1;
return x_1;
}
}
lean_object* l_Lean_Parser_ppGroup(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_ppGroup___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_ppGroup(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_ppIndent(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_ppIndent___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_ppIndent(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_ppDedent(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_ppDedent___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_ppDedent(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Array_iterateMAux___main___at_Lean_ppGoal___spec__6___closed__1;
x_7 = l_Lean_PrettyPrinter_Formatter_push(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppSpace_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PrettyPrinter_Formatter_pushLine(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppSpace_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PrettyPrinter_Formatter_ppSpace_formatter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Data_Format_10__pushNewline___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppLine_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1;
x_7 = l_Lean_PrettyPrinter_Formatter_push(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppLine_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PrettyPrinter_Formatter_ppLine_formatter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppGroup_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_box(0);
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_indent___boxed), 7, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
x_9 = l_Lean_PrettyPrinter_Formatter_group(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppIndent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_PrettyPrinter_Formatter_indent(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppDedent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = l_Lean_Format_getIndent(x_7);
lean_dec(x_7);
x_9 = lean_nat_to_int(x_8);
x_10 = lean_int_neg(x_9);
lean_dec(x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = l_Lean_PrettyPrinter_Formatter_indent(x_1, x_11, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_11);
return x_12;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ppHardSpace");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___boxed), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__2;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_ppHardSpace_parenthesizer___rarg), 1, 0);
return x_5;
}
}
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_ppHardSpace_parenthesizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_ppHardSpace_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_ppHardSpace_parenthesizer___boxed), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_ppHardSpace_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__2;
x_4 = l___regBuiltin_Lean_Parser_ppHardSpace_parenthesizer___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ppSpace");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_ppSpace_formatter___boxed), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__2;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_ppSpace_parenthesizer___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_ppSpace_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_ppSpace_parenthesizer___rarg), 1, 0);
return x_5;
}
}
lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_ppSpace_parenthesizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_ppSpace_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_ppSpace_parenthesizer___boxed), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_ppSpace_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__2;
x_4 = l___regBuiltin_Lean_Parser_ppSpace_parenthesizer___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ppLine");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_ppLine_formatter___boxed), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__2;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_ppLine_parenthesizer___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_ppLine_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_ppLine_parenthesizer___rarg), 1, 0);
return x_5;
}
}
lean_object* l_Lean_Parser_ppLine_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_ppLine_parenthesizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_ppLine_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_ppLine_parenthesizer___boxed), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_ppLine_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__2;
x_4 = l___regBuiltin_Lean_Parser_ppLine_parenthesizer___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_ppGroup_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_ppIndent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_ppDedent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Basic(lean_object*);
lean_object* initialize_Lean_PrettyPrinter_Parenthesizer(lean_object*);
lean_object* initialize_Lean_PrettyPrinter_Formatter(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Parser_Extra(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_leadingNode_formatter___closed__1 = _init_l_Lean_Parser_leadingNode_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_leadingNode_formatter___closed__1);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__1 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__1);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__2 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__2);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__3 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__3);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__4 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__4);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__5 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__5);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__6 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__6);
l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__1);
l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5);
l___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1);
res = l___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_antiquotExpr_formatter___closed__1 = _init_l_Lean_Parser_antiquotExpr_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotExpr_formatter___closed__1);
l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__1);
l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__2);
l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__3 = _init_l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Parser_antiquotExpr_formatter___closed__3);
res = l___regBuiltin_Lean_Parser_antiquotExpr_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_antiquotExpr_parenthesizer___closed__1 = _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotExpr_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_antiquotExpr_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_antiquotExpr_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_antiquotExpr_parenthesizer___closed__1);
res = l___regBuiltin_Lean_Parser_antiquotExpr_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_mkAntiquot_formatter___closed__1 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__1);
l_Lean_Parser_mkAntiquot_formatter___closed__2 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__2);
l_Lean_Parser_mkAntiquot_formatter___closed__3 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__3);
l_Lean_Parser_mkAntiquot_formatter___closed__4 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__4);
l_Lean_Parser_mkAntiquot_formatter___closed__5 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__5);
l_Lean_Parser_mkAntiquot_formatter___closed__6 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__6);
l_Lean_Parser_mkAntiquot_formatter___closed__7 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__7();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__7);
l_Lean_Parser_mkAntiquot_formatter___closed__8 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__8();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__8);
l_Lean_Parser_mkAntiquot_formatter___closed__9 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__9();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__9);
l_Lean_Parser_mkAntiquot_formatter___closed__10 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__10();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__10);
l_Lean_Parser_mkAntiquot_formatter___closed__11 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__11();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__11);
l_Lean_Parser_mkAntiquot_formatter___closed__12 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__12();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__12);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__1 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__1();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__1);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__2 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__2();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__2);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__3 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__3();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__3);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__4 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__4();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__4);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__5 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__5();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__5);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__6 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__6();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__6);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__7 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__7();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__7);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__8 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__8();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__8);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__9 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__9();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__9);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__10 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__10();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__10);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__11 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__11();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__11);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__12 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__12();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__12);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__13 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__13();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__13);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__14 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__14();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__14);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__15 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__15();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__15);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__16 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__16();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__16);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__17 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__17();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__17);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__18 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__18();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__18);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__19 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__19();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__19);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__20 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__20();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__20);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__21 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__21();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__21);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__22 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__22();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__22);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__23 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__23();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__23);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__24 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__24();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__24);
l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__25 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__25();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___rarg___closed__25);
l_Lean_Parser_ident_formatter___closed__1 = _init_l_Lean_Parser_ident_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_ident_formatter___closed__1);
l___regBuiltin_Lean_Parser_ident_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_ident_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_ident_formatter___closed__1);
l___regBuiltin_Lean_Parser_ident_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_ident_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_ident_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_ident_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ident_parenthesizer___closed__1 = _init_l_Lean_Parser_ident_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_ident_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_ident_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_ident_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_ident_parenthesizer___closed__1);
res = l___regBuiltin_Lean_Parser_ident_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_numLit_formatter___closed__1 = _init_l_Lean_Parser_numLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_numLit_formatter___closed__1);
l_Lean_Parser_numLit_formatter___closed__2 = _init_l_Lean_Parser_numLit_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_numLit_formatter___closed__2);
l___regBuiltin_Lean_Parser_numLit_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_numLit_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_numLit_formatter___closed__1);
l___regBuiltin_Lean_Parser_numLit_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_numLit_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_numLit_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_numLit_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_numLit_parenthesizer___closed__1 = _init_l_Lean_Parser_numLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_numLit_parenthesizer___closed__1);
l_Lean_Parser_numLit_parenthesizer___closed__2 = _init_l_Lean_Parser_numLit_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_numLit_parenthesizer___closed__2);
l___regBuiltin_Lean_Parser_numLit_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_numLit_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_numLit_parenthesizer___closed__1);
res = l___regBuiltin_Lean_Parser_numLit_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_charLit_formatter___closed__1 = _init_l_Lean_Parser_charLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_charLit_formatter___closed__1);
l_Lean_Parser_charLit_formatter___closed__2 = _init_l_Lean_Parser_charLit_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_charLit_formatter___closed__2);
l___regBuiltin_Lean_Parser_charLit_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_charLit_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_charLit_formatter___closed__1);
l___regBuiltin_Lean_Parser_charLit_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_charLit_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_charLit_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_charLit_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_charLit_parenthesizer___closed__1 = _init_l_Lean_Parser_charLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_charLit_parenthesizer___closed__1);
l_Lean_Parser_charLit_parenthesizer___closed__2 = _init_l_Lean_Parser_charLit_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_charLit_parenthesizer___closed__2);
l___regBuiltin_Lean_Parser_charLit_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_charLit_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_charLit_parenthesizer___closed__1);
res = l___regBuiltin_Lean_Parser_charLit_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_strLit_formatter___closed__1 = _init_l_Lean_Parser_strLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_strLit_formatter___closed__1);
l_Lean_Parser_strLit_formatter___closed__2 = _init_l_Lean_Parser_strLit_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_strLit_formatter___closed__2);
l___regBuiltin_Lean_Parser_strLit_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_strLit_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_strLit_formatter___closed__1);
l___regBuiltin_Lean_Parser_strLit_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_strLit_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_strLit_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_strLit_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_strLit_parenthesizer___closed__1 = _init_l_Lean_Parser_strLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_strLit_parenthesizer___closed__1);
l_Lean_Parser_strLit_parenthesizer___closed__2 = _init_l_Lean_Parser_strLit_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_strLit_parenthesizer___closed__2);
l___regBuiltin_Lean_Parser_strLit_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_strLit_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_strLit_parenthesizer___closed__1);
res = l___regBuiltin_Lean_Parser_strLit_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_nameLit_formatter___closed__1 = _init_l_Lean_Parser_nameLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_nameLit_formatter___closed__1);
l_Lean_Parser_nameLit_formatter___closed__2 = _init_l_Lean_Parser_nameLit_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_nameLit_formatter___closed__2);
l___regBuiltin_Lean_Parser_nameLit_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_nameLit_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_nameLit_formatter___closed__1);
l___regBuiltin_Lean_Parser_nameLit_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_nameLit_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_nameLit_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_nameLit_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_nameLit_parenthesizer___closed__1 = _init_l_Lean_Parser_nameLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_nameLit_parenthesizer___closed__1);
l_Lean_Parser_nameLit_parenthesizer___closed__2 = _init_l_Lean_Parser_nameLit_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_nameLit_parenthesizer___closed__2);
l___regBuiltin_Lean_Parser_nameLit_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_nameLit_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_nameLit_parenthesizer___closed__1);
res = l___regBuiltin_Lean_Parser_nameLit_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_many1Indent_formatter___closed__1 = _init_l_Lean_Parser_many1Indent_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_many1Indent_formatter___closed__1);
l_Lean_Parser_many1Indent_parenthesizer___closed__1 = _init_l_Lean_Parser_many1Indent_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_many1Indent_parenthesizer___closed__1);
l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1___closed__1 = _init_l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1___closed__1();
lean_mark_persistent(l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1___closed__1);
l_Lean_Parser_ppHardSpace = _init_l_Lean_Parser_ppHardSpace();
lean_mark_persistent(l_Lean_Parser_ppHardSpace);
l_Lean_Parser_ppSpace = _init_l_Lean_Parser_ppSpace();
lean_mark_persistent(l_Lean_Parser_ppSpace);
l_Lean_Parser_ppLine = _init_l_Lean_Parser_ppLine();
lean_mark_persistent(l_Lean_Parser_ppLine);
l_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1 = _init_l_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___closed__3);
res = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Parser_ppHardSpace_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_ppHardSpace_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_ppHardSpace_parenthesizer___closed__1);
res = l___regBuiltin_Lean_Parser_ppHardSpace_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter___closed__3);
res = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppSpace_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Parser_ppSpace_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_ppSpace_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_ppSpace_parenthesizer___closed__1);
res = l___regBuiltin_Lean_Parser_ppSpace_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__3);
res = l___regBuiltin_Lean_PrettyPrinter_Formatter_ppLine_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Parser_ppLine_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_ppLine_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_ppLine_parenthesizer___closed__1);
res = l___regBuiltin_Lean_Parser_ppLine_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif