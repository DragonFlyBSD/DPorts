# Created by: Masahiro Teramoto <markun@onohara.to>
# $FreeBSD: www/p5-HTML-RobotsMETA/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTML-RobotsMETA
PORTVERSION=	0.00004
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DMAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Parse HTML For Robots Exclusion META Markup

BUILD_DEPENDS=	p5-HTML-Parser>=3:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		HTML::RobotsMETA.3 \
		HTML::RobotsMETA::Rules.3

NO_STAGE=	yes
.include <bsd.port.mk>
