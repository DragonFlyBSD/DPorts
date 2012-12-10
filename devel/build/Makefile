# New ports collection Makefile for:	build
# Date created:				14 June 2010
# Whom:					gahr
#
# $FreeBSD: ports/devel/build/Makefile,v 1.5 2012/11/17 05:55:35 svnexp Exp $
#

PORTNAME=	build
PORTVERSION=	0.3.9
CATEGORIES=	devel
MASTER_SITES=	http://www.codesynthesis.com/download/${PORTNAME}/${PORTVERSION:R}/

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	A massively-parallel build system implemented on top of GNU make

BUILD_DEPENDS=	bash:${PORTSDIR}/shells/bash
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_BZIP2=	yes
USE_GMAKE=	yes

MAKEFILE=	makefile
NO_BUILD=	yes
MAKE_ARGS=	install_prefix=${PREFIX}

PLIST_SUB=	BUILD_VER=${PORTVERSION:R}

.include <bsd.port.mk>
