# Created by: shigeru@iij.ad.jp
# $FreeBSD: net/libarms/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libarms
PORTVERSION=	5.01
CATEGORIES=	net devel
MASTER_SITES=	https://dev.smf.jp/dl/ \
		http://dev.smf.jp/dl/

MAINTAINER=	shigeru@iij.ad.jp
COMMENT=	SMFv2/ARMS client library for C

LIB_DEPENDS=	expat:${PORTSDIR}/textproc/expat2

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

LDFLAGS+=	-L${LOCALBASE}/lib
CPPFLAGS+=	-I${LOCALBASE}/include

NO_STAGE=	yes
post-configure:
	@${REINPLACE_CMD} 's|$${datarootdir}/doc/$${PACKAGE_TARNAME}|${DOCSDIR}|' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
