# New ports collection makefile for:    afm
# Date created:         23 November 1994
# Whom:                 ljo
#
# $FreeBSD: ports/print/afm/Makefile,v 1.20 2012/11/17 06:00:48 svnexp Exp $
#

PORTNAME=	afm
PORTVERSION=	1.0
CATEGORIES=	print
MASTER_SITES=	ftp://ftp.sgi.com/sgi/fax/source/
DISTNAME=	afm
EXTRACT_SUFX=	-tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Adobe Font Metrics

MAKE_JOBS_SAFE=	yes

pre-patch:
	@${RM} -rf ${WRKSRC}/RCS

do-build:
	@${TRUE}

.include <bsd.port.mk>
