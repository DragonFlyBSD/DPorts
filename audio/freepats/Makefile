# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: audio/freepats/Makefile 314074 2013-03-13 11:54:25Z danfe $

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
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${DATADIR}

.include <bsd.port.mk>
