# Created by: Jason Bacon <jwbacon@tds.net>
# $FreeBSD: biology/plink/Makefile 336328 2013-12-13 09:34:40Z gerald $

PORTNAME=	plink
PORTVERSION=	1.07
PORTREVISION=	1
CATEGORIES=	biology science
MASTER_SITES=	http://pngu.mgh.harvard.edu/~purcell/plink/dist/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	jwbacon@tds.net
COMMENT=	Whole genome association analysis toolset

LICENSE=	GPLv2

LIB_DEPENDS=	liblapack.so:${PORTSDIR}/math/lapack

USES=		gmake
USE_ZIP=	yes
USE_FORTRAN=	yes	# Make it use the same compiler as lapack

PLIST_FILES=	bin/plink

NO_STAGE=	yes
do-install:
	${MKDIR} ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/plink ${PREFIX}/bin

.include <bsd.port.mk>
