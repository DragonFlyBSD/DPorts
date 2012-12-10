# New ports collection makefile for:   ladder
# Date created:        18 Feb 1998
# Whom:                Stefan Zehl <sec@42.org>
#
# $FreeBSD: ports/games/ladder/Makefile,v 1.7 2012/11/17 05:57:43 svnexp Exp $
#

PORTNAME=	ladder
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://www.srv.net/~kth/ \
		ftp://ftp.42.org/pub/unix/games/
DISTFILES=	ladder.tar

MAINTAINER=	sec@42.org
COMMENT=	The old "ladder" game

RESTRICTED=	"possible copyright problems ?"

NO_WRKSUBDIR=	true
EXTRACT_CMD=		${TAR}
EXTRACT_BEFORE_ARGS=	-xf
EXTRACT_AFTER_ARGS=	# empty

.include <bsd.port.mk>
