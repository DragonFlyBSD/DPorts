# Created by: Clement Laforet <sheepkiller@cultdeadsheep.org>
# $FreeBSD: www/mod_tidy/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	mod_tidy
PORTVERSION=	0.5.5
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://mod-tidy.sourceforge.net/src/
DIST_SUBDIR=	apache2

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Validates the HTML output of your apache2 webserver

LIB_DEPENDS=	tidy:${PORTSDIR}/www/tidy-lib


WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/src
USE_APACHE=	22+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
AP_INC+=	${LOCALBASE}/include/tidy
AP_LIB+=	${LOCALBASE}/lib -ltidy
PLIST_FILES=	${DOCSDIR:S/${PREFIX}\///}/LICENSE
PLIST_DIRS=	${DOCSDIR:S/${PREFIX}\///}

NO_STAGE=	yes
post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/../LICENSE ${DOCSDIR}

.include <bsd.port.mk>
