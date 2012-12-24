# ex:ts=8
# Ports collection makefile for:	sedsed
# Date created:			Jan 14, 2003
# Whom:				ijliao
#
# $FreeBSD: ports/devel/sedsed/Makefile,v 1.6 2012/11/17 05:57:02 svnexp Exp $
#

PORTNAME=	sedsed
PORTVERSION=	1.0
CATEGORIES=	devel
MASTER_SITES=	http://sedsed.sourceforge.net/
EXTRACT_SUFX=	# empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A Python script that masters SED scripts

PLIST_FILES=	bin/sedsed
EXTRACT_CMD=	${CP}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=	${WRKDIR}

NO_WRKSUBDIR=	yes
NO_BUILD=	yes

USE_PYTHON=	yes

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTNAME} ${PREFIX}/bin/sedsed

.include <bsd.port.mk>
