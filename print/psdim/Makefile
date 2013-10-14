# Created by: e-masson@kisoft-services.com
# $FreeBSD: print/psdim/Makefile 327765 2013-09-20 22:43:59Z bapt $

PORTNAME=	psdim
PORTVERSION=	1.4
PORTREVISION=	6
CATEGORIES=	print
MASTER_SITES=	http://www.mathstat.dal.ca/~selinger/psdim/download/

MAINTAINER=	emss@free.fr
COMMENT=	Utility that calculates the optimal placement of the pages for n-up printing

USE_GHOSTSCRIPT=yes

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}

MAN1=		psdim.1

NO_STAGE=	yes
.include <bsd.port.mk>
