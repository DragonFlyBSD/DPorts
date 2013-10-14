# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-ConfigReader-Simple/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	ConfigReader-Simple
PORTVERSION=	1.28
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple configuration file parser

TEST_DEPENDS=	p5-Test-Output>0:${PORTSDIR}/devel/p5-Test-Output \
		p5-Test-Warn>=0:${PORTSDIR}/devel/p5-Test-Warn

USES=		perl5
USE_PERL5=	configure

MAN3=		ConfigReader::Simple.3

NO_STAGE=	yes
.include <bsd.port.mk>
