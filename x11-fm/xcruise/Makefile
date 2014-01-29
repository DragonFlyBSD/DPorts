# Created by: minoura@netbsd.org
# $FreeBSD: x11-fm/xcruise/Makefile 341177 2014-01-26 14:07:33Z miwi $

PORTNAME=	xcruiser
PORTVERSION=	0.30
PORTREVISION=	3
CATEGORIES=	x11-fm
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	sanpei@FreeBSD.org
COMMENT=	Navigate through a three-dimensional view of a file system

USES=		imake
USE_XORG=	ice sm x11 xaw xext xmu xpm xt

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/doc/xcruise
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${PREFIX}/share/doc/xcruise

.include <bsd.port.mk>
