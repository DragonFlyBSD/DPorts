# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/spatialindex/Makefile 314826 2013-03-21 08:15:36Z wen $

PORTNAME=	spatialindex
PORTVERSION=	1.8.0
CATEGORIES=	devel
MASTER_SITES=	http://download.osgeo.org/libspatialindex/
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A General Framework for Developing Spatial Indices

USE_AUTOTOOLS=	libtool:env
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|(libdir)/pkgconfig|(prefix)/libdata/pkgconfig|' \
		${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
