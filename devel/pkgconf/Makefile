# $FreeBSD: ports/devel/pkgconf/Makefile,v 1.16 2012/11/17 05:56:42 svnexp Exp $

PORTNAME=	pkgconf
PORTVERSION=	0.8.9
CATEGORIES=	devel
MASTER_SITES=	http://tortois.es/~nenolod/distfiles/ \
		http://files.etoilebsd.net/pkgconf/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Utility to help to configure compiler and linker flags

LICENSE=	BSD

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-pkg-config-dir=${PREFIX}/libdata/pkgconfig \
		--with-system-libdir=/usr/lib \
		--with-system-includedir=/usr/include
USE_BZIP2=	yes

CONFLICTS_INSTALL=	pkg-config-*

post-install:
	${LN} -sf ${PREFIX}/bin/pkgconf ${PREFIX}/bin/pkg-config

.include <bsd.port.mk>
