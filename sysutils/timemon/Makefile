# Created by: gurkan@phys.ethz.ch
# $FreeBSD: head/sysutils/timemon/Makefile 342201 2014-02-01 18:47:07Z antoine $

PORTNAME=	timemon
PORTVERSION=	4.1
CATEGORIES=	sysutils gnustep
MASTER_SITES=	${MASTER_SITE_SAVANNAH}
MASTER_SITE_SUBDIR=	gap
DISTNAME=	TimeMon-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CPU time usage monitor for GNUstep

NO_CDROM=	distribute without fee

USE_GNUSTEP=	yes
USE_GNUSTEP_BACK=	yes
USE_GNUSTEP_BUILD=	yes
USE_GNUSTEP_INSTALL=	yes

post-patch:
	${RM} ${WRKSRC}/shared_obj/*.*

.include <bsd.port.mk>
