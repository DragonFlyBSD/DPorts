# Created by: Romain Tartiere <romain@blogreen.org>
# $FreeBSD: deskutils/tomboy-plugin-latex/Makefile 327718 2013-09-20 16:21:37Z bapt $

PORTNAME=	tomboy-plugin-latex
PORTVERSION=	0.6
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	http://www.reitwiessner.de/programs/tomboy-latex/v${PORTVERSION}/
DISTNAME=	tomboy-latex-${PORTVERSION}

MAINTAINER=	mono@FreeBSD.org
COMMENT=	LaTeX math plugin for Tomboy

BUILD_DEPENDS=	tomboy:${PORTSDIR}/deskutils/tomboy
RUN_DEPENDS=	tomboy:${PORTSDIR}/deskutils/tomboy

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
USE_TEX=	latex

NO_STAGE=	yes
.include <bsd.port.mk>
