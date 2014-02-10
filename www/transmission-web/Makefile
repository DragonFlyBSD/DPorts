# $FreeBSD: head/www/transmission-web/Makefile 338028 2013-12-29 17:08:28Z crees $

PORTREVISION=	0
CATEGORIES=	www net-p2p
PKGNAMESUFFIX=	-web

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Fast and lightweight WebUI for Transmission BitTorrent client

DESCR=		${.CURDIR}/pkg-descr
MASTERDIR=	${.CURDIR}/../../net-p2p/transmission-cli
PLIST=		${NONEXISTENT}
SLAVEPORT=	web

PORTDATA=	web
PORTDOCS=	*

NO_BUILD=	yes

post-extract:
	@${FIND} ${WRKSRC}/web -name Makefile.* -delete

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/web
	(cd ${WRKSRC}/web && ${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR}/web)

.include "${MASTERDIR}/Makefile"
