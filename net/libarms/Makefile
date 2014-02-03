# Created by: shigeru@iij.ad.jp
# $FreeBSD: net/libarms/Makefile 341914 2014-01-31 06:39:24Z miwi $

PORTNAME=	libarms
PORTVERSION=	5.01
CATEGORIES=	net devel
MASTER_SITES=	https://dev.smf.jp/dl/ \
		http://dev.smf.jp/dl/

MAINTAINER=	shigeru@iij.ad.jp
COMMENT=	SMFv2/ARMS client library for C

LIB_DEPENDS=	expat:${PORTSDIR}/textproc/expat2

USES=		gmake
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

LDFLAGS+=	-L${LOCALBASE}/lib
CPPFLAGS+=	-I${LOCALBASE}/include

post-configure:
	@${REINPLACE_CMD} 's|$${datarootdir}/doc/$${PACKAGE_TARNAME}|${DOCSDIR}|' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
