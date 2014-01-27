# Created by: Sergei Kolobov <sergei@kolobov.com>
# $FreeBSD: databases/puredb/Makefile 340722 2014-01-22 17:00:46Z mat $

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
NO_STAGE=	yes

DOCS=		AUTHORS FORMAT_DESCR NEWS README

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
