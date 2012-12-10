# New ports collection makefile for:   Exuberant Ctags
# Date created:        4 June 1996
# Whom:                jkoshy
#
# $FreeBSD: ports/devel/ctags/Makefile,v 1.43 2012/11/17 05:55:39 svnexp Exp $
#

PORTNAME=	ctags
PORTVERSION=	5.8
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	zeising@FreeBSD.org
COMMENT=	A feature-filled tagfile generator for vi and emacs clones

MAKE_JOBS_SAFE=  yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--enable-macro-patterns --with-readlib

MAN1=		exctags.1

SUB_FILES+=	pkg-message

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
