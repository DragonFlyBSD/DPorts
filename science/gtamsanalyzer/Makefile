# Created by: gurkan@phys.ethz.ch
# $FreeBSD: science/gtamsanalyzer/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gtamsanalyzer
PORTVERSION=	0.42
PORTREVISION=	2
CATEGORIES=	science gnustep
MASTER_SITES=	SF/tamsys/gnustep%20tams/GTAMSAnalyzer%2${PORTVERSION}
DISTNAME=	GTAMSAnalyzer.src.${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Qualitative Research Software for the Free World for GNUstep

LICENSE=	GPLv2

USE_GNUSTEP=	yes
USE_GNUSTEP_BACK=	yes
USE_GNUSTEP_BUILD=	yes
USE_GNUSTEP_INSTALL=	yes

WRKSRC=	${WRKDIR}/${DISTNAME}/Source

NO_STAGE=	yes
post-patch:
	${RM} "${WRKSRC}/obj"

.include <bsd.port.mk>
