# $FreeBSD: ports/www/transmission25-web/Makefile,v 1.3 2012/12/31 17:09:13 svnexp Exp $

PORTREVISION=	0
CATEGORIES=	www net-p2p
PKGNAMESUFFIX=	-web

MAINTAINER=	crees@FreeBSD.org
COMMENT=	A fast and lightweight WebUI for Transmission BitTorrent client

DESCR=		${.CURDIR}/pkg-descr
MASTERDIR=	${.CURDIR}/../../net-p2p/transmission25-cli
PLIST=		${NONEXISTENT}
SLAVEPORT=	web

PORTDATA=	web
PORTDOCS=	*

NO_BUILD=	yes

post-extract:
	@${FIND} ${WRKSRC}/web -name Makefile.* -delete

do-install:
	@${MKDIR} ${DATADIR}/web
	@(cd ${WRKSRC}/web && ${COPYTREE_SHARE} \* ${DATADIR}/web)

.include "${MASTERDIR}/Makefile"
