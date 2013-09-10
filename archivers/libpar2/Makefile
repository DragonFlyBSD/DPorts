# Created by: Jeff Burchell <toxic@doobie.com>
# $FreeBSD: archivers/libpar2/Makefile 326277 2013-09-04 13:47:08Z bapt $

PORTNAME=	libpar2
PORTVERSION=	0.3
CATEGORIES=	archivers
MASTER_SITES=	http://launchpad.net/${PORTNAME}/trunk/${PORTVERSION}/+download/

LICENSE=	GPLv2

MAINTAINER=	toxic@doobie.com
COMMENT=	Library for manipulating PAR2 files, extracted from par2cmdline

LIB_DEPENDS=	sigc-2.0:${PORTSDIR}/devel/libsigc++20

GNU_CONFIGURE=	yes

FETCH_ARGS=	-pRr
LDFLAGS+=	-L${LOCALBASE}/lib
CPPFLAGS+=	-I${LOCALBASE}/include

USE_LDCONFIG=	yes
USES=		pkgconfig

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e "s/-lstdc++//g" \
		${WRKSRC}/Makefile.in \
		${WRKSRC}/configure

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
