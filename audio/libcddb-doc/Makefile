# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: audio/libcddb-doc/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libcddb-doc
PORTVERSION=	1.3.0
CATEGORIES=	audio
MASTER_SITES=	SF/libcddb/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Libcddb documentation

USE_BZIP2=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/output

do-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
