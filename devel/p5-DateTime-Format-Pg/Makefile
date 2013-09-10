# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: devel/p5-DateTime-Format-Pg/Makefile 326765 2013-09-08 17:07:30Z tobez $

PORTNAME=	DateTime-Format-Pg
PORTVERSION=	0.16.009
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and format PostgreSQL dates and times

BUILD_DEPENDS=	p5-DateTime>=0.10:${PORTSDIR}/devel/p5-DateTime \
		p5-DateTime-Format-Builder>=0.72:${PORTSDIR}/devel/p5-DateTime-Format-Builder \
		p5-DateTime-TimeZone>=0.05:${PORTSDIR}/devel/p5-DateTime-TimeZone
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=		DateTime::Format::Pg.3

.include <bsd.port.mk>
