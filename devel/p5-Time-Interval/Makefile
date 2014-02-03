# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Time-Interval/Makefile 341707 2014-01-29 09:19:35Z az $

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

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
