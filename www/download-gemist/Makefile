# Created by: Martin Tournoij <martin@arp242.net>
# $FreeBSD: ports/www/download-gemist/Makefile,v 1.1 2013/02/10 20:38:02 svnexp Exp $
#

PORTNAME=	download-gemist
PORTVERSION=	1.2
CATEGORIES=	www python
MASTER_SITES=	http://code.arp242.net/download-gemist/downloads/

MAINTAINER=	martin@arp242.net
COMMENT=	Download videos from the Dutch uitzending gemist site

LICENSE=	MIT

USE_PYTHON=	yes
NO_BUILD=	yes
FETCH_ARGS=	-Fpr

PLIST_DIRS=	%%DOCSDIR%%
PLIST_FILES=	bin/download-gemist \
		bin/download-gemist-guide \
		%%DOCSDIR%%/README.md

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/download-gemist* ${PREFIX}/bin/
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${DOCSDIR}/

.include <bsd.port.mk>
