# Created by: Nick Johnson <freebsd@spatula.net>
# $FreeBSD: games/sex/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	sex
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://spatula.net/software/sex/

MAINTAINER=	freebsd@spatula.net
COMMENT=	Spouts silly mad-lib-style porn-like text

MAN6=		sex.6
MANCOMPRESSED=	yes
PLIST_FILES=	bin/sex

NO_STAGE=	yes
post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
