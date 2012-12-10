# ex:ts=8
# Ports collection makefile for:	protobuf
# Date created:				Aug 9, 2008
# Whom:					vanilla
#
# $FreeBSD: ports/devel/protobuf/Makefile,v 1.13 2012/11/17 05:56:43 svnexp Exp $
#

PORTNAME=	protobuf
PORTVERSION=	2.4.1
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	A data interchange format library

USE_GMAKE=	yes
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_GNOME=	gnomehack pkgconfig

tests: build
	@(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} check)

.include <bsd.port.mk>
