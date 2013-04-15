# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: audio/extace/Makefile 315433 2013-03-28 03:28:30Z eadler $

PORTNAME=	extace
PORTVERSION=	1.9.9
PORTREVISION=	7
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/eXtace/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Audio visualization plugin for the X Window System

LIB_DEPENDS=	fftw3:${PORTSDIR}/math/fftw3

USES=        pathfix
USE_GNOME=	esound gnomehier gtk20
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/extace \
		share/gnome/apps/Multimedia/extace.desktop

post-patch:
	@${REINPLACE_CMD} -e 's|^CFLAGS=|#CFLAGS=|g' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|^LIBS =|#LIBS =|g' ${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
