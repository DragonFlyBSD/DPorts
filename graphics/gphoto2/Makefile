# Created by: Anders Nordby <anders@fix.no>
# $FreeBSD: graphics/gphoto2/Makefile 330928 2013-10-19 19:32:28Z danfe $

PORTNAME=	gphoto2
PORTVERSION=	2.4.14
CATEGORIES=	graphics
MASTER_SITES=	SF/gphoto/gphoto/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Command-line frontend to libgphoto2

LICENSE=	GPLv2

LIB_DEPENDS=	libpopt.so:${PORTSDIR}/devel/popt \
		libgphoto2.so:${PORTSDIR}/graphics/libgphoto2

USES=		gmake pkgconfig
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--without-cdk

OPTIONS_DEFINE=	AALIB DOCS NLS
OPTIONS_DEFAULT=	AALIB
OPTIONS_SUB=	yes

AALIB_DESC=	Text mode capture preview support

AALIB_LIB_DEPENDS=	libaa.so:${PORTSDIR}/graphics/aalib
AALIB_CONFIGURE_OFF=	--without-aalib

NLS_USES=	gettext
NLS_CONFIGURE_OFF=	--disable-nls

post-install:
	${INSTALL_DATA} ${WRKSRC}/NEWS ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
