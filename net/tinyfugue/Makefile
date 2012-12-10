# New ports collection makefile for:	tinyfugue
# Date created:		4 January 1997
# Whom:			mike@binghamton.edu
#
# $FreeBSD: ports/net/tinyfugue/Makefile,v 1.35 2012/11/17 06:00:23 svnexp Exp $
#

PORTNAME=	tf
PORTVERSION=	5.0b8
CATEGORIES=	net games
MASTER_SITES=	SF/tinyfugue/tinyfugue/5.0%20beta%208
DISTVERSION=	${PORTVERSION:S/.//}
DISTNAME=	${PORTNAME}-${DISTVERSION}

MAINTAINER=	fjoe@FreeBSD.org
COMMENT=	A popular programmable MUD client, with macro support and more

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-manpage --enable-version --enable-symlink --datadir=${PREFIX}/lib

PLIST_SUB=	DISTNAME=${DISTNAME}

.include <bsd.port.mk>
