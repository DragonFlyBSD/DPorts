#
# $FreeBSD: devel/thrift/bsd.thrift.mk 333296 2013-11-09 15:09:13Z wg $
#
# to use:
# in your makefile, set:
# PORTVERSION=	${THRIFT_PORTVERSION}
# see $PORTSDIR/devel/thrift for examples 
THRIFT_PORTVERSION=	0.9.1

CONFIGURE_ARGS+=	\
		--without-tests

