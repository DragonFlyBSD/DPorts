# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: security/regripperplugins/Makefile 316203 2013-04-21 19:16:02Z antoine $

PORTNAME=	regripperplugins
PORTVERSION=	20130418
CATEGORIES=	security
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	plugins${PORTVERSION}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Supplemental plugins for Harlan Carvey's RegRipper

LICENSE=	GPLv3

RUN_DEPENDS=	regripper>=0:${PORTSDIR}/security/regripper

USE_ZIP=	yes
NO_WRKSUBDIR=	yes
USE_DOS2UNIX=	yes
NO_BUILD=	yes
PROJECTHOST=	regripper
PORTDATA=	*

do-install:
	@${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/* ${DATADIR}

.include <bsd.port.mk>
