# New ports collection makefile for:	iplike
# Date created:		5 January 2010
# Whom:			Sevan Janiyan <venture37@geeklan.co.uk>
#
# $FreeBSD: ports/databases/iplike/Makefile,v 1.5 2012/11/17 05:55:08 svnexp Exp $
#

PORTNAME=	iplike
PORTVERSION=	2.0.2
CATEGORIES=	databases
MASTER_SITES=	SF/opennms/IPLIKE/stable-2.0/

MAINTAINER=	venture37@geeklan.co.uk
COMMENT=	C implementation of the OpenNMS iplike stored procedure

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_PGSQL=	yes
SUB_FILES=	pkg-message

PLIST_FILES=	lib/postgresql/iplike.la \
	lib/postgresql/iplike.so \
	sbin/install_iplike.sh

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
