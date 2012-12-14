# New ports collection makefile for:	xpi-informenter
# Date created:		14 September 2006
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/www/xpi-informenter/Makefile,v 1.16 2012/11/17 06:03:12 svnexp Exp $
#

PORTNAME=	informenter
PORTVERSION=	0.6.3
DISTVERSIONSUFFIX=	-fx
CATEGORIES=	www

MAINTAINER=	gecko@FreeBSD.org
COMMENT=	Helps fill forms out

XPI_ID=		{5546F97E-11A5-46b0-9082-32AD74AAA920}
XPI_NUM=	673
XPI_FILES=	chrome/informenter.jar defaults/preferences/informenter.js install.rdf chrome.manifest
XPI_DIRS=	chrome defaults/preferences defaults

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
