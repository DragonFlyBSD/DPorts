# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: print/pscal/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pscal
PORTVERSION=	1.16
CATEGORIES=	print
MASTER_SITES=	http://www.panix.com/~mbh/pscal/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A utility for generating Postscript calendars

NO_BUILD=	yes
PLIST_FILES=	bin/pscal

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/pscal ${PREFIX}/bin

.include <bsd.port.mk>
