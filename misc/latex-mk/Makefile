# Created by: ijliao
# $FreeBSD: misc/latex-mk/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	latex-mk
PORTVERSION=	2.1
PORTREVISION=	3
CATEGORIES=	misc print
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	A collection of makefile and scripts for LaTeX documents

BUILD_DEPENDS=	texi2dvi:${PORTSDIR}/print/texinfo
RUN_DEPENDS=	texi2dvi:${PORTSDIR}/print/texinfo

USE_TEX=	latex
USE_GMAKE=	yes
GNU_CONFIGURE=	yes

LICENSE=	BSD

INFO=		latex-mk

NO_STAGE=	yes
.include <bsd.port.mk>
