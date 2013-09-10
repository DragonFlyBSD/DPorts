# Created by: buganini@gmail.com
# $FreeBSD: graphics/c-a-i-r/Makefile 326168 2013-09-03 16:19:05Z bapt $

PORTNAME=	c-a-i-r
PORTVERSION=	2.19
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/CAIR%20v${PORTVERSION}
DISTNAME=	CAIR_v${PORTVERSION}

MAINTAINER=	buganini@gmail.com
COMMENT=	Content Aware Image Resizer is an implementation of seam carving

USE_ZIP=	yes
USES=		gmake
MAKE_ARGS+=	CC="${CXX}"

WRKSRC=		${WRKDIR}

PLIST_FILES=	bin/cair

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/cair ${PREFIX}/bin

.include <bsd.port.mk>
