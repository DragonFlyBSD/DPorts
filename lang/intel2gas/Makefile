# New ports collection makefile for:	intel2gas
# Date created:		12 May 1999
# Whom:			G. Adam Stanislav
#
# $FreeBSD: ports/lang/intel2gas/Makefile,v 1.12 2012/11/17 05:58:51 svnexp Exp $
#

PORTNAME=	intel2gas
PORTVERSION=	1.3.3
CATEGORIES=	lang
MASTER_SITES=	http://www.niksula.cs.hut.fi/~mtiihone/intel2gas/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converts Intel assembly language (nasm) to AT&T syntax (gas)

GNU_CONFIGURE=	yes
MAKE_ARGS=	CXX="${CXX}"

DATAPREFIX=	${PREFIX}/share/intel2gas
DATADIRS=	i2g g2i m2g
DOCS=		BUGS DATAFILES README

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/intel2gas ${PREFIX}/bin
	${MKDIR} ${DATAPREFIX}
.for dir in ${DATADIRS}
	${MKDIR} ${DATAPREFIX}/${dir}
	cd ${WRKSRC}; ${INSTALL_DATA} ${dir}/* ${DATAPREFIX}/${dir}
.endfor
.if !defined(NOPORTDOCS)
	${MKDIR} ${PREFIX}/share/doc/intel2gas
	cd ${WRKSRC}; ${INSTALL_DATA} ${DOCS} ${PREFIX}/share/doc/intel2gas
.endif

.include <bsd.port.mk>
