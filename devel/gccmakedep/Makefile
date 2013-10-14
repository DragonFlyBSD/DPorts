# Created by: Dave Grochowski
# $FreeBSD: devel/gccmakedep/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	gccmakedep
PORTVERSION=	1.0.2
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Create dependencies in makefiles using 'gcc -M'

XORG_CAT=	util

BUILD_DEPENDS=	tradcpp:${PORTSDIR}/devel/tradcpp

MAN1=		gccmakedep.1

PLIST_FILES=	bin/gccmakedep
CONFIGURE_ENV+=	ac_cv_path_RAWCPP=tradcpp

NO_STAGE=	yes
.include <bsd.port.mk>
