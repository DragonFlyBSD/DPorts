# $FreeBSD: www/transmission-web/Makefile 313230 2013-03-02 13:48:31Z crees $

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
	@${MKDIR} ${DATADIR}/web
	@(cd ${WRKSRC}/web && ${COPYTREE_SHARE} \* ${DATADIR}/web)

.include "${MASTERDIR}/Makefile"
