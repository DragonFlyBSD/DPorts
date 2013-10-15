# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: devel/p5-DateTime-Format-DateManip/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	DateTime-Format-DateManip
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert Date::Manip dates and durations to DateTimes and vice versa

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-Date-Manip>=0:${PORTSDIR}/devel/p5-Date-Manip

USES=		perl5
USE_PERL5=	modbuild

MAN3=		DateTime::Format::DateManip.3

NO_STAGE=	yes
.include <bsd.port.mk>
