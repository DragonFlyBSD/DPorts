# Created by:	rene
# $FreeBSD: ports/lang/bf2c/Makefile,v 1.20 2012/11/17 05:58:48 svnexp Exp $

PORTNAME=	bf2c
PORTVERSION=	1.2.5
CATEGORIES=	lang
MASTER_SITES=	ftp://rene-ladan.nl/pub/distfiles/

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Optimizing BrainF*ck to C compiler

LICENSE=	BSD

USE_XZ=		yes
USE_GMAKE=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bf2c ${PREFIX}/bin

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
