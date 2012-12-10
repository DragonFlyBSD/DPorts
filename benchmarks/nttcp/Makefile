# New ports collection makefile for:   nttcp
# Date created:        11 Nov 1998
# Whom:                Bill Fumerola <billf@chc-chimes.com>
#
# $FreeBSD: ports/benchmarks/nttcp/Makefile,v 1.22 2012/11/17 05:54:50 svnexp Exp $
#

PORTNAME=	nttcp
PORTVERSION=	1.47
PORTREVISION=	2
CATEGORIES=	benchmarks net
MASTER_SITES=	http://freeware.sgi.com/source/nttcp/ \
		http://reality.sgiweb.org/freeware/source/nttcp/

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	A client/server program for testing network performance

RESTRICTED=	No commercial use

ALL_TARGET=	nttcp
MAN1=		nttcp.1
PLIST_FILES=	bin/nttcp
USE_GMAKE=	yes
MAKE_ENV+=	OPT="${CFLAGS}"
NOPRECIOUSMAKEVARS=yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/nttcp ${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/nttcp.1 ${PREFIX}/man/man1/

.include <bsd.port.mk>
