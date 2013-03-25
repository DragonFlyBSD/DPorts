# Created by: Thawatchai Piyawat <piyawat@usablelabs.com>
# $FreeBSD: devel/libthai/Makefile 314640 2013-03-19 13:04:30Z eadler $

PORTNAME=	libthai
PORTVERSION=	0.1.19
CATEGORIES=	devel
MASTER_SITES=	http://linux.thai.net/pub/thailinux/software/libthai/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Thai language support library

LICENSE=	LGPL21

LIB_DEPENDS=	datrie:${PORTSDIR}/devel/libdatrie

USE_XZ=		yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USES=	pathfix
USE_LDCONFIG=	yes
USE_PKGCONFIG=	build

OPTIONS_DEFINE=	DOXYGEN

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOXYGEN}
BUILD_DEPENDS=	doxygen:${PORTSDIR}/devel/doxygen
PORTDOCS=	*
.else
CONFIGURE_ARGS=	--disable-doxygen-doc
.endif

.include <bsd.port.mk>
