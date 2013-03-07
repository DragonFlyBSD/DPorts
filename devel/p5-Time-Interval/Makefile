# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: ports/devel/p5-Time-Interval/Makefile,v 1.7 2013/02/07 19:32:08 svnexp Exp $

PORTNAME=	Time-Interval
PORTVERSION=	1.232
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Converts time intervals of days, hours, minutes, and seconds

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-TimeDate>0:${PORTSDIR}/devel/p5-TimeDate
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Time::Interval.3

.include <bsd.port.mk>
