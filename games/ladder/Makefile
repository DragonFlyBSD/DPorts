# Created by: Stefan Zehl <sec@42.org>
# $FreeBSD: games/ladder/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ladder
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://www.srv.net/~kth/ \
		ftp://ftp.42.org/pub/unix/games/
DISTFILES=	ladder.tar

MAINTAINER=	sec@42.org
COMMENT=	The old "ladder" game

RESTRICTED=	possible copyright problems ?

NO_WRKSUBDIR=	true
EXTRACT_CMD=		${TAR}
EXTRACT_BEFORE_ARGS=	-xf
EXTRACT_AFTER_ARGS=	# empty

NO_STAGE=	yes
.include <bsd.port.mk>
