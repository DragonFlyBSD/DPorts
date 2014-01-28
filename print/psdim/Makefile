# Created by: e-masson@kisoft-services.com
# $FreeBSD: print/psdim/Makefile 340722 2014-01-22 17:00:46Z mat $

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
