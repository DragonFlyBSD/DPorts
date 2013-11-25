#Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: devel/mate-common/Makefile 334661 2013-11-23 11:39:07Z kwm $

PORTNAME=	mate-common
PORTVERSION=	1.6.2
CATEGORIES=	devel mate
MASTER_SITES=	MATE
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Common automake macros for MATE

PORTSCOUT=	limitw:1,even

USES=		gmake pkgconfig:both
USE_XZ=		yes
USE_MATE=	autogen
USE_AUTOTOOLS=	aclocal:env autoconf:env automake:env
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
