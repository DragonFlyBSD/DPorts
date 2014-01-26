# $FreeBSD: Mk/Uses/tk.mk 339357 2014-01-10 13:44:54Z gahr $
#
# vim: ts=8 noexpandtab
#
#

.if defined(tk_ARGS)
tcl_ARGS:=	${tk_ARGS}
.endif

_TCLTK_PORT=	tk

.include "${PORTSDIR}/Mk/Uses/tcl.mk"
