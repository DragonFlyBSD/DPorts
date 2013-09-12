# $FreeBSD: x11-toolkits/gtk-sharp-beans/Makefile 326132 2013-09-03 09:59:01Z bapt $

PORTNAME=	gtk-sharp-beans
PORTVERSION=	2.14.1
CATEGORIES=	x11-toolkits
MASTER_SITES=	http://download.mono-project.com/sources/${PORTNAME}/

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Extensions on top of GTK-sharp

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gio-sharp-2.0.pc:${PORTSDIR}/devel/gio-sharp
RUN_DEPENDS:=	${BUILD_DEPENDS}

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
USE_BZIP2=	yes

.include <bsd.port.pre.mk>

post-extract:
	${REINPLACE_CMD} -e 's|$$(libdir)/pkgconfig|$$(libdir)data/pkgconfig|' \
	    ${WRKSRC}/Makefile.in

.include <bsd.port.post.mk>
