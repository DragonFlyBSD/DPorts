# Created by: Dave Grochowski
# $FreeBSD: devel/gccmakedep/Makefile 336621 2013-12-16 11:11:09Z zeising $

PORTNAME=	gccmakedep
PORTVERSION=	1.0.2
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Create dependencies in makefiles using 'gcc -M'

XORG_CAT=	util

BUILD_DEPENDS=	tradcpp:${PORTSDIR}/devel/tradcpp

PLIST_FILES=	bin/gccmakedep man/man1/gccmakedep.1.gz
CONFIGURE_ENV+=	ac_cv_path_RAWCPP=tradcpp

.include <bsd.port.mk>
