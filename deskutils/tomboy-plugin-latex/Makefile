# New ports collection makefile for:	tomboy-plugin-latex
# Date created:		2008-12-21
# Whom:			Romain Tartiere <romain@blogreen.org>
#
# $FreeBSD: ports/deskutils/tomboy-plugin-latex/Makefile,v 1.3 2012/11/17 05:55:31 svnexp Exp $
#

PORTNAME=	tomboy-plugin-latex
PORTVERSION=	0.6
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	http://www.reitwiessner.de/programs/tomboy-latex/v${PORTVERSION}/
DISTNAME=	tomboy-latex-${PORTVERSION}

MAINTAINER=	mono@FreeBSD.org
COMMENT=	LaTeX math plugin for Tomboy

BUILD_DEPENDS=	tomboy:${PORTSDIR}/deskutils/tomboy
RUN_DEPENDS=	tomboy:${PORTSDIR}/deskutils/tomboy \
		latex:${PORTSDIR}/print/teTeX-base

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

.include <bsd.port.mk>
