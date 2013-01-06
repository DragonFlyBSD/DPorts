# New ports collection makefile for:   crystal
# Date created:                        15th March, 2005
# Whom:                                decept
#
# $FreeBSD: ports/x11-themes/kde-windeco-crystal/Makefile,v 1.33 2012/11/17 06:03:32 svnexp Exp $
#

PORTNAME=	crystal
PORTVERSION=	1.0.7
PORTREVISION=	5
CATEGORIES=	x11-themes kde
MASTER_SITES=	http://www.kde-look.org/CONTENT/content-files/
PKGNAMEPREFIX=	kde-windeco-
DISTNAME=	13969-${PORTNAME}-${PORTVERSION}

MAINTAINER=	shanjobe@gmail.com
COMMENT=	Transparent KDE window decoration

USE_BZIP2=	yes
USE_KDEBASE_VER=3
USE_AUTOTOOLS=	libtool
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

NO_LATEST_LINK=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|-O2||g' ${WRKSRC}/${CONFIGURE_SCRIPT}

.include <bsd.port.mk>
