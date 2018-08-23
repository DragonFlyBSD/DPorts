# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: head/multimedia/libdca/Makefile 470419 2018-05-19 16:33:53Z riggs $

PORTNAME=	libdca
PORTVERSION=	0.0.6
CATEGORIES=	multimedia
MASTER_SITES=	http://download.videolan.org/pub/videolan/${PORTNAME}/${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free DTS Coherent Acoustics decoder

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool pathfix pkgconfig tar:bzip2
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
