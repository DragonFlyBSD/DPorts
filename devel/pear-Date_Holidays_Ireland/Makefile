# New ports collection makefile for:	pear-Date_Holidays_Ireland
# Date created:		2008-06-05
# Whom:			Thomas Abthorpe <tabthorpe@FreeBSD.org>
#
# $FreeBSD: ports/devel/pear-Date_Holidays_Ireland/Makefile,v 1.6 2012/11/17 05:56:38 svnexp Exp $
#

PORTNAME=	Date_Holidays_Ireland
PORTVERSION=	0.1.3
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Driver based class to calculate holidays in Ireland

BUILD_DEPENDS=	${PEARDIR}/Date/Holidays.php:${PORTSDIR}/devel/pear-Date_Holidays
RUN_DEPENDS=	${PEARDIR}/Date/Holidays.php:${PORTSDIR}/devel/pear-Date_Holidays

PEAR_AUTOINSTALLL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
