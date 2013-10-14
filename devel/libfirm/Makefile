# Created by: Christoph Mallon <christoph.mallon@gmx.de>
# $FreeBSD: devel/libfirm/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	libfirm
PORTVERSION=	1.21.0
CATEGORIES=	devel lang
MASTER_SITES=	SF

MAINTAINER=	sperber@FreeBSD.org
COMMENT=	A graph-based SSA intermediate representation library for compilers

LICENSE=	GPLv2 LGPL21
LICENSE_COMB=	multi

USE_AUTOTOOLS=	autoconf
USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack
USE_LDCONFIG=	yes
USES=		pkgconfig

OPTIONS_DEFINE=	DEBUG

NO_STAGE=	yes
.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDEBUG}
CONFIGURE_ARGS+=	--enable-debug
.else
CONFIGURE_ARGS+=	--disable-debug
.endif

.include <bsd.port.mk>
