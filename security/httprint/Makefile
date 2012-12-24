# Ports collection makefile for:  httprint
# Date created:			  05 July 2006
# Whom:				  Yonatan <onatan@gmail.com>
#
# $FreeBSD: ports/security/httprint/Makefile,v 1.3 2012/11/17 06:01:05 svnexp Exp $
#

PORTNAME=	httprint
PORTVERSION=	301
CATEGORIES=	security
MASTER_SITES=	http://net-square.com/zip%20folders/
DISTNAME=	${PORTNAME}_freebsd_${PORTVERSION}

MAINTAINER=	onatan@gmail.com
COMMENT=	Web server fingerprinting tool

WRKSRC=		${WRKDIR}/${PORTNAME}_${PORTVERSION}/freebsd/
USE_ZIP=	yes

RESTRICTED=	No cost for personal, education and non-commercial use.
NO_BUILD=	yes

do-install:
	${MKDIR} ${DATADIR}
	${CP} -Rp ${WRKSRC} ${DATADIR}
	${LN} -s ${DATADIR}/httprint ${PREFIX}/bin

.include <bsd.port.mk>
