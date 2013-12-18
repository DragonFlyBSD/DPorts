# Created by: Andrey Zakhvatov
# $FreeBSD: misc/deco/Makefile 335980 2013-12-09 13:17:59Z danilo $

PORTNAME=	deco
PORTVERSION=	3.9
PORTREVISION=	4
CATEGORIES=	misc
MASTER_SITES=	SF/${PORTNAME}/Deco%20Sources/${PORTVERSION}
PKGNAMESUFFIX=	-misc
DISTNAME=	deco39
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Demos Commander, a free Norton Commander clone

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--libdir=${PREFIX}/share
CONFIGURE_ENV=	ac_cv_lib_ncurses_tgetent=no

.include <bsd.port.mk>
