# Created by: Daniel Gerzo <danger@rulez.sk>
# $FreeBSD: www/mod_domaintree/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	mod_domaintree
PORTVERSION=	1.6
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://dev.iworks.at/mod_domaintree/
EXTRACT_SUFX=	.tgz

MAINTAINER=	danger@FreeBSD.org
COMMENT=	Hostname to filesystem mapper for Apache 2


WRKSRC=		${WRKDIR}/${PORTNAME}
USE_APACHE=	22+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

PORTDOCS=	LICENSE.txt ChangeLog

PLIST_FILES=	share/doc/mod_domaintree/LICENSE.txt \
		share/doc/mod_domaintree/ChangeLog
PLIST_DIRS=	share/doc/mod_domaintree

NO_STAGE=	yes
post-install:
	@${MKDIR} ${DOCSDIR}
	@cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}

.include <bsd.port.mk>
