# Created by: Clement Laforet <sheepkiller@cultdeadsheep.org>
# $FreeBSD: www/mod_auth_external2/Makefile 338168 2013-12-30 20:55:18Z ohauer $

PORTNAME=	mod_auth_external
PORTVERSION=	2.2.11
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	GOGLE_CODE
PKGNAMESUFFIX=	2
DIST_SUBDIR=	apache2

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Allows users authentication based on external mechanisms

LICENSE=	APACHE20

USE_APACHE=	22
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SHORTMODNAME=	auth_external

PORTDOCS=	AUTHENTICATORS INSTALL README

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
