# Created by: Jeremy Norris <ishmael27@home.com>
# $FreeBSD: devel/libast/Makefile 341704 2014-01-29 09:17:41Z rodrigo $

PORTNAME=	libast
PORTVERSION=	0.7
PORTREVISION=	11
CATEGORIES=	devel
MASTER_SITES=	http://www.eterm.org/download/ \
		CRITICAL

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Library of assorted spiffy things

LICENSE=	BSD

LIB_DEPENDS=	libpcre.so:${PORTSDIR}/devel/pcre

USE_AUTOTOOLS=	libtool
USE_EFL=	imlib2
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes
USES=		pathfix

.include <bsd.port.pre.mk>

.if defined(WITH_MMX) && (${ARCH} == "i386")
CONFIGURE_ARGS=	--enable-mmx
.endif

post-build:
	@${STRIP_CMD} ${WRKSRC}/src/.libs/libast.so.2

.include <bsd.port.post.mk>
