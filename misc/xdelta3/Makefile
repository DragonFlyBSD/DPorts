# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: misc/xdelta3/Makefile 324744 2013-08-14 22:35:50Z ak $

PORTNAME=	xdelta
PORTVERSION=	3.0.7
PORTEPOCH=	1
CATEGORIES?=	misc devel
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	${PORTNAME}3-${PORTVERSION}

MAINTAINER=	danilogondolfo@gmail.com
COMMENT=	Open-source binary diff, VCDIFF/RFC 3284 delta compression

LICENSE=	GPLv2 # (or later)

GNU_CONFIGURE=	yes

MAN1=		xdelta3.1
PLIST_FILES=	bin/xdelta3

post-patch:
	@${REINPLACE_CMD} -e \
		'/_POSIX_/d ; \
		 /_C99_/d' ${WRKSRC}/xdelta3.h

.include <bsd.port.mk>
