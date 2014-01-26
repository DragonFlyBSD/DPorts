# Created by: Dave Grochowski
# $FreeBSD: devel/gccmakedep/Makefile 340722 2014-01-22 17:00:46Z mat $

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
