# New ports collection makefile for:	tomboy-plugin-todo
# Date created:		2009-06-09
# Whom:			Romain Tartiere <romain@blogreen.org>
#
# $FreeBSD: ports/deskutils/tomboy-plugin-todo/Makefile,v 1.4 2012/11/17 05:55:31 svnexp Exp $
#

PORTNAME=	tomboy-plugin-todo
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	http://romain.blogreen.org/distfiles/
DISTNAME=	tomboy-todo-${PORTVERSION}

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Highlight FIXME, TODO, and XXX in your notes

BUILD_DEPENDS=	tomboy:${PORTSDIR}/deskutils/tomboy
RUN_DEPENDS=	tomboy:${PORTSDIR}/deskutils/tomboy

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

.include <bsd.port.mk>
