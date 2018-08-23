# $FreeBSD: head/x11-fonts/encodings/Makefile 458816 2018-01-12 10:55:33Z pi $

PORTNAME=	encodings
PORTVERSION=	1.0.4
PORTREVISION=	4
PORTEPOCH=	1
CATEGORIES=	x11-fonts
MASTER_SITES=	XORG/individual/font

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org Encoding fonts

LICENSE=	PD

BUILD_DEPENDS=	mkfontscale:x11-fonts/mkfontscale

USES=		tar:bzip2
USE_XORG=	fontutil
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-fontrootdir=${PREFIX}/share/fonts

post-install:
	cd ${STAGEDIR}${PREFIX}/share/fonts/encodings && mkfontscale -b -s -l -n -r -p ${PREFIX}/share/fonts/encodings -e . -e large .

.include <bsd.port.mk>
