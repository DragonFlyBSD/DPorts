# New ports collection makefile for:	libmspack
# Date created:				25 Nov 2004
# Whom:					Max Khon <fjoe@FreeBSD.org>
#
# $FreeBSD: ports/archivers/libmspack/Makefile,v 1.19 2012/11/17 05:54:21 svnexp Exp $
#

PORTNAME=	libmspack
PORTVERSION=	0.3
CATEGORIES=	archivers
MASTER_SITES=	http://www.cabextract.org.uk/libmspack/
DISTNAME=	${PORTNAME}-${PORTVERSION}alpha

MAINTAINER=	fjoe@FreeBSD.org
COMMENT=	A library for Microsoft compression formats

LICENSE=	LGPL21

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's,$$(libdir)/pkgconfig,@prefix@/libdata/pkgconfig,g' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
