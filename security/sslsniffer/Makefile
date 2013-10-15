# Created by: Jim Geovedi <jim@corebsd.or.id>
# $FreeBSD: security/sslsniffer/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	sslsniffer
PORTVERSION=	1.21
CATEGORIES=	security net
MASTER_SITES=	http://crypto.stanford.edu/~eujin/sslsniffer/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SSLv3/TLS and SSLv2 sniffer

LICENSE=	GPLv2 # (or later)

WRKSRC=		${WRKDIR}/${PORTNAME}

USE_OPENSSL=	yes

PORTDOCS=	README
PLIST_FILES=	bin/sslsniffer

NO_STAGE=	yes
.include <bsd.port.options.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/sslsniffer ${PREFIX}/bin
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
