# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: security/regripperplugins/Makefile 329218 2013-10-03 18:10:03Z antoine $

PORTNAME=	regripperplugins
PORTVERSION=	20130429
CATEGORIES=	security
MASTER_SITES=	GOOGLE_CODE
PROJECTHOST=	regripper
DISTNAME=	plugins${PORTVERSION}
EXTRACT_SUFX=	.zip

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Supplemental plugins for Harlan Carvey's RegRipper

LICENSE=	GPLv3

RUN_DEPENDS=	regripper>=0:${PORTSDIR}/security/regripper

NO_WRKSUBDIR=	yes
USE_DOS2UNIX=	yes
NO_BUILD=	yes

PORTDATA=	*.pl all ntuser sam security software system usrclass

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${PORTDATA:S,^,${WRKSRC}/,} ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
