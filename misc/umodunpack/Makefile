# New ports collection makefile for:	umodunpack
# Date created:				19 October 2006
# Whom:					Alexander Logvinov <ports@logvinov.com>
#
# $FreeBSD: ports/misc/umodunpack/Makefile,v 1.4 2013/02/20 16:45:24 svnexp Exp $
#

PORTNAME=	umodunpack
PORTVERSION=	0.4
CATEGORIES=	misc
MASTER_SITES=	http://www.deepsky.com/~misaka/scripts/
DISTNAME=	${PORTNAME}.pl
EXTRACT_SUFX=
EXTRACT_ONLY=

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Unpack umod files for Unreal and/or Unreal Tournament

USE_PERL5_RUN=	yes
NO_WRKSUBDIR=	yes
NO_BUILD=	yes
PLIST_FILES=	bin/${DISTNAME}

do-install:
	@${INSTALL_SCRIPT} ${DISTDIR}/${DISTNAME} ${PREFIX}/bin/${DISTNAME}

.include <bsd.port.mk>
