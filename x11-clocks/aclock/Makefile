# Created by: gurkan@phys.ethz.ch
# $FreeBSD: x11-clocks/aclock/Makefile 327778 2013-09-20 23:44:55Z bapt $

PORTNAME=	aclock
PORTVERSION=	0.4.0
CATEGORIES=	x11-clocks gnustep
MASTER_SITES=	${MASTER_SITE_SAVANNAH}
MASTER_SITE_SUBDIR=	gap
DISTNAME=	AClock-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Analog Clock for GNUstep

LICENSE=	GPLv2

USE_GNUSTEP=	yes
USE_GNUSTEP_BACK=	yes
USE_GNUSTEP_BUILD=	yes
USE_GNUSTEP_INSTALL=	yes

WRKSRC=		${WRKDIR}/${DISTNAME}

NO_STAGE=	yes
.include <bsd.port.mk>
