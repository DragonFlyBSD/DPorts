# New ports collection makefile for:    zipper.app
# Date created:         31 Aug 2006
# Whom:                 gurkan@phys.ethz.ch
#
# $FreeBSD: ports/archivers/zipper/Makefile,v 1.15 2012/11/17 05:54:24 svnexp Exp $
#

PORTNAME=	zipper
PORTVERSION=	1.4
CATEGORIES=	archivers gnustep
MASTER_SITES=	${MASTER_SITE_SAVANNAH}
MASTER_SITE_SUBDIR=	gap
DISTNAME=	Zipper-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool for inspecting the contents of a compressed archive

USE_GNUSTEP=	yes
USE_GNUSTEP_BACK=	yes
USE_GNUSTEP_BUILD=	yes
USE_GNUSTEP_INSTALL=	yes

post-patch:
	cd ${WRKSRC} && ${FIND} . -name "*#*" -exec ${RM} -f -v "{}" ";"

.include <bsd.port.mk>
