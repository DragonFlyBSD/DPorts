# Created by: Yonatan <onatan@gmail.com>
# $FreeBSD: security/httprint/Makefile 327769 2013-09-20 22:55:24Z bapt $

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

NO_STAGE=	yes
do-install:
	${MKDIR} ${DATADIR}
	${CP} -Rp ${WRKSRC} ${DATADIR}
	${LN} -s ${DATADIR}/httprint ${PREFIX}/bin

.include <bsd.port.mk>
