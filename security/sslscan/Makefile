# Created by: Matthieu BOUTHORS <matthieu@labs.fr>
# $FreeBSD: security/sslscan/Makefile 322461 2013-07-07 21:57:17Z jgh $

PORTNAME=	sslscan
PORTVERSION=	1.8.2
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}
EXTRACT_SUFX=	.tgz

MAINTAINER=	matthieu@labs.fr
COMMENT=	SSLScan is a fast SSL port scanner

MAKE_ARGS=	CC="${CC}" CFLAGS="-I${LOCALBASE}/include"
MAKE_ARGS+=	LDFLAGS="-lcrypto -L${LOCALBASE}/lib"

MAN1=	sslscan.1
PLIST_FILES=	bin/sslscan

.include <bsd.port.mk>
