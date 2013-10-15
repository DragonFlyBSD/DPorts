# Created by: Andrew Stuart <elitetek@tekrealm.net>
# $FreeBSD: misc/gkrellshoot2/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	gkrellshoot
PORTVERSION=	0.4.4
PORTREVISION=	8
CATEGORIES=	misc
MASTER_SITES=	SF/${PORTNAME}/GkrellM2.0%20Port/${PORTVERSION}
PKGNAMESUFFIX=	2

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Screen locking and screen capture plugin for GKrellM 2

USES=		pkgconfig
BUILD_DEPENDS=	${LOCALBASE}/include/gkrellm2/gkrellm.h:${PORTSDIR}/sysutils/gkrellm2
RUN_DEPENDS=	gkrellm:${PORTSDIR}/sysutils/gkrellm2 \
		import:${PORTSDIR}/graphics/ImageMagick

USES=		pkgconfig
PLIST_FILES=	libexec/gkrellm2/plugins/gkrellshoot.so
WRKSRC=		${WRKDIR}/gkrellShoot-${PORTVERSION}

ALL_TARGET=	${PORTNAME}.so

NO_STAGE=	yes
do-install:
	@${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.so ${PREFIX}/libexec/gkrellm2/plugins

.include <bsd.port.mk>
