# Created by: jkh
# $FreeBSD: editors/jove/Makefile 327720 2013-09-20 16:36:23Z bapt $

PORTNAME=	jove
PORTVERSION=	4.16
PORTREVISION=	1
CATEGORIES=	editors
MASTER_SITES=	ftp://ftp.cs.toronto.edu/pub/moraes/jove/ \
		${MASTER_SITE_LOCAL:S/$/:local/}
MASTER_SITE_SUBDIR=	simon/:local

MAINTAINER=	simon@FreeBSD.org
COMMENT=	Jonathan's Own Version of Emacs

WRKSRC=		${WRKDIR}/${PORTNAME}
MAN1=		jove.1 teachjove.1

NO_STAGE=	yes
.include <bsd.port.mk>
