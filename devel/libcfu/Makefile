# $FreeBSD: devel/libcfu/Makefile 319049 2013-05-25 13:37:08Z crees $

PORTNAME=	libcfu
DISTVERSION=	0.04a
CATEGORIES=	devel
MASTER_SITES=	GH

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Simple library of tools for developing multithreaded software

LICENSE=	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	crees
GH_COMMIT=	947dba4
GH_TAGNAME=	947dba4

USES=		pkgconfig pathfix
PATHFIX_MAKEFILEIN=	Makefile.am

USE_AUTOTOOLS=	autoconf autoheader automake aclocal libtool libtoolize
AUTOMAKE_ARGS=	--add-missing
ACLOCAL_ARGS=	-I ${LIBTOOL_M4:C,[^/]*$,,}
INFO=		${PORTNAME}

.include <bsd.port.mk>
