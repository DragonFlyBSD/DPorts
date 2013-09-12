# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: graphics/rgbpaint/Makefile 327021 2013-09-12 00:48:38Z marino $

PORTNAME=	rgbpaint
PORTVERSION=	0.8.7
PORTREVISION=	6
CATEGORIES=	graphics
MASTER_SITES=	SF/mtpaint/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Very basic painting program

USES=		gettext pkgconfig
USE_BZIP2=	yes
USE_GNOME=	gtk20
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX} --mandir=${MAN1PREFIX}/man/man1 \
		--locale=${PREFIX}/share/locale cflags slow intl man
MAN1=		${PORTNAME}.1
MANCOMPRESSED=	yes

post-patch:
	@${REINPLACE_CMD} -e '/if \[/s|==|=|g' ${WRKSRC}/configure

.include <bsd.port.mk>
