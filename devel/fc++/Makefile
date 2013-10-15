# Created by: ijliao
# $FreeBSD: devel/fc++/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	fc++
PORTVERSION=	1.5
CATEGORIES=	devel
MASTER_SITES=	http://people.cs.umass.edu/~yannis/fc++/
DISTNAME=	${PORTNAME:tu}.${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Functional Programming in C++

OPTIONS_DEFINE=	DOCS

NO_BUILD=	yes

NO_STAGE=	yes
.include <bsd.port.options.mk>

do-install:
	@${MKDIR} ${PREFIX}/include/fc++
	${INSTALL_DATA} ${WRKSRC}/*.h ${PREFIX}/include/fc++
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/changes.html ${DOCSDIR}
.endif

.include <bsd.port.mk>
