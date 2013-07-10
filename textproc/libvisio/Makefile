# $FreeBSD: textproc/libvisio/Makefile 322199 2013-07-02 20:06:01Z jkim $

PORTNAME=	libvisio
PORTVERSION=	0.0.29
CATEGORIES=	textproc devel
MASTER_SITES=	http://dev-www.libreoffice.org/src/

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library and tools for parsing the visio file format structure

LICENSE=	LGPL21 MPL GPLv2
LICENSE_COMB=	dual

BUILD_DEPENDS=	${LOCALBASE}/include/boost/spirit/include/classic_core.hpp:${PORTSDIR}/devel/boost-libs
LIB_DEPENDS=	wpd-0.9:${PORTSDIR}/textproc/libwpd \
		wpg-0.2:${PORTSDIR}/graphics/libwpg \
		icui18n:${PORTSDIR}/devel/icu

CONFIGURE_ARGS=	--disable-werror
CPPFLAGS+=	-I${LOCALBASE}/include
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes
USE_PERL5_BUILD=yes
USE_XZ=		yes
USES=		pathfix pkgconfig

.include <bsd.port.pre.mk>

BUILD_DEPENDS+=	${LOCALBASE}/bin/gperf:${PORTSDIR}/devel/gperf
CONFIGURE_ENV+=	GPERF=${LOCALBASE}/bin/gperf

.include <bsd.port.post.mk>
