# Created by: antoine@FreeBSD.org
# $FreeBSD: ports/security/regripperplugins/Makefile,v 1.2 2012/12/02 12:32:27 svnexp Exp $

PORTNAME=	regripperplugins
DISTVERSION=	20120926
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
