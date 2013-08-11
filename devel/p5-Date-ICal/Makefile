# Created by: Kimura Fuyuki <fuyuki@mj.0038.net>
# $FreeBSD: devel/p5-Date-ICal/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Date-ICal
PORTVERSION=	2.678
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for ICalendar date objects

BUILD_DEPENDS=	p5-Date-Leapyear>=1.03:${PORTSDIR}/devel/p5-Date-Leapyear
RUN_DEPENDS=	p5-Date-Leapyear>=1.03:${PORTSDIR}/devel/p5-Date-Leapyear

USES=		perl5
USE_PERL5=	configure

MAN3=		Date::ICal.3 Date::ICal::Duration.3

.include <bsd.port.mk>
