# $FreeBSD: multimedia/librtmp/Makefile 332194 2013-10-31 02:03:01Z hrs $

PORTNAME=	librtmp
PORTVERSION=	2.4.20130923
CATEGORIES=	multimedia net
MASTER_SITES=	LOCAL/hrs
DISTNAME=	rtmpdump-${PORTVERSION}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	RTMP stream library

LICENSE=	GPLv2

USES=		pkgconfig
USE_LDCONFIG=	yes
USE_OPENSSL=	yes
CFLAGS+=	${PTHREAD_CFLAGS} -I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB}
WRKSRC=		${WRKDIR}/${DISTNAME}/librtmp

.include <bsd.port.mk>
