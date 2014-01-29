# Created by: ijliao
# $FreeBSD: misc/latex-mk/Makefile 340722 2014-01-22 17:00:46Z mat $

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
