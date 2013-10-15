# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: net/p5-Test-URI/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Test-URI
PORTVERSION=	1.08
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Test
PKGNAMEPREFIX=	p5-

MAINTAINER=	kaoru@kaisei.org
COMMENT=	Perl module for check URI

RUN_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI	\
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
BUILD_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI	\
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

MAN3=		Test::URI.3

NO_STAGE=	yes
.include <bsd.port.mk>
