# $FreeBSD: games/grubik/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	grubik
PORTVERSION=	0.1
PORTREVISION=	2
CATEGORIES=	games gnustep
MASTER_SITES=	http://debian.uni-essen.de/misc/GNUstep/Apps/Recreational/
DISTNAME=	GRubik
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Virtual 3D Rubiks cube for GNUstep

LICENSE=	GPLv2

USE_GNUSTEP=	yes
USE_GNUSTEP_BACK=	yes
USE_GNUSTEP_BUILD=	yes
USE_GNUSTEP_INSTALL=	yes

NO_STAGE=	yes
post-patch:
	${RM} -rf ${WRKSRC}/GRubik.app/ix86
	${REINPLACE_CMD} -e 's|^//|# //|' ${WRKSRC}/GNUmakefile

.include <bsd.port.mk>
