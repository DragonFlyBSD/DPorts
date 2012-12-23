# Created by: Max Khon <fjoe@FreeBSD.org>
# $FreeBSD: ports/archivers/libmspack/Makefile,v 1.20 2012/12/18 08:04:12 svnexp Exp $

PORTNAME=	libmspack
PORTVERSION=	0.3
CATEGORIES=	archivers
MASTER_SITES=	http://www.cabextract.org.uk/libmspack/
DISTNAME=	${PORTNAME}-${PORTVERSION}alpha

MAINTAINER=	fjoe@FreeBSD.org
COMMENT=	Library for Microsoft compression formats

LICENSE=	LGPL21

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's,$$(libdir)/pkgconfig,@prefix@/libdata/pkgconfig,g' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
