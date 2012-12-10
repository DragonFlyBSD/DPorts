# New ports collection makefile for:   libarms
# Date created:        27 March 2012
# Whom:                shigeru@iij.ad.jp
#
# $FreeBSD: ports/net/libarms/Makefile,v 1.2 2012/11/17 06:00:04 svnexp Exp $
#

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

post-configure:
	@${REINPLACE_CMD} 's|$${datarootdir}/doc/$${PACKAGE_TARNAME}|${DOCSDIR}|' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
