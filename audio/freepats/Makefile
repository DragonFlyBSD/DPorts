# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: audio/freepats/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	freepats
PORTVERSION=	20060219
CATEGORIES=	audio
MASTER_SITES=	http://freepats.zenvoid.org/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free and open set of instrument patches

USE_BZIP2=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes

do-install:
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
