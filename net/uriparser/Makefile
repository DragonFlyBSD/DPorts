# Created by: Ed Schouten <ed@FreeBSD.org>
# $FreeBSD: net/uriparser/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	uriparser
PORTVERSION=	0.7.9
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/Sources/${PORTVERSION}

MAINTAINER=	ed@FreeBSD.org
COMMENT=	URI parsing library

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--disable-doc --disable-test

USE_BZIP2=	yes
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} 's|$$(libdir)/pkgconfig|$$(libdir)data/pkgconfig|' \
	    ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
