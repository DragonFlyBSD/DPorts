# Created by: Alexander Brovikov <alexander@brovikov.ru>
# $FreeBSD: net/libsrtp/Makefile 341962 2014-01-31 09:27:01Z miwi $

PORTNAME=	libsrtp
PORTVERSION=	1.4.4
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	SF/${ORIGNAME}/${ORIGNAME}/${PORTVERSION}
DISTNAME=	${ORIGNAME}-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	alexander@brovikov.ru
COMMENT=	Library implementing Secure RTP

WRKSRC=		${WRKDIR}/${ORIGNAME}
ORIGNAME=	srtp

GNU_CONFIGURE=	yes
USES=		gmake
USE_CSTD=	gnu89
CFLAGS+=	-fPIC

.include <bsd.port.mk>
