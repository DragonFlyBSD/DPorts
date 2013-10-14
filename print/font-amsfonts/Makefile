# Created by: hrs
# $FreeBSD: print/font-amsfonts/Makefile 327765 2013-09-20 22:43:59Z bapt $

PORTNAME=	amsfonts
PORTVERSION=	3.02
PORTREVISION=	1
CATEGORIES=	print
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	hrs
PKGNAMEPREFIX=	font-
DIST_SUBDIR=	teTeX

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Computer Modern and standard fonts for TeX

PLIST_SUB=	FONTSDIR=${FONTSDIR}
NO_BUILD=	yes

FONTSDIR=	share/fonts/${PORTNAME}

NO_STAGE=	yes
do-install:
	${MKDIR} ${PREFIX}/${FONTSDIR}
	cd ${PREFIX}/${FONTSDIR} && ${TAR} -x -z -U --strip-components 1 -f \
	    ${DISTDIR}/${DIST_SUBDIR}/${DISTNAME}${EXTRACT_SUFX}
	${CHOWN} -R ${SHAREOWN}:${SHAREGRP} ${PREFIX}/${FONTSDIR}
	${CHMOD} -R go-w ${PREFIX}/${FONTSDIR}

.include <bsd.port.mk>
