# New ports collection makefile for:	kdehier
# Date created:				4 May 2003
# Whom:					Frerich Raabe <frerich.raabe@gmx.de>
#
# $FreeBSD: ports/misc/kdehier/Makefile,v 1.31 2012/11/17 05:59:41 svnexp Exp $
#

PORTNAME=	kdehier
PORTVERSION=	1.0
PORTREVISION=	11
CATEGORIES=	misc kde
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utility port which installs a hierarchy of shared KDE directories

NO_BUILD=	yes
NO_WRKSUBDIR=	yes

do-fetch:
	@${DO_NADA}

do-install:
	@for dir in `${GREP} -v "^@comment" ${FILESDIR}/dirlist`; \
	do \
		${MKDIR} ${PREFIX}/$${dir}; \
		${TOUCH} ${PREFIX}/$${dir}/.keep_me; \
	done

.include <bsd.port.mk>
