# New ports collection makefile for:	devel/p5-Time-Interval
# Date created:				15 February 2007
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Time-Interval/Makefile,v 1.5 2012/11/17 05:56:35 svnexp Exp $
#

PORTNAME=	Time-Interval
PORTVERSION=	1.22
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Converts time intervals of days, hours, minutes, and seconds

BUILD_DEPENDS=	p5-TimeDate>0:${PORTSDIR}/devel/p5-TimeDate
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Time::Interval.3

.include <bsd.port.mk>
