# Created by: Simon 'corecode' Schubert <corecode@corecode.ath.cx>
# $FreeBSD: lang/stldoc/Makefile 327741 2013-09-20 19:53:09Z bapt $

PORTNAME=	stldoc
PORTVERSION=	1.0
CATEGORIES=	lang devel
MASTER_SITES=	http://www.sgi.com/tech/stl/
DISTNAME=	STL_doc

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The STL reference manual by SGI

NO_BUILD=	yes

NO_STAGE=	yes
do-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/* ${DOCSDIR}

.include <bsd.port.mk>
