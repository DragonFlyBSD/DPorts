# $FreeBSD: ports/net/zillion/Makefile,v 1.12 2012/11/17 06:00:26 svnexp Exp $

PORTNAME=	zillion
PORTVERSION=	0.1
PORTREVISION=	2
CATEGORIES=	net gnustep
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
DISTNAME=	${PORTNAME}-0_1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Distributed computing project

LICENSE=	BSD

USE_GNUSTEP=	yes
USE_GNUSTEP_BACK=	yes
USE_GNUSTEP_BUILD=	yes
USE_GNUSTEP_INSTALL=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

post-patch:
	${REINPLACE_CMD} -e 's|^CC=|# CC=|' ${WRKSRC}/GNUmakefile

.include <bsd.port.mk>
