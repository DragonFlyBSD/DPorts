# New ports collection makefile for:	libtpl
# Date created:				30 July 2010
# Whom:					Frederic Culot <frederic@culot.org>
#
# $FreeBSD: ports/devel/libtpl/Makefile,v 1.3 2012/11/17 05:55:57 svnexp Exp $
#

PORTNAME=	libtpl
PORTVERSION=	1.5
CATEGORIES=	devel
MASTER_SITES=	SF/tpl/tpl/${PORTNAME}-${PORTVERSION}/

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Tpl is a library for serializing C data

LICENSE=	BSD

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/txt/userguide.txt ${DOCSDIR}
.endif

.include <bsd.port.mk>
