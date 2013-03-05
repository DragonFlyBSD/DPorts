# Created by: alfred@freebsd.org
# $FreeBSD: ports/devel/libmtrie/Makefile,v 1.11 2013/01/12 13:02:14 svnexp Exp $

PORTNAME=	libmtrie
PORTVERSION=	1.0.3
CATEGORIES=	devel
MASTER_SITES=	http://people.freebsd.org/~alfred/sources/$(PORTNAME)/
DISTNAME=	$(PORTNAME)-${PORTVERSION}
USE_BZIP2=	yes

MAINTAINER=	rodrigo@bebik.net
COMMENT=	Library to build an IP-netmask based mtrie

USE_LDCONFIG= yes

.if defined(NOPROFILE)
PLIST_SUB+=     HURRRR="@comment "
.else
PLIST_SUB+=     HURRRR=""
.endif

.include <bsd.port.mk>
