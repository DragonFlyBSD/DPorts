# New ports collection makefile for:	puredb
# Date created:		01 Nov 2002
# Whom:			Sergei Kolobov <sergei@kolobov.com>
#
# $FreeBSD: ports/databases/puredb/Makefile,v 1.12 2012/11/17 05:55:21 svnexp Exp $
#

PORTNAME=	puredb
PORTVERSION=	2.1
CATEGORIES=	databases
MASTER_SITES=	http://pureftpd.sourceforge.net/puredb/
DISTNAME=	pure-db-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Set of libraries for creating and reading constant databases

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

DOCS=		AUTHORS FORMAT_DESCR NEWS README

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
