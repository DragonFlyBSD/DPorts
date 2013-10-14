# Created by: Oliver Lehmann <oliver@FreeBSD.org>
# $FreeBSD: devel/libmowgli/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	libmowgli
PORTVERSION=	1.0.0
CATEGORIES=	devel
MASTER_SITES=	http://distfiles.atheme.org/

MAINTAINER=	oliver@FreeBSD.org
COMMENT=	A development framework for C

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_GMAKE=	yes
USE_BZIP2=	yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} 's|$${libdir}/pkgconfig|$${prefix}/libdata/pkgconfig|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
