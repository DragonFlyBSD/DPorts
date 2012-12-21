# ex:ts=8
# Ports collection makefile for:	latex-mk
# Date created:			May 22, 2003
# Whom:				ijliao
#
# $FreeBSD: ports/misc/latex-mk/Makefile,v 1.27 2012/11/17 05:59:41 svnexp Exp $
#

PORTNAME=	latex-mk
PORTVERSION=	2.1
PORTREVISION=	3
CATEGORIES=	misc print
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	A collection of makefile and scripts for LaTeX documents

BUILD_DEPENDS=	latex:${PORTSDIR}/print/teTeX-base \
		texi2dvi:${PORTSDIR}/print/texinfo
RUN_DEPENDS=	latex:${PORTSDIR}/print/teTeX-base \
		texi2dvi:${PORTSDIR}/print/texinfo

USE_GMAKE=	yes
GNU_CONFIGURE=	yes

LICENSE=	BSD

INFO=		latex-mk

.include <bsd.port.mk>
