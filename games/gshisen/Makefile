# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: games/gshisen/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	gshisen
PORTVERSION=	1.3.0
CATEGORIES=	games gnustep
MASTER_SITES=	${MASTER_SITE_SAVANNAH}
MASTER_SITE_SUBDIR=	gap
DISTNAME=	GShisen-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Shisen-sho puzzle game for GNUstep

USE_GNUSTEP=	yes
USE_GNUSTEP_BACK=	yes
USE_GNUSTEP_BUILD=	yes
USE_GNUSTEP_INSTALL=	yes

MAKE_ENV+=	GNUSTEP_INSTALLATION_DOMAIN=SYSTEM

NO_STAGE=	yes
.include <bsd.port.mk>
