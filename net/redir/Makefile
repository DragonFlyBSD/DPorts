# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: net/redir/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	redir
PORTVERSION=	2.2.1
PORTREVISION=	2
CATEGORIES=	net
MASTER_SITES=	http://sammy.net/~sammy/hacks/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A TCP connection redirection utility

USE_RC_SUBR=	redir

MAN1=		redir.1
PLIST_FILES=	bin/redir

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/redir ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/redir.man ${MANPREFIX}/man/man1/redir.1

.include <bsd.port.mk>
