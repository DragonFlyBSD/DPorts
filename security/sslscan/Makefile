# Created by: Matthieu BOUTHORS <matthieu@labs.fr>
# $FreeBSD: security/sslscan/Makefile 327769 2013-09-20 22:55:24Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
