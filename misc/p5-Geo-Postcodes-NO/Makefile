# New ports collection makefile for:	p5-Geo-Postcodes-NO
# Date created:		2006-07-19
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/misc/p5-Geo-Postcodes-NO/Makefile,v 1.9 2012/11/17 05:59:43 svnexp Exp $
#

PORTNAME=	Geo-Postcodes-NO
PORTVERSION=	0.31
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Norwegian postcodes with associated information

BUILD_DEPENDS=	p5-Geo-Postcodes>=0.31:${PORTSDIR}/misc/p5-Geo-Postcodes
RUN_DEPENDS=	p5-Geo-Postcodes>=0.31:${PORTSDIR}/misc/p5-Geo-Postcodes

PERL_CONFIGURE=	yes

MAN3=		Geo::Postcodes::NO.3

.include <bsd.port.mk>
