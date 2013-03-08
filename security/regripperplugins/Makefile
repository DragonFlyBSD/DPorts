# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: security/regripperplugins/Makefile 313277 2013-03-02 16:48:11Z miwi $

PORTNAME=	regripperplugins
DISTVERSION=	20130218
CATEGORIES=	security
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Supplemental plugins for Harlan Carvey's RegRipper

LICENSE=	GPLv3

RUN_DEPENDS=	regripper>=0:${PORTSDIR}/security/regripper

USE_ZIP=	yes
NO_WRKSUBDIR=	yes
USE_DOS2UNIX=	yes
NO_BUILD=	yes

do-install:
	@${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/* ${DATADIR}

.include <bsd.port.mk>
