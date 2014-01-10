# Created by: TERAMOTO Masahiro <markun@onohara.to>
# $FreeBSD: devel/p5-MouseX-ConfigFromFile/Makefile 338870 2014-01-06 12:43:03Z az $

PORTNAME=	MouseX-ConfigFromFile
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MASAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Abstract Mouse role for setting attributes from a configfile

BUILD_DEPENDS=	p5-Filter>=0:${PORTSDIR}/devel/p5-Filter \
		p5-Mouse>=0.19:${PORTSDIR}/devel/p5-Mouse \
		p5-MouseX-Types-Path-Class>=0.05:${PORTSDIR}/devel/p5-MouseX-Types-Path-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
