# Created by: Alan Eldridge <alane@geeksrus.net>
# $FreeBSD: ports/print/cups/Makefile,v 1.60 2012/12/09 22:14:59 svnexp Exp $

PORTNAME=	cups
PORTVERSION=	1.5.4
CATEGORIES=	print
MASTER_SITES=	# empty
DISTFILES=	# empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Common UNIX Printing System: Metaport to install complete system

BUILD_DEPENDS=	espgs:${PORTSDIR}/${PKGCATEGORY}/cups-pstoraster \
		cupsd:${PORTSDIR}/${PKGCATEGORY}/cups-base
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_BUILD=	yes
NO_INSTALL=	yes

.include <bsd.port.mk>
