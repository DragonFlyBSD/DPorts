# Created by: lofi@FreeBSD.org
# $FreeBSD: textproc/wv2/Makefile 338995 2014-01-07 10:28:35Z fluffy $

PORTNAME=	wv2
PORTVERSION=	0.4.2
PORTREVISION=	5
CATEGORIES=	textproc
MASTER_SITES=	SF/wvware/

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	A library providing routines to access Microsoft Word files

USE_GNOME=	libgsf
USE_BZIP2=	yes
USES=		cmake iconv pkgconfig
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|LIBGSF_INCLUDE_DIR|PC_LIBGSF_INCLUDE_DIRS|g' \
		-e 's|LIBGSF_LIBRARIES|PC_LIBGSF_LIBRARIES|g' \
		${WRKSRC}/CMakeLists.txt
	@${REINPLACE_CMD} -e 's|glib/giochannel.h|glib.h|g' \
		${WRKSRC}/src/olestream.h

.include <bsd.port.mk>
