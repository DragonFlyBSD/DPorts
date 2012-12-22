# Created by: ijliao
# $FreeBSD: ports/devel/fc++/Makefile,v 1.12 2012/11/17 05:55:42 svnexp Exp $

PORTNAME=	fc++
PORTVERSION=	1.5
CATEGORIES=	devel
MASTER_SITES=	http://people.cs.umass.edu/~yannis/fc++/
DISTNAME=	${PORTNAME:tu}.${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Functional Programming in C++

OPTIONS_DEFINE=	DOCS

NO_BUILD=	yes

.include <bsd.port.options.mk>

do-install:
	@${MKDIR} ${PREFIX}/include/fc++
	${INSTALL_DATA} ${WRKSRC}/*.h ${PREFIX}/include/fc++
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/changes.html ${DOCSDIR}
.endif

.include <bsd.port.mk>
