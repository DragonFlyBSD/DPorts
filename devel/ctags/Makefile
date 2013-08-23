# New ports collection makefile for:   Exuberant Ctags
# Date created:        4 June 1996
# Whom:                jkoshy
#
# $FreeBSD: devel/ctags/Makefile 324744 2013-08-14 22:35:50Z ak $
#

PORTNAME=	ctags
PORTVERSION=	5.8
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	zeising@FreeBSD.org
COMMENT=	A feature-filled tagfile generator for vi and emacs clones


GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--enable-macro-patterns --with-readlib

MAN1=		exctags.1

SUB_FILES+=	pkg-message

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
