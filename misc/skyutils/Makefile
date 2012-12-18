# ports collection makefile for:	skyutils
# Date created:				21 February 2004
# Whom: 				Machiel Mastenbroek <machiel_mastenbroek@hotmail.com>
#
# $FreeBSD: ports/misc/skyutils/Makefile,v 1.24 2012/11/17 05:59:45 svnexp Exp $
#

PORTNAME=	skyutils
PORTVERSION=	2.9
PORTREVISION=	2
CATEGORIES=	misc
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	laszlof

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A library required by smssend (same author)

GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	autoconf libtool
USE_LDCONFIG=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

pre-configure:
	@${REINPLACE_CMD} -e's/[[:cntrl:]]*$$//' ${WRKSRC}/src/skyutils.h

.include <bsd.port.mk>
