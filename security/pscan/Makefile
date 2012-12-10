# New ports collection makefile for:	pscan
# Date created:				02 September 2000
# Whom:					Kris Kennaway <kris@FreeBSD.org>
#
# $FreeBSD: ports/security/pscan/Makefile,v 1.9 2012/11/17 06:01:16 svnexp Exp $
#

PORTNAME=	pscan
PORTVERSION=	1.3
CATEGORIES=	security devel
MASTER_SITES=	http://deployingradius.com/pscan/
DISTNAME=	${PORTNAME}

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	Security C code scanner for misuse of format strings

ALL_TARGET=	#empty
WRKSRC=		${WRKDIR}

PLIST_FILES=	bin/pscan \
		bin/find_formats

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pscan ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/find_formats.sh ${PREFIX}/bin/find_formats

.include <bsd.port.mk>
