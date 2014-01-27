# Created by: Jacob Myers
# $FreeBSD: games/bsdrain/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	bsdrain
PORTVERSION=	5.0
CATEGORIES=	games
MASTER_SITES=	http://freebsd.unixfreunde.de/sources/ \
		http://whotookspaz.org/misc/freebsd/rain/
DISTNAME=	rain-${PORTVERSION}

MAINTAINER=	jacob@whotookspaz.org
COMMENT=	The original BSD rain program, ported from NetBSD

MAN6=		rain.6
MANCOMPRESSED=	yes

PLIST_FILES=	bin/rain

USE_BZIP2=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
