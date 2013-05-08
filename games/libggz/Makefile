# Created by: ijliao
# $FreeBSD: games/libggz/Makefile 317220 2013-05-03 16:36:39Z ehaupt $

PORTNAME=	libggz
PORTVERSION=	${GGZ_VERSION}
PORTREVISION=	11
CATEGORIES=	games

MAINTAINER=	kde@FreeBSD.org
COMMENT=	The GGZ Gaming Zone - Base Library

LIB_DEPENDS=	gcrypt:${PORTSDIR}/security/libgcrypt

USE_AUTOTOOLS=	libtool
USES=	pathfix
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-debug
USE_LDCONFIG=	yes

MAN3=	ggz.h.3

CPPFLAGS+=	-I${LOCALBASE}/include ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

.if defined(WITH_GNUTLS)
LIB_DEPENDS+=	gnutls.26:${PORTSDIR}/security/gnutls
CONFIGURE_ARGS+=	--with-tls=GnuTLS
.else
USE_OPENSSL=	yes
CONFIGURE_ARGS+=	--with-tls=OpenSSL
.endif

.include <bsd.port.pre.mk>
.include "../..//games/libggz/bsd.ggz.mk"
.include <bsd.port.post.mk>
