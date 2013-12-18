# Created by: Alejandro Pulver <alejandro@varnet.biz>
# $FreeBSD: audio/xmms-defx/Makefile 336166 2013-12-11 14:35:36Z bapt $

PORTNAME=	xmms-defx
PORTVERSION=	0.9.9
PORTREVISION=	4
CATEGORIES=	audio
MASTER_SITES=	SF/defx/defx/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multi-effects processor plug-in for XMMS

LIB_DEPENDS=	libxmms.so:${PORTSDIR}/multimedia/xmms

USES=		gmake
NO_STAGE=	yes
USE_GNOME=	gtk12

PLIST_FILES=	lib/xmms/Effect/libdefx.so

post-patch:
	@${REINPLACE_CMD} -e 's|^MAKE=.*||; s|gcc|${CC}|; s|-O2|${CFLAGS} -fPIC|; \
		s|gtk-config|${GTK_CONFIG}|' ${WRKSRC}/config.mak
	@${REINPLACE_CMD} -e 's|-shared|-shared -fPIC|' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/lib/libdefx.so ${PREFIX}/lib/xmms/Effect

.include <bsd.port.mk>
