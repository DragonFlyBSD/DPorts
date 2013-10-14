# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: chinese/cconv/Makefile 329145 2013-10-03 06:42:41Z sunpoet $

PORTNAME=	cconv
PORTVERSION=	0.6.2
PORTREVISION=	2
CATEGORIES=	chinese converters
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simplified-Traditional Chinese conversion tool

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=		iconv

post-patch:
	@${REINPLACE_CMD} -e 's|unicode.h||; s|libcconv_la_LDFLAGS|cconv_LDFLAGS|' ${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -e 's|UTF-TW|UTF8-TW|g' ${WRKSRC}/main.c

.include <bsd.port.mk>
