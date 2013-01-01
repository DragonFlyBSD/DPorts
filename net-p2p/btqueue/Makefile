# New ports collection makefile for:	BTQueue
# Date created:				04 Jun 2004
# Whom:					Stefan Walter <sw@gegenunendlich.de>
#
# $FreeBSD: ports/net-p2p/btqueue/Makefile,v 1.21 2012/11/17 06:00:39 svnexp Exp $
#

PORTNAME=	btqueue
PORTVERSION=	0.1.3
PORTREVISION=	1
CATEGORIES=	net-p2p
MASTER_SITES=	SF
DISTNAME=	BTQueue-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Alternative BitTorrent client with queuing functionality

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/_bsddb.so:${PORTSDIR}/databases/py-bsddb

CONFLICTS=	py??-*[Bb]it[Tt]ornado* py??-*[Bb]it[Tt]orrent*
USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	BTQueue

DATADIR=	${PREFIX}/share/BTQueue
DOCSDIR=	${PREFIX}/share/doc/BTQueue

OPTIONS_DEFINE=	PYXML
OPTIONS_DEFAULT=	PYXML
PYXML_DESC=	Add dependency on PyXML (needed for crawler only)

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MPYXML}
RUN_DEPENDS+=	${PYXML}
.endif

.include <bsd.port.mk>
