# New ports collection makefile for:	freepats
# Date created:		5 February 2008
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/audio/freepats/Makefile,v 1.4 2012/11/17 05:54:32 svnexp Exp $
#

PORTNAME=	freepats
PORTVERSION=	20060219
CATEGORIES=	audio
MASTER_SITES=	http://freepats.zenvoid.org/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A free and open set of instrument patches

USE_BZIP2=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes

do-install:
	@cd ${WRKSRC}/&&${COPYTREE_SHARE} . ${DATADIR}/

.include <bsd.port.mk>
